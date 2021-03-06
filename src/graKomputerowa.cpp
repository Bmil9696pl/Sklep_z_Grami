#include "../lib/graKomputerowa.h"

void GraKomputerowa::zapisz() {
    ofstream output;
    output.open("C:/Users/bartek/CLionProjects/Sklep_z_Grami/zakupy", ios::app);
    output << nazwa << endl;
    output << cena << "zł" << endl;
    output << opis << endl;
    output << wymagania << endl;
    output << endl;
    output.close();
}

string GraKomputerowa::podajNazwe() {
    return nazwa;
}

GraKomputerowa::GraKomputerowa() {

}

GraKomputerowa::~GraKomputerowa() noexcept {

}

GraKomputerowa::GraKomputerowa(string n, double c, string o, string w):
wymagania(w)
{
    nazwa = n;
    cena = c;
    opis = o;
}


//uncharted;160,25;gra przygodowa, rpg;ps4 exlusive

GraKomputerowa::GraKomputerowa(string n) {
    string pomCena = "";
    nazwa = "";
    opis = "";
    wymagania = "";
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
            if (count == 1)
                pomCena = pomCena + x;
            if (count == 2)
                opis = opis + x;
            if (count == 3)
                wymagania = wymagania + x;
        }
    }
    cena = stod(pomCena);
}

void GraKomputerowa::opisGry() {
    cout << nazwa << endl;
    cout << cena << "zl" << endl;
    cout << opis << endl;
    cout << wymagania << endl;
}

GraKomputerowa &GraKomputerowa::operator=(const GraKomputerowa &rhs) {
    nazwa = rhs.nazwa;
    wymagania = rhs.wymagania;
    cena = rhs.cena;
    opis = rhs.opis;
    return *this;
}