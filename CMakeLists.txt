cmake_minimum_required(VERSION 3.24)
project(NetflixMovies)

set(CMAKE_CXX_STANDARD 17)

add_executable(NetflixMovies main.cpp Movies.h MoviesList.h Data.h SortMoviesData.h)
