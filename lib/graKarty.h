//
// Created by bartek on 23.12.2021.
//

#ifndef SKLEP_Z_GRAMI_GRAKARTY_H
#define SKLEP_Z_GRAMI_GRAKARTY_H

#include "./gra.h"

struct GraKarciana : public arr::Gra{
protected:
    int nPaczek;
    int nKart;
public:
    arr::Type GetType();
    GraKarciana(string n, double c, string o, int nk, int np);
    GraKarciana(string n);
    void opisGry();
    GraKarciana operator+(const GraKarciana rhs);
};

#endif //SKLEP_Z_GRAMI_GRAKARTY_H
