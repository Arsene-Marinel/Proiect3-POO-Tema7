#ifndef REGIZOR_H
#define REGIZOR_H
#include <iostream>
#include <Personal.h>
using namespace std;

class Regizor:public virtual Personal
{
    static int suma;
public:
    Regizor();
    Regizor(string cnp, string nume, string nume_film, string tip, int durata, double incasari);
    Regizor(const Regizor &ob);
    virtual ~Regizor();

    friend istream& operator>>(istream&, Regizor&);
    friend ostream& operator<<(ostream&, Regizor&);
    Regizor& operator=(const Regizor&);

    void afisare();

    int salariu();
    int bonus();
    static int get_suma();
};

#endif // REGIZOR_H
