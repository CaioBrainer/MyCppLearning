#ifndef MOVIE_H
#define MOVIE_H
#include <string>

class Movie {
	public:
		//Constructor
		Movie(std::string name, std::string rating, int watched);
		
		//Destructor
		~Movie();
		
		//Attributes
		std::string movie_name;
		std::string movie_rating;
		int times_watched;
		void increase_views();

};

#endif // MOVIE_H
