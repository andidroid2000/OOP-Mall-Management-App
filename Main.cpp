#include <iostream>
#include "Jobs.h"
#include "Magazine.h"
#include "Mall.h"

int main()
{

    try {
        Moda magazin1("H&M", 0, 2021, 0), magazin2("New Yorker", 0, 2000, 1);
        Restaurant restaurant1("KFC", 1, 2020, 1), restaurant2("Chopstix", 1, 2021, 0), restaurant3("McDonald's", 1, 2015, 6);
        Manager manager1("George", "Georgel", 2015);
        manager1.afisare_personal();
        manager1.ajustari_salariu();
        Vanzator vanzator1("Dan", "Daniel", 2021);
        vanzator1.afisare_personal();
        vanzator1.ajustari_salariu();

        Mall mall(3, 3);
        mall.adaugare_magazin(magazin1);
        mall.adaugare_magazin(magazin2);
        mall.adaugare_magazin(restaurant1);
        mall.adaugare_magazin(restaurant2);
        mall.adaugare_magazin(restaurant3);
        std::cout << "====================================================<< Locatii >>========================================================\n";
        mall.afisare_locatii();
        std::cout << "======================================================<< Angajati >>=========================================================\n";
        mall.afisare_angajati();
    }
    catch(std::invalid_argument& error)
    {
        //aici voi prinde exceptiile din definirea gresita a obiectelor
        std::cout << "Exceptie:\n"<<error.what();
    }
}