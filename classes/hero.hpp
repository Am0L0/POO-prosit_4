#ifndef HERO_HPP
#define HERO_HPP

#include "personnage.hpp"
#include <string>

using namespace std;

class Hero : public Personnage
{
protected:
    string nom;
public:
    Hero(): nom("Hero"){setPv(100);setPa(20);setNiv(1);}
    Hero(int pv1, int pa1, int niv1, string nom){
        setPv(pv1);
        setPa(pa1);
        setNiv(niv1);
        setNom(nom);
    }
    Hero(const Hero &p): Personnage{p}, nom(p.getNom()){}
    ~Hero(){}

    void setNom(string nom1){if (nom1!=""){nom=nom1;}else{nom="Hero";}}

    string getNom() const {return nom;}

    int attaque() {return 0;}
    void subit_degat(){}
    bool est_vivant() {return true;}
    void affiche(){}
};

#endif