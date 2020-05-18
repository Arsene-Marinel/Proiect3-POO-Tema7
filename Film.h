#ifndef FILM_H
#define FILM_H
#include <string>
using namespace std;

class Film
{
    string nume;
    string tip;
    int durata;
    double incasari;
public:
    Film();
    Film(string nume, string tip, int durata, double incasari);
    Film(const Film &ob);
    virtual ~Film();

    friend istream& operator>>(istream&, Film&);
    friend ostream& operator<<(ostream&, Film&);

    Film& operator=(const Film&);
    double castig(int procent)const;
};

#endif // FILM_H
