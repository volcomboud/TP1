#pragma once

#include <iostream>

#include "Cout.hpp"

class Hydro : public Cout {
protected:
	float debit=0;
public:
	Hydro(float debit, int cout);
	double calcul(int jour);
};