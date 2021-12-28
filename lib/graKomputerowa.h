//
// Created by bartek on 23.12.2021.
//

#ifndef SKLEP_Z_GRAMI_GRAKOMPUTEROWA_H
#define SKLEP_Z_GRAMI_GRAKOMPUTEROWA_H

#include "./gra.h"

class GraKomputerowa : public arr::Gra {
protected:
    string wymagania;
public:
    arr::Type GetType();
    GraKomputerowa(string n, double c, string o, string w);
    GraKomputerowa(string n);
    GraKomputerowa operator+(const GraKomputerowa rhs);
    void opisGry();
};

#endif //SKLEP_Z_GRAMI_GRAKOMPUTEROWA_H
