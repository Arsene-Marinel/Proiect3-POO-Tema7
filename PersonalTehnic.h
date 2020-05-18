#ifndef PERSONALTEHNIC_H
#define PERSONALTEHNIC_H
#include <Film.h>
#include <Personal.h>
#include <string>
using namespace std;

class PersonalTehnic:public Personal
{
public:
    PersonalTehnic();
    PersonalTehnic(string cnp, string nume, string nume_film, string tip, int durata, double incasari, bool principal);
    PersonalTehnic(const PersonalTehnic &ob);
    virtual ~PersonalTehnic();

    friend istream& operator>>(istream&, PersonalTehnic&);
    friend ostream& operator<<(ostream&, PersonalTehnic&);
    PersonalTehnic& operator=(const PersonalTehnic&);

    void afisare();
    int salariu();
};

#endif // PERSONALTEHNIC_H
