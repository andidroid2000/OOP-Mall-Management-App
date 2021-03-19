//
// Created by andy2 on 18.03.2021.
//
#pragma once
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
public:
    Obiective_turistice();
    ~Obiective_turistice();
    Obiective_turistice(Obiective_turistice &copie_obiectiv);
    Obiective_turistice operator=(const Obiective_turistice &copie_obiectiv);
    float medie_lunara(int nr_vizitatori);
    std::string getNume(){
        return nume;
    };
    std::string getLocalitate(){
        return localitate;
    };
    int getAn_constructie(){
        return an_constructie;
    };
    int getNr_vizitatori(){
        return nr_vizitatori;
    };
    std::string setNume(std::string nume_actualizat)
    { this->nume=nume_actualizat;
    };
    void info();
};

class Muzee: public Obiective_turistice{
private:
    int an_fondare;
    std::string colectie;
public:
    Muzee();
    ~Muzee();
    friend std::ostream& operator<<(std::ostream& output, Muzee& afisare_muzeu);
};

class Monumente: public Obiective_turistice{
private:
    std::string tip;
};

class Castele: public Obiective_turistice{
private:
    std::string stil_artistic;
    std::string arhitect;
};

#endif //PROIECT_POO_OBIECTIVE_TURISTICE_H
