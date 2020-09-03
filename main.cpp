/**
Tema 7. La realizarea unui film(nume,tip,durata), participa o mulțime de persoane: un
regizor, actori, personal tehnic etc. Fiecare personal (cnp, nume, nume_film) are prevăzut
prin contract un procent din încasări, drept urmare primește, pentru fiecare film la care
participa, o anumită suma. Actorii, dacă sunt personaje principale, primesc un bonus de 10%
din încasări, iar regizorul are prevăzut și o suma fixa, indiferent de calitatea filmului produs.
Structura de date: set<tuple<persoana, film, bonus>>

Cerința suplimentară :
- Să se adauge toate campurile relevante pentru modelarea acestei probleme.
- Sa se construiască clasa template FirmaDistributie care sa conțină informații despre filmele
realizate într-un an. Clasa conțină numărul total de persoane implicat incrementat automat),
numărul de actori (incrementat automat) și o structura de obiecte, alocată dinamic.
- Să se realizeze o specializare pentru tipul Actor , care sa conțină numărul actorilor care au
fost distribuiți în roluri principale.
*/




#include <iostream>
#include <vector>
#include <Film.h>
#include <Personal.h>
#include <Actor.h>
#include <Regizor.h>
#include <FirmaDistributie.h>
#include <utility>
using namespace std;

int main()
{
    /**
    Film x;
    cin >> x;
    cout << x;
    */

    /**
    Personal y, b;
    cin >> y;
    y.afisare();
    b = y;
    cout << b;
    */

    /**
    Actor z;
    cin >> z;
    z.afisare();
    cout << z.salariu();
    */

    /**
    vector<Personal> v;
    int n;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        Personal a;
        cin >> a;
        v.push_back(a);
    }
    vector<Personal>::iterator i;
    for(i = v.begin(); i != v.end(); i++)
        cout << *i << '\n';
    */

    vector<pair<Personal, int> > v;
    int n;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        Personal a;
        cin >> a;
        v.push_back(make_pair(a, a.bonus()));
    }
    for(int i = 0; i < v.size(); i++)
    {
        v[0].first.afisare();
        cout << v[0].second << '\n';
    }
    return 0;
}
