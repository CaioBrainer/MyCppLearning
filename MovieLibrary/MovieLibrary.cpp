#include <iostream>
#include "MovieLibrary.h"

MovieLibrary::MovieLibrary() {
	std::cout << "MovieLibrary Object created." << std::endl;
}

MovieLibrary::~MovieLibrary() {
	std::cout << "MovieLibrary Object destroyed." << std::endl;
}

void MovieLibrary::add_movie(Movie film) {
	
	//add movie to library and check if its already added
	if (library.size() == 0) {
		library.push_back(film);
		std::cout << film.movie_name <<" added to Library Object." << std::endl;}
	else
		for (size_t i=0; i<library.size(); i++)
			if (library.at(i).movie_name == film.movie_name) {
				std::cout << library.at(i).movie_name << " already present in library." << std::endl;
				break;
				}
				
			else {
					library.push_back(film);
					//std::cout << film.movie_name <<" added to Library Object." << std::endl;
					break;}
}

void MovieLibrary::display_movies() {

	std::cout << "=====================================================================\n";
	std::cout << "                         MY MOVIE LIBRARY                            \n";
	std::cout << "=====================================================================\n\n";
	for (auto indice: library)
		std::cout << "Movie name: " << indice.movie_name << " | " << 
		"Rating: "<< indice.movie_rating << " | " << 
		"Views: "<< indice.times_watched << " | " << 
		std::endl;;
		
	std::cout << "\n=====================================================================\n";
}

void MovieLibrary::increase_views_lib(std::string film_name) {
	for (size_t i {0}; i < library.size(); i++)
		if (film_name == library.at(i).movie_name)
			library.at(i).increase_views();
}