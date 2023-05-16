#include <iostream>
#include <string>
#include <map>
#pragma once

using namespace std;
using namespace std::chrono;

static string searchBy;
static string filterBy;

// Defining the movies class
class Movies {
public:
    map<string, string> data;
    Movies *next;

    ~Movies() {}

    // Movies constructor
    Movies(string rank, string title, string year, string score, string director, string cast, string consensus) {
        data["rank"] = rank;
        data["title"] = title;
        data["year"] = year;
        data["score"] = score;
        data["director"] = director;
        data["cast"] = cast;
        data["consensus"] = consensus;

    }

    // This method will display the categories available to the user to filter the dataset by.
    void Display() {
        cout << "Rank: " << data["rank"] << endl;
        cout << "Movie Title: " << data["title"] << endl;
        cout << "Release Year: " << data["year"] << endl;
        cout << "Critics Score /100: " << data["score"] << endl;
        cout << "Director: " << data["director"] << endl;
        cout << "Cast: " << data["cast"] << endl;
        cout << "Critics Consensus: " << data["consensus"] << endl;
    }

    string getCategory() {
        return data[searchBy];
    }
};
