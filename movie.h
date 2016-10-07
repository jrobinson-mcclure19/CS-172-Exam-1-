#include <iostream>
#include <string> 
using namespace std;

#ifndef MOVIE_H
#define MOVIE_H

// Class for the movies
class Movie
{
public:

	// constructor
	Movie();
	Movie(string Title, string Genre, int ShowTime);
	// Get title, genre, and showtime
	string GetTitle();
	string GetGenre();
	int GetShowTime();

private:
	//data fields
	string movie;
	string title;
	string genre;
	int showtime;


};

#endif // !MOVIE_H
