#include "Personal.h"
#include <iostream>
using namespace std;

Personal::Personal():cnp(""), nume(""), n_film() {}

Personal::Personal(string cnp, string nume, string nume_film, string tip, int durata, double incasari):cnp(cnp),
    nume(nume), n_film(nume_film, tip, durata, incasari) {}

Personal::Personal(const Personal &ob):cnp(ob.cnp), nume(ob.nume), n_film(ob.n_film) {}

Personal::~Personal()
{
    cnp = "";
    nume = "";
}

istream& operator>>(istream &in, Personal &ob)
{
    cout << "CNP: ";
    in >> ob.cnp;
    cout << "Nume: ";
    in >> ob.nume;
    cout << "Film: ";
    in >> ob.n_film;
    return in;
}

ostream& operator<<(ostream &out, Personal &ob)
{
    out << ob.cnp << '\n';
    out << ob.nume << '\n';
    out << ob.n_film << '\n';
    return out;
}

Personal& Personal::operator=(const Personal &ob)
{
    cnp = ob.cnp;
    nume = ob.nume;
    n_film = ob.n_film;
    return *this;
}

void Personal::afisare()
{
    cout << "Informatii personal:\n";
    cout << *this;
}

Film Personal::get_film()
{
    return n_film;
}

int Personal::salariu()const
{
    return n_film.castig(procent);
}

int Personal::bonus()
{
    return 0;
}

int Personal::procent = 30;
