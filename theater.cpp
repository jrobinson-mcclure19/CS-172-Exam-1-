#include <iostream>
#include <string>
#include "theater.h"
#include "movie.h" 
using namespace std;

Theater::Theater(string newname, string newphone)
{
	name = newname;
	phone = newphone;
}
string Theater::GetMovieForHour(int newHour)
{
	hour = newHour;
}

void Theater::AddMovie(Movie& newmovie)
{
	newmovie;
}

int Theater::GetShowTimeForGenre(string newGenre)
{
	genre = newGenre;
}
int Theater::GetCokePrice()
{
	return Cokeprice;
}
int Theater::GetPopcornPrice()
{
	return PopcornPrice;
}



