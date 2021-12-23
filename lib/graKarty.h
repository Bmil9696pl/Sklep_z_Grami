//
// Created by bartek on 23.12.2021.
//

#ifndef SKLEP_Z_GRAMI_GRAKARTY_H
#define SKLEP_Z_GRAMI_GRAKARTY_H

#include "./gra.h"

struct GraKarciana : public Gra{
protected:
    int nPaczek;
    int nKart;
public:
    GraKarciana(string n, double c, string o, int nk, int np);
    void opisGry();
    GraKarciana operator+(const GraKarciana rhs);
};

#endif //SKLEP_Z_GRAMI_GRAKARTY_H
