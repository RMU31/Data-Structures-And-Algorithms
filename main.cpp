#include <iostream>
#include <vector>

#include "Data.h"
#include "MoviesList.h"
#include "SearchMoviesData.h"

using namespace std;

int main() {
    MoviesList *moviesList = new MoviesList;

    getData(moviesList, "../100 Best Movies on Netflix.csv");

    cout << "Welcome! Please choose which category you would like to search movies by" << endl;
    cout << "These are the categories available to search netflix movies by" << endl;
    searchCategories();
    cin >> searchBy;

    cout << "Thank you for choosing score! Please pick a score between 87-100" << endl;
    cin >> filterBy;

    BinarySearch(Movies &moviesList, filterBy);


    return 0;
}
