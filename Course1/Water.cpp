#include <iostream>
#include <string>

std::string needs_water(int days, bool is_succulent) {
	  std::string result;

	    if (is_succulent) {
		        if (days <= 12) {
				      result = "Don't water the plant!\n";
				          }
			    else if (days >=13) {
				          result = "Go ahead and give the plant a little water.\n";
					      }

			      }
	      else {
		          if (days > 3){
				        result = "Time to water the plant.\n";
					    }
			      else {
				            result = "Don't water the plant!";
					        }
			        }
	        return result;
}


int main() {
	  
	  std::cout << needs_water(10, false) << "\n";
	    
}
