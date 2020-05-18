#ifndef ACTOR_H
#define ACTOR_H
#include <Film.h>
#include <Personal.h>
#include <string>
using namespace std;

class Actor:public virtual Personal
{
    bool principal;  /// actorii principali vor avea valoarea 1
public:
    Actor();
    Actor(string cnp, string nume, string nume_film, string tip, int durata, double incasari, bool principal);
    Actor(const Actor &ob);
    virtual ~Actor();

    friend istream& operator>>(istream&, Actor&);
    friend ostream& operator<<(ostream&, Actor&);
    Actor& operator=(const Actor&);

    int actor_principal();
    int bonus();
    void afisare();
    int salariu();
};

#endif // ACTOR_H
