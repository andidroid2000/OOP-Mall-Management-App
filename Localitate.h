//
// Created by andy2 on 16.03.2021.
//
#pragma once
#ifndef PROIECT_POO_LOCALITATE_H
#define PROIECT_POO_LOCALITATE_H
#include <iostream>
#include <string>

class Localitate{
private:
    std::string nume_localitate;
    std::string judet;
    int an_fondare;
    int numar_turisti;
    int populatie;
public:
    Localitate();
    ~Localitate();

    std::string getNume_localitate(){
        return nume_localitate;
    };
    std::string getJudet(){
        return judet;
    };
    int getAn_fondare(){
        return an_fondare;
    };
    int getNumar_turisti(){
        return numar_turisti;
    };
    int getPopulatie(){
        return populatie;
    };

    std::string setNume_localitate(std::string nume_nou)
    { this->nume_localitate=nume_nou;
    };
    void afisare();
};


#endif //PROIECT_POO_LOCALITATE_H
