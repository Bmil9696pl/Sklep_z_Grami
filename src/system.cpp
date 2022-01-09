#include "../lib/system.h"
/*
void zapiszZakupy(zakupy zakupy){
    ofstream output("C:/Users/bartek/CLionProjects/Sklep_z_Grami/zakupy");
    struct zakupy pom = zakupy;
    if(pom.przedmiot->GetType() == arr::komputerowa){

    }
}*/



ListaZakupow::ListaZakupow() {}

ListaZakupow::~ListaZakupow() {
    /*for(auto i = Lista.begin(); i != Lista.end(); i++){
        delete *i;
    }
    Lista.clear();*/
}

void ListaZakupow::dodajProdukt(GraKarciana *pKarciana) {
    Lista.push_back(pKarciana);
}

void ListaZakupow::dodajProdukt(GraKomputerowa *pKomputerowa) {
    Lista.push_back(pKomputerowa);
}

void ListaZakupow::zapisz() {
    ofstream output;
    output.open("C:/Users/bartek/CLionProjects/Sklep_z_Grami/zakupy", ios::app);
    output << "Twoje zakupy:" << endl;
    output << endl;
    output.close();
    for(auto i = Lista.begin(); i != Lista.end(); i++)
        (*i)->zapisz();
}

GraKarciana *znajdzNaPolce(vector <GraKarciana> polkaKarciane, string nazwa) {
    GraKarciana ret;
    for(auto i = polkaKarciane.begin(); i!=polkaKarciane.end(); i++){
        if(i->podajNazwe() == nazwa)
            return ret.kupKarty(*i);
    }
    cout << "nie znalazlem takiej gry!" << endl;
    return NULL;
}

GraKomputerowa znajdzNaPolce(vector<GraKomputerowa> polkaKomputerowe, string nazwa){
    GraKomputerowa ret;
    for(auto i = polkaKomputerowe.begin(); i!=polkaKomputerowe.end(); i++){
        if(i->podajNazwe() == nazwa) {
            ret = *i;
            return ret;
        }
    }
    cout << "nie znalazlem takiej gry!" << endl;
    return GraKomputerowa();
}