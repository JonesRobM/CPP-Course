#include <iostream>

int main() {
	  
	  double eweight;
	    double weight;
	      int x;

	        std::cout << "Please enter your weight on earth.\n";
		  std::cin >> eweight;

		    std::cout << "\nI have information regarding the following planets.\n";
		      std::cout << "  1.  Venus   2. Mars  3.  Jupiter\n";
		        std::cout << "  4.  Saturn  5.  Uranus  6.  Neptune\n";
			  std::cout << "Which planet are you fighting on?\n";

			    std::cin >> x;

			      switch(x) {
				          case 1: 

						        weight = eweight * 0.78;
							      break;
							           case 2:

							              weight = eweight * 0.39;
								              break;
									           case 3:

									            weight = eweight * 2.65;
										          break;

											       case 4:

											        weight = eweight * 1.17;
												      break;

												           case 5:

												            weight = eweight * 1.05;
													          break;

														       case 6:

														          weight = eweight * 1.23;
															          break;

																        default:

																          weight = eweight;
																	          break;
																		    }

			        std::cout << "Your weight will be " << weight << "kg.\n";
}
