#include "../lib/graKomputerowa.h"

GraKomputerowa::GraKomputerowa(string n, double c, string o, string w):
wymagania(w)
{
    nazwa = n;
    cena = c;
    opis = o;
}

GraKomputerowa GraKomputerowa::operator+(const GraKomputerowa rhs) {
    return{nazwa + rhs.nazwa, cena + rhs.cena, opis + rhs.opis, wymagania};
}

void GraKomputerowa::opisGry() {
    cout << nazwa << endl;
    cout << cena << endl;
    cout << opis << endl;
    cout << wymagania << endl;
}