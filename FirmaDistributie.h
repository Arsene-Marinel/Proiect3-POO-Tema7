#ifndef FIRMADISTRIBUTIE_H
#define FIRMADISTRIBUTIE_H
#include <Film.h>
#include <Actor.h>

template<class Ttype>
class FirmaDistributie
{
    Film *filme;
    Ttype *personal;
    static int numar_persoane;
    static int numar_actori;
    static int numar_filme;
public:
    FirmaDistributie();
    FirmaDistributie(Film *filme, Ttype *personal);
    FirmaDistributie(const FirmaDistributie<Ttype> &ob);
    virtual ~FirmaDistributie();

    void push_film();
    void push_personal();
};


template<>
class FirmaDistributie<Actor>
{
    Actor *actori;
    static int numar_actori;
    static int actori_principali;
public:
    FirmaDistributie();
    FirmaDistributie(Actor *actori);
    FirmaDistributie(const FirmaDistributie<Actor> &ob);
    virtual ~FirmaDistributie();

    void push_principal(Actor actor);
};

#endif // FIRMADISTRIBUTIE_H
