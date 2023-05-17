#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <sstream>
#include<stdio.h>
#include<stdlib.h>

#include "MoviesList.h"

using namespace std;
using namespace std::chrono;

map <string, string> Movies* getMiddleValue(Movies* start, Movies* last) {
    if (start == NULL)
        return NULL;

    Movies* slow = start;
    Movies* fast = start->next;

    while (fast != last) {
        fast = fast->next;

        if(fast != last) {
            slow = slow->next;
            fast = fast->next;
        }
    }

    return slow;
}

//void getMiddleValue(Movies* head, Movies** frontRef, Movies** backRef) {
//
//    Movies *slow = head;
//    Movies *fast = head->next;
//
//
//    while(fast != NULL) {
//        fast = fast->next;
//        if(fast != NULL) {
//            slow = slow->next;
//            fast = fast->next;
//        }
//    }
//
//    *frontRef = head;
//    *backRef = slow->next;
//    slow->next = NULL;
//}

map <string, string> Movies* BinarySearch(Movies *head, string key) {
    Movies* start = head;
    Movies* last = NULL;

    do {
        Movies* mid = getMiddleValue(start, last);

        if(mid == NULL)
            return NULL;


        if (mid->data == key)
            return mid;


        else if (mid->data < key)
            start = mid->next;

        else
            last = mid;

    } while (last == NULL || last != start);

    return NULL;
}
