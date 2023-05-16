#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <sstream>

#include "MoviesList.h"

using namespace std;
using namespace std::chrono;

Movies* getMiddleValue(Movies* start, Movies* last) {
    if (start == NULL)
        return NULL;

    Movies* slow = start;
    Movies* fast = start -> next;

    while (fast != last) {
        fast = fast -> next;

        if(fast != last) {
            slow = slow -> next;
            fast = fast -> next;
        }
    }

    return slow;
}

int BinarySearch(Movies *head, string filterBy) {
    Movies* start = head;
    Movies* last = NULL;

    do {
        Movies* mid = getMiddleValue(start, last);

        if(mid == NULL)
            return NULL;


        if (mid -> data == filterBy)
            return mid;


        else if(mid -> data < filterBy)
            start = mid -> next;

        else
            last = mid;
        
    } while (last == NULL || last != start);

    return NULL;
}
