#include "Movies.h"
#pragma once

class MoviesList {
public:
    Movies *first;
    int size;

    MoviesList() {
        first= 0;
        size = 0;
    }

    void Insert(Movies *newMovies) {
        newMovies->next = first;
        first = newMovies;
    }

    void Display() {
        Movies *current = first;
        int count = 0;

        while(current != 0) {
            current->Display();
            current = current->next;
            count++;
        }
    }
};