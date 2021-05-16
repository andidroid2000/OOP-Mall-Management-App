#include "Jobs.h"
#include "PerioadaProba.h"

Vanzator::Vanzator(std::string nume, std::string prenume, int an_angajare) : Personal(nume, prenume, an_angajare)
{
    this->denumire_functie = "Vanzator";
    this->salariu = 1500;
}

Vanzator::~Vanzator()
{
    denumire_functie = "";
    nume = "";
    prenume = "";
    an_angajare = 0;
    salariu = 0;
}

Paznic::Paznic(std::string nume, std::string prenume, int an_angajare) : Personal(nume, prenume, an_angajare)
{
    this->denumire_functie = "Paznic";
    this->salariu = 1400;
}

Paznic::~Paznic() {
    denumire_functie = "";
    nume = "";
    prenume = "";
    an_angajare = 0;
    salariu = 0;
}

Manager::Manager(std::string nume, std::string prenume, int an_angajare) : Personal(nume, prenume, an_angajare)
{
    this->denumire_functie = "Manager";
    this->salariu = 1900;
}

Manager::~Manager()
{
    denumire_functie = "";
    nume = "";
    prenume = "";
    an_angajare = 0;
    salariu = 0;
}

void Vanzator::ajustari_salariu()
{
    int vechime = 2021 - an_angajare;
    if (vechime > 3)
        this->salariu *= 1.15;
    else if (vechime > 6)
        this->salariu *= 1.25;
    else if (vechime > 10)
        this->salariu *= 1.4;
    else if (vechime > 15)
        this->salariu *= 1.6;
    std::cout << "Salariul a fost marit!\n";
    std::cout << "Noul salariu este: " << this->salariu << " lei!\n\n";
}

void Paznic::ajustari_salariu()
{
    int vechime = 2021 - an_angajare;
    if (vechime > 2)
        this->salariu *= 1.10;
    else if (vechime > 4)
        this->salariu *= 1.25;
    else if (vechime > 8)
        this->salariu *= 1.45;
    else if (vechime > 12)
        this->salariu *= 1.55;
    std::cout << "Salariul a fost marit!\n";
    std::cout << "Noul salariu este: " << this->salariu << " lei!\n\n";

}

void Manager::ajustari_salariu()
{
    int vechime = 2021 - an_angajare;
    if (vechime > 3)
        this->salariu *= 1.2;
    else if (vechime > 5)
        this->salariu *= 1.35;
    else if (vechime > 8)
        this->salariu *= 1.5;
    else if (vechime > 12)
        this->salariu *= 1.75;
    std::cout << "Salariul a fost marit!\n";
    std::cout << "Noul salariu este: " << this->salariu << " lei!\n\n";
}

void Vanzator::verificare_an()
{
    if (this->an_angajare > 2020)
        throw PerioadaProba();
}
void Paznic::verificare_an()
{
    if (this->an_angajare > 2020)
        throw PerioadaProba();
}
void Manager::verificare_an()
{
    if (this->an_angajare > 2020)
        throw PerioadaProba();
}