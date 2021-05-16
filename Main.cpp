#include <iostream>
#include "Jobs.h"
#include "Magazine.h"
#include "Mall.h"

int main()
{
    Restaurant restaurant1 ("KFC", 1, 2020, 1), restaurant2 ("Chopstix", 1, 2021, 0), restaurant3 ("McDonald's", 1 ,2015, 6);
    Moda magazin1("H&M", 0, 2021, 0), magazin2("New Yorker", 0, 2020, 1);
    
    Manager manager1("George", "Georgel", 2015);
    try 
    {
        manager1.verificare_an();
    }
    catch (const std::exception& verificare)
    {
        std::cout << verificare.what();
    }
    manager1.afisare_personal();
    manager1.ajustari_salariu();

    Vanzator vanzator1("Dan", "Daniel", 2021);
    try
    {
        vanzator1.verificare_an();
    }
    catch (const std::exception& verificare)
    {
        std::cout << verificare.what();
    }
    vanzator1.afisare_personal();
    vanzator1.ajustari_salariu();

    Mall mall(3, 3);
    mall.adaugare_magazin(restaurant1);
    mall.adaugare_magazin(restaurant2);
    mall.adaugare_magazin(restaurant3);
    mall.adaugare_magazin(magazin1);
    mall.adaugare_magazin(magazin2);

    mall.adaugare_angajati(manager1);
    mall.adaugare_angajati(vanzator1);
    std::cout << "====================================================<< Restaurante >>========================================================\n";
    mall.afisare_locatii();
    std::cout << "======================================================<< Angajati >>=========================================================\n";
    mall.afisare_angajati();
}