#pragma once
#include <iostream>
#include <cstring>

class Personal
{
protected:
	std::string denumire_funtie, nume, prenume;
	int an_angajare;
	float salariu;
public:
	Personal()
	{
		denumire_funtie = "";
		nume = "";
		prenume = "";
		an_angajare = 0;
		salariu = 0;
	}

	Personal(std::string nume, std::string prenume, int an_angajare)
	{
		this->nume = nume;
		this->prenume = prenume;
		this->an_angajare = an_angajare;
	}

	void afisare_personal()
	{
		std::cout << "Nume angajat: " << this->nume << "\n";
		std::cout << "Prenume angajat: " << this->prenume << "\n";
		std::cout << "Functie ocupata: " << this->denumire_funtie << "\n";
		std::cout << "An angajare: " << this->an_angajare << "\n";
		std::cout << "Salariu: " << this->salariu << " lei\n\n";
	}

	std::string getDenumire_functie()
	{
		return denumire_funtie;
	}

	std::string getNume()
	{
		return nume;
	}

	std::string getPrenume()
	{
		return prenume;
	}

	int getAn_angajare()
	{
		return an_angajare;
	}

	float getSalariu()
	{
		return salariu;
	}
	float setSalariu(float salariu_nou)
	{
		this->salariu = salariu_nou;
	}
	virtual void ajustari_salariu() = 0;
};