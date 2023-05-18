#include "Movies.h"
#include <list>
#pragma once

class MoviesList {
public:
    Movies *first;
    list<Movies> movies;
    int size;

    MoviesList() {
        first= 0;
        size = 0;
    }

    void Insert(Movies *newMovies) {
        newMovies->next = first;
        first = newMovies;
    }

    void DisplayData() {
        Movies *current = first;
        int count = 0;

        while(current != 0) {
            current->Display();
            current = current->next;
            count++;
        }
    }

};