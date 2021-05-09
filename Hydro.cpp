
#include <iostream>

#include "Hydro.hpp"

Hydro::Hydro(float debis, int cout) {
	this->debit = debit;
	this->cout = cout;
}

double Hydro::calcul(int jour) {
	
	double prixCalc = (double) (this->debit * 86400 * jour * (this->cout/100));

	return prixCalc;
}