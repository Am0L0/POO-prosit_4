#ifndef PERSONNAGE_HPP
#define PERSONNAGE_HPP
class Personnage
{
protected:
    int pv;
    int pa;
    int niv;
    
public:
    Personnage(){
        pv = 100;
        pa = 20;
        niv = 1;
    }
    Personnage(int pv1, int pa1, int niv1){
        setPv(pv1);
        setPa(pa1);
        setNiv(niv1);
    }

    ~Personnage();
    
    void setPv(int pv1) { 
        pv = pv1;
        if(pv<0){
            pv = 100;
        } 
    }
    void setPa(int pa1) { 
        pa = pa1;
        if(pa<0){
            pa = 20;
        }  
    }
    void setNiv(int c) { 
        niv = niv1;
        if(niv<0){
            niv = 1;
        }  
    }

    int getPv() { 
        return pv; 
    }
    int getPa() { 
        return pa; 
    }
    int getNiv() { 
        return niv; 
    }

    int attaque() = 0;
    void subit_degat();
    bool est_vivant() = true;
    void affiche();
};

#endif

