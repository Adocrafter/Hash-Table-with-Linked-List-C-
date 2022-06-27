#ifndef LISTA_CPP
#define LISTA_CPP
#include "lista.h"
#include <iostream>
using namespace std;


template<typename Tip>
void Lista<Tip>::Dodaj(Tip element)
{
    Cvor* novi = new Cvor;
    novi->element = element;
    novi->sljedeci = nullptr;
    if (glava==nullptr) glava = novi;
    else
    {
        Cvor* trenutni = glava;
        while (trenutni->sljedeci!=nullptr)
        {
            trenutni = trenutni->sljedeci;
        }
        trenutni->sljedeci = novi;
    }
}
template<typename Tip>
void Lista<Tip>::Ispisi()
{
    if (glava==nullptr) cout<<"Lista je prazna"<<endl;
    else
    {
        Cvor* trenutni = glava;
        while (trenutni!=nullptr)
        {
            cout<<trenutni->element<<" ";
            trenutni = trenutni->sljedeci;
        }
    }
}
template<typename Tip>
Tip Lista<Tip>::Indeks(int a)
{
    int brojac = 0;
    Cvor* trenutni = glava;
    while (brojac<a and trenutni->sljedeci!=nullptr)
    {
        trenutni = trenutni->sljedeci;
        brojac++;
    }
    return trenutni->element;
}






#endif // LISTA_CPP
