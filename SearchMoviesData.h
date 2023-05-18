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

// Method created to get the middle point of the linked list
// slow and fast pointers used, where fast will jum 2 steps and slow only 1. When fast reaches the end, slow will reach the middle value.
Movies *getMiddleValue(Movies* start, Movies* last) {
    if (start == nullptr)
        return nullptr;

    // creates the references
    Movies* slow = start;
    Movies* fast = start->next;

    // while loop to iterate the slow and fast points through the list
    // normally this while loop has an extra if condition to increment fast one more time, but refactored it in the while loop itself using next twice
    while (fast != last && fast->next != last) {
        slow = slow->next;
        fast = fast->next->next;
    }

    // returns the mid point which is where the slow pointer stops when fast reaches the end.
    return slow;
}

//
Movies *BinarySearch(Movies **head, string target) {
    Movies* start = *head;
    Movies* last = nullptr;
    string key = "score";

    do {
        Movies* mid = getMiddleValue(start, last);

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
