#include <iostream>
#include <stdlib.h>
#include <ctime>
int main() {
	  
	       srand (time(NULL));
	         int	coin = rand() % 2;
	           
	             // If number is 0: Heads
	               // If it is not 0: Tails
	                 
	                   if (coin == 0) {
	                     
	                         std::cout << "Heads\n";
	                           
	                             }
	                             	else {
	                             		
	                             		    std::cout << "Tails\n";
	                             		      
	                             		        }
	                             		          
	                             		          }
