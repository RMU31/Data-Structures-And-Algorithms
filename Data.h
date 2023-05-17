#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <sstream>

#include "MoviesList.h"

using namespace std;
using namespace std::chrono;

// Method to get the movies from the csv file
// Will add it to our linked list
void getData(MoviesList *moviesList, string fileName) {

    // each element will be stored in this vector called row
    vector<string> row;
    string line, word;

    // using fstream to open the csv file
    fstream file (fileName, ios::in);
    if(file.is_open()) {
        // using the getLine method in a loop
        while(getline(file, line)){
            row.clear();
            stringstream str(line);
            while(getline(str, word, ',')) {
                row.push_back(word);
            }
            moviesList->Insert(new Movies(row[1], row[2], row[3], row[4], row[5], row[6], row[7]));
            moviesList->size++;
        }
    }
    else {
        cout<<"Could not open the data file" << endl;
    }
}

// Displays the categories to search by to the user and stores them
void searchCategories() {
    string moviesOptions[] = {"rank", "year", "score"};
    for (const auto &item: moviesOptions){
        cout << " | " << item;
    }
    cout << endl;
}
