#include "graKarty.h"


GraKarciana::GraKarciana(string n, double c, string o, int nk, int np):
nKart(nk),
nPaczek(np)
{
    nazwa = n;
    cena = c;
    opis = o;
}

GraKarciana GraKarciana::operator+(const GraKarciana rhs) {
    return {nazwa + rhs.nazwa, cena + rhs.cena, opis + rhs.opis, nKart + rhs.nKart, nPaczek + rhs.nPaczek };
}

void GraKarciana::opisGry() {
    cout << nazwa << endl;
    cout << nKart << " w " << nPaczek << " paczkach" << endl;
    cout << opis << endl;
}