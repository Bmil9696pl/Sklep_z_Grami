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
#include "fstream"
using namespace std;

struct zakupy{
    int type = NULL; //0 - karty, 1 - komputerowa
    GraKarciana kart;
    GraKomputerowa komp;
    zakupy* next = NULL;
};

//void zapiszZakupy(zakupy zakupy);

void addListKarciana(vector<GraKarciana> vektor, string nazwa, zakupy *zakupy);

void addListKomputerowa(vector<GraKomputerowa> vektor, string nazwa, zakupy *zakupy);

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