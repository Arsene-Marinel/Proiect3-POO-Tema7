#include "FirmaDistributie.h"
#include <iostream>
#include <Actor.h>
#include <typeinfo>
using namespace std;

template<class Ttype>
FirmaDistributie<Ttype>::FirmaDistributie()
{
    filme = NULL;
    personal = NULL;
}

template<class Ttype>
FirmaDistributie<Ttype>::FirmaDistributie(Film *filme, Ttype *personal)
{
    filme = new Film[51];
    personal = new Ttype[10001];
}

template<class Ttype>
FirmaDistributie<Ttype>::FirmaDistributie(const FirmaDistributie<Ttype> &ob)
{
    filme = new Film[51];
    personal = new Ttype[10001];

    for(int i = 0; i < numar_persoane; i++)
        personal[i] = ob.personal[i];
    for(int i = 0; i < numar_filme; i++)
        filme[i] = ob.filme[i];
}

template<class Ttype>
FirmaDistributie<Ttype>::~FirmaDistributie()
{
    delete[] filme;
    delete[] personal;
    numar_persoane = 0;
    numar_actori = 0;
    numar_filme = 0;
}

template<class Ttype>
void FirmaDistributie<Ttype>::push_film()
{
    filme[numar_filme] = this->n_film;
    numar_filme++;
}

template<class Ttype>
void FirmaDistributie<Ttype>::push_personal()
{
    personal[numar_persoane] = this->ob;

    if(typeid(Ttype) == typeid(Actor))
        numar_actori++;

    numar_persoane++;
}

///


FirmaDistributie<Actor>::FirmaDistributie()
{
    actori = NULL;
}

FirmaDistributie<Actor>::FirmaDistributie(Actor *actori)
{
    actori = new Actor[501];
}

FirmaDistributie<Actor>::FirmaDistributie(const FirmaDistributie<Actor> &ob)
{
    actori = new Actor[501];

    for(int i = 0; i < numar_actori; i++)
        actori[i] = ob.actori[i];
}

FirmaDistributie<Actor>::~FirmaDistributie()
{
    delete[] actori;
    numar_actori = 0;
    actori_principali = 0;
}

void FirmaDistributie<Actor>::push_principal(Actor actor)
{
    actori[numar_actori] = actor;

    if(actor.actor_principal() == 1)
        actori_principali++;

    numar_actori++;
}

template<class Ttype>
int FirmaDistributie<Ttype>::numar_persoane = 0;
template<class Ttype>
int FirmaDistributie<Ttype>::numar_actori = 0;
template<class Ttype>
int FirmaDistributie<Ttype>::numar_filme = 0;

int FirmaDistributie<Actor>::numar_actori = 0;
int FirmaDistributie<Actor>::actori_principali = 0;
