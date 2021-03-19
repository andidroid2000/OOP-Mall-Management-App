//
// Created by andy2 on 16.03.2021.
//
#include <iostream>
#include "Localitate.h"

Localitate::Localitate(){
    nume_localitate = "";
    judet = "";
    an_fondare = 0;
    numar_turisti = 0;
    populatie = 0;
}
Localitate::~Localitate(){
    nume_localitate = "";
    judet = "";
    an_fondare = 0;
    numar_turisti = 0;
    populatie = 0;
}

void Localitate::afisare(){
    std::cout<< this->nume_localitate<<" fondata in: "<< this->an_fondare;
}