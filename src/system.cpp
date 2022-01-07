#include "../lib/system.h"
/*
void zapiszZakupy(zakupy zakupy){
    ofstream output("C:/Users/bartek/CLionProjects/Sklep_z_Grami/zakupy");
    struct zakupy pom = zakupy;
    if(pom.przedmiot->GetType() == arr::komputerowa){

    }
}*/

void addListKarciana(vector<GraKarciana> vektor, string nazwa, zakupy *zakupy){
    GraKarciana pomKart;
    struct zakupy* lista = zakupy;
    for(auto& x: vektor) {
        if (x.nazwa == nazwa) {
            pomKart = x;
        }
    }
    while(true){
        GraKarciana pom = lista->kart;
        if(pom.nazwa == pomKart.nazwa){
            pomKart += pom;
            lista->kart = pomKart;
            return;
        }
        else if(lista->next == NULL && lista->type == NULL){
            lista->kart = pomKart;
            lista->type = 0;
            return;
        }
        else if(lista->next == NULL){
            struct zakupy* kolejnyPomocniczy;
            kolejnyPomocniczy->kart = pomKart;
            kolejnyPomocniczy->type = 0;
            return;
        }
    }
}

void addListKomputerowa(vector<GraKomputerowa> vektor, string nazwa, zakupy *zakupy){
    GraKomputerowa pomKomp;
    struct zakupy* lista = zakupy;
    for(auto& x: vektor) {
        if (x.nazwa == nazwa) {
            pomKomp = x;
        }
    }
    while(true){
        GraKomputerowa pom = lista->komp;
        if(lista->next == NULL && lista->type == NULL){
            lista->komp = pomKomp;
            lista->type = 1;
            return;
        }
        else if(lista->next == NULL){
            struct zakupy* kolejnyPomocniczy;
            kolejnyPomocniczy->komp = pomKomp;
            kolejnyPomocniczy->type = 1;
            return;
        }
    }
}
