#ifndef ARCHER_HPP
#define ARCHER_HPP

#include "../hero.hpp"
#include <iostream>

class Archer : public Hero
{
private:
    int pv;
    int pa;
    int niv;
    string nom;
public:
    Archer(): nom("Hero"){setPv(100);setPa(20);setNiv(1);}
    Archer(int pv1, int pa1, int niv1, string nom){
        setPv(pv1);
        setPa(pa1);
        setNiv(niv1);
        setNom(nom);
    }
    Archer(const Archer &a): Hero{a}{}
    ~Archer(){}

    void setNom(string nom1){if (nom1!=""){nom=nom1;}else{nom="Archer";}}

    string getNom() const {return nom;}
};

#endif