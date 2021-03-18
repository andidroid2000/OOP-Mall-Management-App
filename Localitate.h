//
// Created by andy2 on 16.03.2021.
//
#ifndef PROIECT_POO_LOCALITATE_H
#define PROIECT_POO_LOCALITATE_H
#include <iostream>
#include <string>

class Localitate{
private:
    std::string nume;
    std::string judet;
    int an_fondare;
    int numar_turisti;
public:
    Localitate(){};
    void localitate_noua( const std::string &nume, const std::string &judet, const int an_fondare);
    ~Localitate(){};
};


#endif //PROIECT_POO_LOCALITATE_H
