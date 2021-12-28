//
// Created by bartek on 23.12.2021.
//

#ifndef SKLEP_Z_GRAMI_GRA_H
#define SKLEP_Z_GRAMI_GRA_H

#include <iostream>
#include <string>
using namespace std;

namespace arr {
    enum Type {
        komputerowa,
        karciana,
    };


    struct Gra {
    protected:

        string nazwa;
        double cena;
        string opis;
    public:
        virtual arr::Type GetType() = 0;

        virtual void opisGry() = 0;
    };
}

#endif //SKLEP_Z_GRAMI_GRA_H
