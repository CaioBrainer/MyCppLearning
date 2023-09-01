#include <iostream>
#include <string>
#include "Movie.h"
#include "MovieLibrary.h"


int main() {
	
//	MovieLibrary biblioteca = MovieLibrary();
//	Movie shrek = Movie("Shrek", "10", 10);
//	Movie lotr = Movie("Lord of the Rings", "10", 10); 
//	Movie shrek2 = Movie("Shrek", "10", 10);
	//lotr.increase_views();
	
	//adding filmes
//	biblioteca.add_movie(shrek);
//	biblioteca.add_movie(lotr);
	
	//checking if we can add a repeated film
	//biblioteca.add_movie(shrek2);

	//displaying my films added to library
//	biblioteca.display_movies();
//	biblioteca.increase_views_lib("Shrek");
//	biblioteca.display_movies();



	std::cout <<"=====================================================================\n";
	std::cout <<"===================WELCOME TO MY MOVIE LIBRARY APP===================\n";
	std::cout <<"=====================================================================\n";
	//initializing the library
	MovieLibrary library = MovieLibrary();
	
	
	char answer = 'n';
	do {
		int option {0}; 
		std::cout << "Select an option" << std::endl;
		std::cout << "1 - Add a movie to the library." << std::endl;
		std::cout << "2 - Display movie library." << std::endl;
		std::cout << "3 - Exit application" << std::endl;
		std::cin >> option;
		
		if (option == 1) {
			std::string name {};
			std::string rating {};
			int views {0};
			
			std::cout << "type the name of the movie" << std::endl;
			std::cin >> name;
			std::cout << "type the rating of the movie" << std::endl;
			std::cin >> rating;
			std::cout << "type the numbers of times you watched the movie" << std::endl;
			std::cin >> views;
			Movie movie = Movie(name, rating, views);
			library.add_movie(movie);}
			
			
		else if (option == 2)
			library.display_movies();
		
		else if (option == 3) {
			std::cout << "Stop running? (y/n): " << std::endl;
			std::cin >> answer;
			answer = tolower(answer);
			
			if (answer!= 'n' && answer != 'y')
				do {
					std::cout << "Type a valid option!" << std::endl;
					std::cout << "Stop running? (y/n): " << std::endl;
					std::cin >> answer;} while (answer != 'n' && answer != 'y');}
					
	} while (answer == 'n'); 
	
	return 0;
}
