#ifndef PERSONAL_H
#define PERSONAL_H
#include <Film.h>
#include <vector>
#include <set>
using namespace std;

class Personal
{
protected:
    string cnp;
    string nume;
    Film n_film;
    static int procent;
public:
    Personal();
    Personal(string cnp, string nume, string nume_film, string tip, int durata, double incasari);
    Personal(const Personal &ob);
    virtual ~Personal();

    friend istream& operator>>(istream&, Personal&);
    friend ostream& operator<<(ostream&, Personal&);
    Personal& operator=(const Personal&);

    void virtual afisare();

    Film virtual get_film();
    int virtual salariu()const;
    int virtual bonus();
};

#endif // PERSONAL_H
