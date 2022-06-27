#include <iostream>
#include "lista.h"
#include "tabela.h"
using namespace std;

int main()
{
    cout << "Hello world!" << endl;

    Lista<int> l;
    l.Dodaj(3);
    l.Dodaj(4);
    l.Dodaj(5);
    l.Ispisi();
    cout<<endl;

    cout<<l.Indeks(2)<<endl;


    cout<<"-------------"<<endl;
    Tabela t;
    t.Dodaj("Adnan",16);
    t.Dodaj("Sead",13);
    t.Dodaj("Hamza",6);
    t.Dodaj("Smith",16);
    cout<<t.VelicinaIndeksa(6)<<endl;


    return 0;
}
