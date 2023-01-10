#include <iostream>
#include <vector>

int main() {
	  
	  int total_even = 0;
	    int product_odd = 1;
	      
	      std::vector<int> vector = {2, 4, 3, 6, 1, 9};
	        for ( int i=0; i < vector.size(); i++){
			    if (vector[i] % 2 == 0) {
				          total_even = total_even + vector[i];
					      }
			        else {
					      product_odd = product_odd * vector[i];
					          }
				  }
		  std :: cout << "The sum of the even terms is: " << total_even << ".\n";
		    std :: cout << "The product of all of the odd is: " << product_odd << ".\n";
}
