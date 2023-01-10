#include <iostream>
#include <vector>
#include "ufo_functions.hpp"

int main() {
	std::string codeword = "teacup";
	std::string answer = "______";

	int misses = 0;
	std::vector<char> incorrect;
	bool guess = false;

	greet();

	char letter;

	while (misses < 7 && answer != codeword) {
		  display_misses(misses);
		    display_status(incorrect, answer);
		      std::cout << "\nPlease enter your guess: \n";
		        std::cin >> letter;

			  for (int i = 0; i < codeword.length(); i++) {
				      if (letter == codeword[i]) {

					            answer[i] = letter;
						          guess = true;
							      }
				        }
			    if (guess) {
				        std::cout << "Correct!\nYou're getting there, buddy!\n";
					  }
			      else {
				          std::cout << "\nIncorrect! The tractor beam pulls the person in further.\n";
					    incorrect.push_back(letter);
					      misses++;
					        }
			       guess = false;
	}

	end_game(answer, codeword);

}

