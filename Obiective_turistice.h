//
// Created by andy2 on 18.03.2021.
//
#ifndef PROIECT_POO_OBIECTIVE_TURISTICE_H
#define PROIECT_POO_OBIECTIVE_TURISTICE_H
#include <iostream>
#include <string>

class Obiective_turistice {
private:
    std::string nume;
    std::string localitate;
    int an_constructie;
    int nr_vizitatori;
};

class Muzee: protected Obiective_turistice{
private:
    int an_fondare;
    std::string colectie;
};

class Monumente: protected Obiective_turistice{
private:
    std::string tip;
};

class Castele: protected Obiective_turistice{
private:
    std::string stil_artistic;
    std::string arhitect;
};

#endif //PROIECT_POO_OBIECTIVE_TURISTICE_H
