#include <iostream>
#include "Movie.h"


Movie::Movie(std::string name, std::string rating, int watched): 
	movie_name(name), movie_rating(rating), times_watched(watched) {}

Movie::~Movie() {}

void Movie::increase_views() {
	times_watched++;}