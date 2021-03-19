//
// Created by andy2 on 18.03.2021.
//
#include <iostream>
#include "Obiective_turistice.h"

float Obiective_turistice::medie_lunara(int nr_vizitatori) {
    return nr_vizitatori/12;
}
Obiective_turistice::Obiective_turistice() {
    nume = "";
    localitate = "";
    an_constructie = 0;
    nr_vizitatori = 0;
}
Obiective_turistice::Obiective_turistice(Obiective_turistice &copie_obiectiv) {
    this->nume = copie_obiectiv.nume;
    this->localitate = copie_obiectiv.localitate;
    this->an_constructie = copie_obiectiv.an_constructie;
    this->nr_vizitatori = copie_obiectiv.nr_vizitatori;
}
Obiective_turistice::~Obiective_turistice() {
    nume = "";
    localitate = "";
    an_constructie = 0;
    nr_vizitatori = 0;
}
Obiective_turistice Obiective_turistice::operator=(const Obiective_turistice &copie_obiectiv){
    this->nume = copie_obiectiv.nume;
    this->localitate = copie_obiectiv.localitate;
    this->an_constructie = copie_obiectiv.an_constructie;
    this->nr_vizitatori = copie_obiectiv.nr_vizitatori;
    return *this;
}
void Obiective_turistice::info(){
    std::cout<<"Da, avem info"; //voi adauga informatii
}
std::ostream& operator<<(std::ostream& output, Muzee& afisare_muzeu){
    output<< afisare_muzeu.getNume()<<" se afla in localitatea "<<afisare_muzeu.getLocalitate()<<". ";
    output<<"Cladirea a fost ridicata in anul: "<<afisare_muzeu.getAn_constructie()<<", insa activitatea muzeului a inceput in anul: ";
}