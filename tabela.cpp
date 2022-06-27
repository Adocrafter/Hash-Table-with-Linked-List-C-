#ifndef TABELA_CPP
#define TABELA_CPP
#include "tabela.h"
#include "lista.h"
#include<iostream>
using namespace std;


Tabela::Tabela()
{
    for (int i = 0;i<velicinaTablice;i++)
    {
        Stvari* novi = new Stvari;
        novi->ime = "prazno";
        novi->kljuc = -1;
        novi->sljedeci = nullptr;
        HeshTablica.Dodaj(novi);
    }
}

void Tabela::Dodaj (string ime, int kljuc)
{
    int hes = kljuc%velicinaTablice;

    if (HeshTablica.Indeks(hes)->kljuc==-1)
    {
        HeshTablica.Indeks(hes)->ime = ime;
        HeshTablica.Indeks(hes)->kljuc = kljuc;
    }
    else
    {
        Stvari* trenutni = HeshTablica.Indeks(hes);
        while (trenutni->sljedeci!=nullptr) trenutni = trenutni->sljedeci;
        Stvari* novi = new Stvari;
        novi->ime = ime;
        novi->kljuc = hes;
        novi->sljedeci = nullptr;
        trenutni->sljedeci = novi;
    }

}


int Tabela::VelicinaIndeksa (int a)
{
    if (a > velicinaTablice) return 0;
    if (HeshTablica.Indeks(a)->kljuc==-1) return 0;
    Stvari* trenutni = HeshTablica.Indeks(a);
    int brojac = 0;
    while (trenutni!=nullptr)
    {
        brojac++;
        cout<<"Osoba je"<<trenutni->ime<<endl;
        trenutni = trenutni->sljedeci;
    }
    return brojac;

}



#endif // TABELA_CPP
