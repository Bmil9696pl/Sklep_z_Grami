//
// Created by bartek on 23.12.2021.
//

#ifndef SKLEP_Z_GRAMI_GRA_H
#define SKLEP_Z_GRAMI_GRA_H

#include <iostream>
#include "string.h"
using namespace std;


struct Gra{
protected:

    string nazwa;
    double cena;
    string opis;

public:
    virtual void opisGry();
};

#endif //SKLEP_Z_GRAMI_GRA_H