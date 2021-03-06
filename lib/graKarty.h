//
// Created by bartek on 23.12.2021.
//

#ifndef SKLEP_Z_GRAMI_GRAKARTY_H
#define SKLEP_Z_GRAMI_GRAKARTY_H

#include "./gra.h"

class GraKarciana : public Gra{
protected:
    int nPaczek;
    int nKart;
public:
    GraKarciana();
    ~GraKarciana();
    GraKarciana(string n, double c, string o, int nk, int np);
    explicit GraKarciana(string n);
    string podajNazwe();
    void opisGry();
    void zapisz();
    GraKarciana kupKarty(GraKarciana kart);
    GraKarciana operator+=(const GraKarciana rhs);
    GraKarciana& operator=(GraKarciana const &a);
};

#endif //SKLEP_Z_GRAMI_GRAKARTY_H
