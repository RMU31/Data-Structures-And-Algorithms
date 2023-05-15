#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <sstream>

#include "Data.h"
#include "MoviesList.h"

using namespace std;

int main() {
    MoviesList *moviesList = new MoviesList;

    getData(moviesList, "../100 Best Movies on Netflix.csv");
    return 0;
}
