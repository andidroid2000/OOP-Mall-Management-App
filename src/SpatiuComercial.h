#pragma once
#include <iostream>
#include <cstring>

class SpatiuComercial
{
protected:
	std::string denumire;
	std::string tip_magazin;
	int etaj;
	int an_deschidere;
	int ani_activitate;
public:
	SpatiuComercial()
	{
		denumire = "";
		tip_magazin = "";
		etaj = 0;
		an_deschidere = 0;
		ani_activitate = 0;
	}
	SpatiuComercial(std::string denumire, int etaj, int an_deschidere, int ani_activitate) {
		this->denumire = denumire;
		this->etaj = etaj;
		this->an_deschidere = an_deschidere;
		this->ani_activitate = ani_activitate;
	}
	std::string getDenumire() {
		return denumire;
	}
	std::string getTip_magazin() {
		return tip_magazin;
	}
	int getEtaj() {
		return etaj;
	}
	int getAn_deschidere() {
		return an_deschidere;
	}
	int getAni_activitate() {
		return ani_activitate;
	}
	int setEtaj(int etaj_nou) {
		this->etaj = etaj_nou;
	}
	int setAni_activitate(int actualizare_ani)
	{
		this->ani_activitate = actualizare_ani;
	}
	virtual void afisare() = 0;
	virtual void renoveaza() = 0;
	virtual void detalii() = 0;
};
