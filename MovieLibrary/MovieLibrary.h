#ifndef MOVIELIBRARY_H
#define MOVIELIBRARY_H
#include <vector>
#include <string>
#include "Movie.h"

class MovieLibrary {
public:
		//Constructor
		MovieLibrary();
		
		//Destructor
		~MovieLibrary();
		
		//Attributes
		std::vector<Movie> library;
		
		//Methods
		void add_movie(Movie film);
		void display_movies();
		void increase_views_lib(std::string film_name);
		

};

#endif // MOVIELIBRARY_H
