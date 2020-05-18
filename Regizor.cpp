#include "Regizor.h"
#include <Film.h>
#include <Personal.h>

Regizor::Regizor():Personal() {}

Regizor::Regizor(string cnp,string nume, string nume_film, string tip, int durata, double incasari):Personal(cnp, nume, nume_film, tip, durata, incasari) {}

Regizor::Regizor(const Regizor &ob):Personal(ob) {}

Regizor::~Regizor() {}

istream& operator>>(istream &in, Regizor &ob)
{
    in >> dynamic_cast<Personal&>(ob);
    return in;
}

ostream& operator<<(ostream &out, Regizor &ob)
{
    out << dynamic_cast<Personal&>(ob);
    out << "Suma: " << ob.suma << '\n';
    return out;
}

Regizor& Regizor::operator=(const Regizor &ob)
{
    cnp = ob.cnp;
    nume = ob.nume;
    n_film = ob.n_film;
    return *this;
}

void Regizor::afisare()
{
    cout << "Informatii regizor:\n";
    cout << *this;
}

int Regizor::salariu()
{
    return n_film.castig(procent) + bonus();
}

int Regizor::bonus()
{
    return suma;
}

int Regizor::get_suma()
{
    return suma;
}

int Regizor::suma = 50000;
