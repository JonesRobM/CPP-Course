#include <iostream>
#include <vector>

std::vector<int> first_three_multiples(int num) {
	  std::vector<int> multiples;
	    multiples.push_back(num*1);
	      multiples.push_back(num*2);
	        multiples.push_back(num*3);
		  return multiples;

}

int main() {
	  
	  for (int element : first_three_multiples(8)) {
		      std::cout << element << "\n";
		        }
	    
}