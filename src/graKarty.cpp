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

//Magic the Gathering;8;trading card game stworzony przez Wizards of the Coast;10;1

GraKarciana::GraKarciana(string n) {
    nazwa = "";
    string pomCena = "";
    opis = "";
    string pomLiczKart = "";
    string pomLiczPacz = "";
    string srednikk = ";";
    char srednik = srednikk[0];
    int count = 0;
    for(char x : n) {
        bool CZYSREDNIKBYLTERAZWYKRYTY = 0;
        if (x == srednik) {
            count++;
            CZYSREDNIKBYLTERAZWYKRYTY = 1;
        }
        if (CZYSREDNIKBYLTERAZWYKRYTY == 0){
            if (count == 0)
                nazwa = nazwa + x;
            else if (count == 1)
                pomCena = pomCena + x;
            else if (count == 2)
                opis = opis + x;
            else if (count == 3)
                pomLiczKart = pomLiczKart + x;
            else if (count == 4)
                pomLiczPacz = pomLiczPacz + x;
        }
    }
    cena = stod(pomCena);
    nKart = stoi(pomLiczKart);
    nPaczek = stoi(pomLiczPacz);
}

void GraKarciana::opisGry() {
    cout << nazwa << endl;
    cout << nKart << " w " << nPaczek << " paczkach" << endl;
    cout << opis << endl;
}