#pragma once
#include "Magazine.h"
#include "Jobs.h"

class Mall
{
private:
	SpatiuComercial** locatii;
	Personal** angajati;
	int numar_locatii, numar_angajati;
public:
	Mall(int numar_locatii, int numar_angajati)
	{
		this->numar_locatii = 0;
		this->numar_angajati = 0;
		locatii = new SpatiuComercial * [numar_locatii];
		angajati = new Personal * [numar_angajati];
	}

	~Mall()
	{
		numar_locatii = 0;
		numar_angajati = 0;
		delete[]locatii;
		delete[]angajati;
	}

	void adaugare_magazin(Restaurant locatie)
	{
		locatii[this->numar_locatii++] = new Restaurant(locatie);
	}

	void adaugare_magazin(Moda locatie)
	{
		locatii[this->numar_locatii++] = new Moda(locatie);
	}

	void adaugare_angajati(Manager angajat)
	{
		angajati[this->numar_angajati++] = new Manager(angajat);
	}

	void adaugare_angajati(Vanzator angajat)
	{
		angajati[this->numar_angajati++] = new Vanzator(angajat);
	}

	void adaugare_angajati(Paznic angajat)
	{
		angajati[this->numar_angajati++] = new Paznic(angajat);
	}

	void afisare_locatii()
	{
		for (int i = 0; i < numar_locatii; i++)
		{
			//std::cout << locatii[i] << "\n\n";
			locatii[i]->afisare();
		}
	}

	void afisare_angajati()
	{
		for (int i = 0; i < numar_angajati; i++)
		{
			//std::cout << angajati[i] << "\n\n";
			angajati[i]->afisare_personal();
		}
	}
};
