#include <iostream>

#include "Hydro.hpp"
#include  "Cout.hpp"

int main() {
	double prix;
	Hydro cout1(1, 0.5);
	
	prix = cout1.calcul(1);

	std::cout << prix;
	

	return 0;
}
