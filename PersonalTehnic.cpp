#include "PersonalTehnic.h"
#include <iostream>
#include <Film.h>
#include <Personal.h>

PersonalTehnic::PersonalTehnic():Personal() {}

PersonalTehnic::PersonalTehnic(string cnp, string nume, string nume_film, string tip, int durata, double incasari, bool principal):Personal(cnp, nume,
            nume_film, tip, durata, incasari) {}

PersonalTehnic::PersonalTehnic(const PersonalTehnic &ob):Personal(ob) {}

PersonalTehnic::~PersonalTehnic()
{
}

istream& operator>>(istream &in, PersonalTehnic &ob)
{
    in >> dynamic_cast<Personal&>(ob);
    return in;
}

ostream& operator<<(ostream &out, PersonalTehnic &ob)
{
    out << dynamic_cast<Personal&>(ob) << '\n';
    return out;
}

PersonalTehnic& PersonalTehnic::operator=(const PersonalTehnic &ob)
{
    cnp = ob.cnp;
    nume = ob.nume;
    n_film = ob.n_film;
    return *this;
}

void PersonalTehnic::afisare()
{
    cout << "Date despre personalul tehnic:\n";
    cout << "Salariu: " << salariu() << '\n';
    cout << *this;
}

int PersonalTehnic::salariu()
{
    return n_film.castig(procent);
}
