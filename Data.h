#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <sstream>

using namespace std;
using namespace std::chrono;

vector<vector<string>> getData(string fileName) {
    vector<vector<string>> moviesData;
    vector<string> row;
    string line, word;

    fstream file (fileName, ios::in);
    if(file.is_open()) {
        while(getline(file, line)){ // gets each line of the file
            stringstream str(line);
            while(getline(str, word, ',')) { // gets each section of the line separated by ','
                row.push_back(word);
            }
            moviesData.push_back(row);
        }
    }
    else {
        cout<<"Could not open the file" << endl;
    }

    return moviesData;
}