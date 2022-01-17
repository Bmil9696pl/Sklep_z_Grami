//
// Created by bartek on 27.12.2021.
//

#ifndef SKLEP_Z_GRAMI_SYSTEM_H
#define SKLEP_Z_GRAMI_SYSTEM_H

#include "../lib/gra.h"
#include "../lib/graKarty.h"
#include "../lib/graKomputerowa.h"
#include <iostream>
#include "vector"
#include <string>
using namespace std;

class ListaZakupow{
protected:
    vector<Gra*> Lista;

public:
    ListaZakupow();
    ~ListaZakupow();
    void dodajProdukt(GraKarciana *pKarciana);
    void dodajProdukt(GraKomputerowa *pKomputerowa);
    void zapisz();
};

GraKarciana znajdzNaPolce(vector<GraKarciana> polkaKarciane, string nazwa);

GraKomputerowa znajdzNaPolce(vector<GraKomputerowa> polkaKomputerowe, string nazwa);

//void zapiszZakupy(zakupy zakupy);

//void addListKarciana(vector<GraKarciana> vektor, string nazwa, Lista *zakupy);

//void addListKomputerowa(vector<GraKomputerowa> vektor, string nazwa, Lista *zakupy);

template <class type>
vector<type> loadShelves(string file){
    vector<type> vect;
    string line;
    ifstream input(file);
    while(!input.eof()){
        getline(input,line);
        type nowy(line);
        vect.push_back(nowy);
    }
    input.close();
    return vect;
};                          // będzie zczytywalo z pliku po
                            // linijkach, pakowało do stringa,
                            // odpalało konstruktor specjalnie
                            // stworzony pod te stringi a potem
                            // dodawalo do wektora i tak w petli

#endif //SKLEP_Z_GRAMI_SYSTEM_H