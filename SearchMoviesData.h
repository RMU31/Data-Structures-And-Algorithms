#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <sstream>
#include<stdio.h>
#include<stdlib.h>
#include <map>

#include "MoviesList.h"

using namespace std;
using namespace std::chrono;

Movies *getMiddleValue(Movies* start, Movies* last) {
    if (start == nullptr)
        return nullptr;

    Movies* slow = start;
    Movies* fast = start->next;

    while (fast != last && fast->next != last) {
        slow = slow->next;
        fast = fast->next->next;
    }

    return slow;
}

Movies *BinarySearch(Movies* head, string target) {
    Movies* start = head;
    Movies* last = nullptr;
    string key = "score";

    do {
        Movies* mid = getMiddleValue(start, last);
        cout << mid << endl;

        if(mid == nullptr)
            return nullptr;


        if (mid->data[key] == target)
            return mid;


        else if (mid->data[key] < target)
            start = mid->next;

        else
            last = mid;

    } while (last == nullptr || last != start);

    return nullptr;
}
