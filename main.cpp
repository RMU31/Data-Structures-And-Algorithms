#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <sstream>

#include "Data.h"

using namespace std;

int main() {
    vector<vector<string>> moviesData = getData("../100 Best Movies on Netflix.csv");

    for(int row=0;row<moviesData.size();row++) {
        for(int column=0;column<moviesData[row].size();column++) {
            cout << moviesData[row][column];
        }
        cout << "\n";
    }
    return 0;
}
