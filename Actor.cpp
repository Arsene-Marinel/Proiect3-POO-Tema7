#include "Actor.h"
#include <iostream>
#include <Film.h>
#include <Personal.h>

Actor::Actor():Personal(), principal(0) {}

Actor::Actor(string cnp, string nume, string nume_film, string tip, int durata, double incasari, bool principal):Personal(cnp, nume,
            nume_film, tip, durata, incasari), principal(principal) {}

Actor::Actor(const Actor &ob):Personal(ob), principal(ob.principal) {}

Actor::~Actor()
{
    principal = 0;
}

istream& operator>>(istream &in, Actor &ob)
{
    in >> dynamic_cast<Personal&>(ob);
    cout << "Personaj principal: ";
    in >> ob.principal;              /// 1-DA si 0-NU
    return in;
}

ostream& operator<<(ostream &out, Actor &ob)
{
    out << dynamic_cast<Personal&>(ob) << '\n';
    if(ob.principal == 1)
        out << "Actor principal\n";
    else
        out << "Actor secundar\n";
    return out;
}

Actor& Actor::operator=(const Actor &ob)
{
    cnp = ob.cnp;
    nume = ob.nume;
    n_film = ob.n_film;
    principal = ob.principal;
    return *this;
}

int Actor::actor_principal()
{
    return principal;
}

int Actor::bonus()
{
    if(principal == 1)
        return n_film.castig(10);
    else
        return 0;
}

void Actor::afisare()
{
    cout << "Date despre actor:\n";
    cout << *this;
    cout << "Bonus: " << bonus() << '\n';
}

int Actor::salariu()
{
    return n_film.castig(procent) + bonus();
}
