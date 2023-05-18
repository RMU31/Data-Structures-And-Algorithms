#include <iostream>
#include <vector>

#include "Data.h"
#include "MoviesList.h"
#include "SearchMoviesData.h"
#include "Movies.h"

using namespace std;

int main() {
    // initialises the new linked list
    MoviesList *moviesList = new MoviesList;

    // calls the getData method to retrieve the data from the Movies .csv file
    getData(moviesList, "../100 Best Movies on Netflix.csv");

    // Asks the user what category they would like to search movies by
    cout << "Welcome! Please choose which category you would like to search movies by" << endl;
    cout << "These are the categories available to search netflix movies by" << endl;

    // called from the Data file to display the available search categories.
    searchCategories();

    // assigning the input entered by the user to this static string
    cin >> searchBy;

    // limiting search to just score for now- only in this example
    cout << "Thank you for choosing score! Please pick a score between 87-100" << endl;

    // assigns their score value to this static string to be used when calling the BinarySearch algorithm
    cin >> filterBy;

    // Calls the BinarySearch algorithm to sort and search through the linked list
    BinarySearch(&moviesList->first, filterBy);

    // displays the movies searched for
    moviesList->Display();



//    cout << moviesList->first << endl;


    return 0;
}
