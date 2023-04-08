#pragma once
#include "SpatiuComercial.h"

class Restaurant : public SpatiuComercial
{
public:
	Restaurant();
	Restaurant(std::string, int, int, int);
	~Restaurant();
	Restaurant(Restaurant& copie_restaurant);
	Restaurant operator=(const Restaurant& copie_restaurant);
	void afisare();
	void renoveaza();
	void detalii();
};


class Moda : public SpatiuComercial
{
public:
	Moda();
	Moda(std::string, int, int, int);
	~Moda();
	Moda(Moda& copie_magazin);
	friend std::ostream& operator<<(std::ostream& output, const Moda& afisare_magazin);
	void renoveaza();
	void detalii();
	void afisare();

};
