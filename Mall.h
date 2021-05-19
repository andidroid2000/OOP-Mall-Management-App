#pragma once
#include "Magazine.h"
#include "Jobs.h"
#include <vector>


class Mall
{
private:
	std::vector<SpatiuComercial*> locatii;
	//SpatiuComercial** locatii;
	std::vector<Personal*> angajati;
	//Personal** angajati;
	int numar_locatii, numar_angajati;
public:
	Mall(int numar_locatii, int numar_angajati)
	{
		this->numar_locatii = 0;
		this->numar_angajati = 0;
		//locatii = new SpatiuComercial * [numar_locatii];
		//angajati = new Personal * [numar_angajati];
	}

	~Mall()
	{
		for (int i = 0; i < angajati.size(); i++)
			delete angajati[i];
		for (int i = 0; i < locatii.size(); i++)
			delete locatii[i];
		numar_locatii = 0;
		numar_angajati = 0;
	}

	void adaugare_magazin(Restaurant locatie)
	{
		Restaurant* rest;
		rest = new Restaurant(locatie);
		locatii.push_back(rest);
		//locatii[this->numar_locatii++] =;
	}

	void adaugare_magazin(Moda locatie)
	{
		Moda* magazin;
		magazin = new Moda(locatie);
		locatii.push_back(magazin);
		//locatii[this->numar_locatii++] = new Moda(locatie);
	}

	void adaugare_angajati(Manager angajat)
	{
		Manager* man;

		man = new Manager(angajat);
		angajati.push_back(man);
		//angajati[this->numar_angajati++] = new Manager(angajat);
	}

	void adaugare_angajati(Vanzator angajat)
	{
		angajati.push_back(new Vanzator(angajat));
		//angajati[this->numar_angajati++] = new Vanzator(angajat);
	}

	void adaugare_angajati(Paznic angajat)
	{
		angajati.push_back(new Paznic(angajat));
		//angajati[this->numar_angajati++] = new Paznic(angajat);
	}

	void afisare_locatii()
	{
		for (int i = 0; i < locatii.size(); i++)
		{
			//std::cout << locatii[i] << "\n\n";
			locatii[i]->afisare();
		}
	}

	void afisare_angajati()
	{
		for (int i = 0; i < angajati.size(); i++)
		{
			//std::cout << angajati[i] << "\n\n";
			angajati[i]->afisare_personal();
		}
	}
};
