#include "../lib/graKarty.h"

GraKarciana GraKarciana::kupKarty(GraKarciana kart) {
    GraKarciana ret;
    int ilosc;
    ret = kart;
    cout << "ile paczek chesz kupic?" << endl;
    cin >> ilosc;
    for(int i = 1; i < ilosc ; ++i){
        ret+=kart;
    }
    return ret;
}

string GraKarciana::podajNazwe() {
    return nazwa;
}

void GraKarciana::zapisz() {
    ofstream output;
    output.open("C:/Users/bartek/CLionProjects/Sklep_z_Grami/zakupy", ios::app);
    output << nazwa << endl;
    output << cena << "zł" << endl;
    output << nKart << " w " << nPaczek << " paczkach" << endl;
    output << opis << endl;
    output << endl;
    output.close();
}

GraKarciana::GraKarciana() {

}

GraKarciana::~GraKarciana() noexcept {

}

GraKarciana::GraKarciana(string n, double c, string o, int nk, int np):
nKart(nk),
nPaczek(np)
{
    nazwa = n;
    cena = c;
    opis = o;
}

GraKarciana GraKarciana::operator+=(const GraKarciana rhs) {
    this->nKart += rhs.nKart;
    this->nPaczek += rhs.nPaczek;
    this->cena += rhs.cena;
    return *this;
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
    cout << cena << "zl" << endl;
    cout << nKart << " w " << nPaczek << " paczkach" << endl;
    cout << opis << endl;
}

GraKarciana& GraKarciana::operator=(GraKarciana const &a){
    nazwa = a.nazwa;
    cena = a.cena;
    opis = a.opis;
    nPaczek = a.nPaczek;
    nKart = a.nKart;
    return * this;
}
