#include "Film.h"
#include <iostream>
#include <Exception.h>
using namespace std;

Film::Film():nume(""), tip(""), durata(0), incasari(0) {}

Film::Film(string nume, string tip, int durata, double incasari):nume(nume), tip(tip), durata(durata), incasari(incasari) {}

Film::Film(const Film &ob):nume(ob.nume), tip(ob.tip), durata(ob.durata), incasari(ob.incasari) {}

Film::~Film()
{
    nume = "";
    tip = "";
    durata = 0;
    incasari = 0;
}

istream& operator>>(istream &in, Film &ob)
{
    cout << "Nume: ";
    in >> ob.nume;
    cout << "Tip: ";
    in >> ob.tip;
    try
    {
        if(ob.tip == "Comedie")
            throw Exception();
    }
    catch(Exception x)
    {
        cout << x.what();
        while(ob.tip == "Comedie")
            in >> ob.tip;
    }
    cout << "Durata: ";
    in >> ob.durata;
    cout << "Incasari: ";
    in >> ob.incasari;
    return in;
}

ostream& operator<<(ostream &out, Film &ob)
{
    out << ob.nume << '\n';
    out << ob.tip << '\n';
    out << ob.durata << '\n';
    out << ob.incasari << '\n';
    return out;
}

Film& Film::operator=(const Film &ob)
{
    nume = ob.nume;
    tip = ob.tip;
    durata = ob.durata;
    incasari = ob.incasari;
    return *this;
}

double Film::castig(int procent)const
{
    return procent/100 * incasari;
}
