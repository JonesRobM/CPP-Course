#include <iostream>

int main() {

	  int Year = 0;
	    
	    std::cout << "What year is it?\n";
	      std::cin >> Year;


	        if ( (Year <1000) || (Year > 9999) ){
			    std::cout << "Fuck off!\n";
			      }
		  
		  else if ( (Year % 4 == 0) && (Year % 100 != 0) || Year % 400 == 0 ){
			      std::cout << "That's a leap year, son!\n" << Year;
			        }
		    else {
			        std::cout << "Not a leap year, brah.\n" << Year;
				  }
		      
}
