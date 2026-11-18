#ifndef CREATURE_HPP
#define CREATURE_HPP

#include "personnage.hpp"

class Creature : public Personnage
{
public:
    Creature(){setPv(100);setPa(20);setNiv(1);}
    Creature(int pv1, int pa1, int niv1, string nom){
        setPv(pv1);
        setPa(pa1);
        setNiv(niv1);
    }
    Creature(const Creature &p): Personnage{p}{}
    ~Creature(){}

    int attaque() {return 0;}
    void subit_degat(){}
    bool est_vivant() {return true;}
    void affiche(){}
};

#endif