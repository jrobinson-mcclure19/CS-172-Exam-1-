#include <iostream>
#include <iostream>
#include "movie.h"
using namespace std;

// Default movie
Movie::Movie()
{
	movie = 1;
}
// Constructor
Movie::Movie(string newTitle, string newGenre, int newShowTime)
{
	// changes title, genre, and showtime
	title = newTitle;
	genre = newGenre;
	showtime = newShowTime;

}
// finctions that return title, genre, and showtime;
string Movie::GetTitle()
{
	return title;
}
string Movie::GetGenre()
{
	return genre;
}
int Movie::GetShowTime()
{
	return showtime;
}
