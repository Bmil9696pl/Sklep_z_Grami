#include "../lib/system.h"
using namespace std;


int main() {
    GraKarciana pomm;
    GraKomputerowa pom;
    ListaZakupow lista;
    //GraKomputerowa uncharted("uncharted;160.25;gra przygodowa, rpg;ps4 exlusive");
    //GraKarciana magic("Magic the Gathering;8;trading card game stworzony przez Wizards of the Coast;10;1");
    //uncharted.opisGry();
    //magic.opisGry();
    vector<GraKomputerowa> polkaKomputerowe = loadShelves<GraKomputerowa>("C:/Users/bartek/CLionProjects/Sklep_z_Grami/graKomputerowa");
    vector<GraKarciana> polkaKarciane = loadShelves<GraKarciana>("C:/Users/bartek/CLionProjects/Sklep_z_Grami/graKarty");

    for(auto i : polkaKarciane){
        i.opisGry();
    }
    try {
        pom = znajdzNaPolce(polkaKomputerowe, "The Witcher 3");
    }
    catch(const char* msg){
        cout << msg << endl;
    }
    try {
        pomm = znajdzNaPolce(polkaKarciane, "Magic the Gatherin");
    }
    catch(const char* msg){
        cout << msg << endl;
    }
    lista.dodajProdukt(&pom);
    lista.dodajProdukt(&pomm);
    lista.zapisz();
    polkaKomputerowe.clear();
    polkaKarciane.clear();
    return 0;
}
