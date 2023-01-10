#include <iostream>

int main() {
	  
	  double pesos_val;
	    double reais_val;
	      double soles_val;
	        double pesos_con = 0.00032;
		  double reais_con = 0.27;
		    double soles_con = 0.3;
		      double usd;

		        std::cout << "Enter your value of Colombian Pesos:\n";
			  std::cin >> pesos_val;

			    std::cout << "Enter your value of Brazilian Reais:\n";
			      std::cin >> reais_val;

			        std::cout << "Enter your value of Peruvian Soles:\n";
				  std::cin >> soles_val;

				    usd = pesos_val*pesos_con + reais_val*reais_con + soles_val*soles_con;
				      std::cout << "You currently have $" << usd << " of foreign South American crap!\n";
				        
}
