//
// Created by bartek on 23.12.2021.
//

#ifndef SKLEP_Z_GRAMI_GRA_H
#define SKLEP_Z_GRAMI_GRA_H

#include <iostream>
#include <string>
using namespace std;


    class Gra {
    public:

        string nazwa;
        double cena;
        string opis;

        virtual void opisGry() = 0;
    };

#endif //SKLEP_Z_GRAMI_GRA_H
