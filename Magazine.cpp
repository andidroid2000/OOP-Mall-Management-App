#include "Magazine.h"
#include <exception>
#include <string>

Restaurant::Restaurant()
{
    denumire = "";
    tip_magazin = "";
    etaj = 0;
    an_deschidere = 0;
    ani_activitate = 0;
}
Restaurant::Restaurant(std::string denumire, int etaj, int an_deschidere, int ani_activitate) : SpatiuComercial(denumire, etaj, an_deschidere, ani_activitate)
{
    if (this->denumire.length() == 0)
        throw std::invalid_argument("\t[Eroare] Restaurant - Denumire incompleta;\n");
    this->tip_magazin = "Restaurant";
    this->etaj = 1;
}

Restaurant::~Restaurant()
{
    denumire = "";
    tip_magazin = "";
    etaj = 0;
    an_deschidere = 0;
    ani_activitate = 0;
}

Restaurant::Restaurant(Restaurant& copie_restaurant)
{
    this->denumire = copie_restaurant.denumire;
    this->tip_magazin = copie_restaurant.tip_magazin;
    this->etaj = copie_restaurant.etaj;
    this->an_deschidere = copie_restaurant.an_deschidere;
    this->ani_activitate = copie_restaurant.ani_activitate;
}

Restaurant Restaurant::operator=(const Restaurant& copie_restaurant)
{
    this->denumire = copie_restaurant.denumire;
    this->tip_magazin = copie_restaurant.tip_magazin;
    this->etaj = copie_restaurant.etaj;
    this->an_deschidere = copie_restaurant.an_deschidere;
    this->ani_activitate = copie_restaurant.ani_activitate;
    return *this;
}

void Restaurant::afisare()
{
    std::cout << this->tip_magazin << "ul " << this->denumire << " se afla la etajul " << this->etaj << " si activeaza in incinta mall-ului din anul " << this->an_deschidere << ". \n\n";
}

void Restaurant::renoveaza()
{
    if (ani_activitate % 2 == 0)

    {
        std::cout << "Restaurantul trebuie renovat!";
    }
}

void Restaurant::detalii()
{
    std::cout << "Detalii despre food-court, reguli de functionare";
}

//////////////////////////////////////////////////////////////////

Moda::Moda()
{
    denumire = "";
    tip_magazin = "";
    etaj = 0;
    an_deschidere = 0;
    ani_activitate = 0;
}

Moda::Moda(std::string denumire, int etaj, int an_deschidere, int ani_activitate) : SpatiuComercial(denumire, etaj, an_deschidere, ani_activitate)
{
    this->tip_magazin = "Magazin Vestimentar";
    if (this->an_deschidere == 2019)
    {
        this->etaj = 0;
    }
    else if (this->an_deschidere == 2020)
    {
        this->etaj = 1;
    }
    else if (this->an_deschidere >= 2021)
    {
        this->etaj = 2;
    }
    if (this->denumire.length() == 0)
        throw std::invalid_argument("\t[Eroare] Moda - Denumire incompleta;\n");
}

Moda::~Moda()
{
    denumire = "";
    tip_magazin = "";
    etaj = 0;
    an_deschidere = 0;
    ani_activitate = 0;
}

Moda::Moda(Moda& copie_magazin)
{
    this->denumire = copie_magazin.denumire;
    this->tip_magazin = copie_magazin.tip_magazin;
    this->etaj = copie_magazin.etaj;
    this->an_deschidere = copie_magazin.an_deschidere;
    this->ani_activitate = copie_magazin.ani_activitate;
}

std::ostream& operator<<(std::ostream& output, const Moda& afisare_magazin)
{
    output << afisare_magazin.tip_magazin << ": " << afisare_magazin.denumire << " se afla la etajul " << afisare_magazin.etaj << " si activeaza in incinta mall-ului din anul " << afisare_magazin.an_deschidere << ". \n\n";
    return output;
}

void Moda::afisare()
{
    std::cout << this->tip_magazin << "ul " << this->denumire << " se afla la etajul " << this->etaj << " si activeaza in incinta mall-ului din anul " << this->an_deschidere << ". \n\n";
}

void Moda::renoveaza()
{
    if (ani_activitate % 3 == 0)

    {
        std::cout << "Magazinul trebuie renovat!\n";
    }
}

void Moda::detalii()
{
    std::cout << "Detalii despre zona cu magazine vestimentare";
}
