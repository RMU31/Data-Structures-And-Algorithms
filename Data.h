#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <sstream>

#include "MoviesList.h"

using namespace std;
using namespace std::chrono;

void getData(MoviesList *moviesList, string fileName) {
    vector<string> row;
    string line, word;

    fstream file (fileName, ios::in);
    if(file.is_open()) {
        while(getline(file, line)){
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

