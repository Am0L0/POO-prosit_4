#ifndef PERSONNAGE_HPP
#define PERSONNAGE_HPP
class Personnage
{
protected:
    int pv;
    int pa;
    int niv;
    
public:
    Personnage(): pv(100), pa(20), niv(1){}
    Personnage(int pv1, int pa1, int niv1){
        setPv(pv1);
        setPa(pa1);
        setNiv(niv1);
    }
    Personnage(const Personnage &p): pv(p.getPv()), pa(p.getPa()), niv(p.getNiv()){}
    ~Personnage(){}
    
    void setPv(int pv1) {if (pv1>=1){pv=pv1;}else{pv=100;}} // affectation si pv1 >= 1 sinon default (100pv)
    void setPa(int pa1) {if (pa1>=0){pa=pa1;}else{pa=20;}} // affectation si pa1 >= 0 sinon default (20pa)
    void setNiv(int niv1) {if (niv1>0){niv=niv1;}else{niv=1;}} // affectation si niv1 > 0 sinon default (niv 1)

    int getPv() const {return pv;}
    int getPa() const {return pa;}
    int getNiv() const {return niv;}

    int attaque() {return 0;}
    void subit_degat(){}
    bool est_vivant() {return true;}
    void affiche(){}
};

#endif

