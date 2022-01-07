#include "../lib/graKomputerowa.h"
#include "../lib/graKarty.h"
#include "../lib/system.h"
using namespace std;


int main() {
    struct zakupy *zak;
    //GraKomputerowa uncharted("uncharted;160.25;gra przygodowa, rpg;ps4 exlusive");
    //GraKarciana magic("Magic the Gathering;8;trading card game stworzony przez Wizards of the Coast;10;1");
    //uncharted.opisGry();
    //magic.opisGry();
    vector<GraKomputerowa> polkaKomputerowe = loadShelves<GraKomputerowa>("C:/Users/bartek/CLionProjects/Sklep_z_Grami/graKomputerowa");
    vector<GraKarciana> polkaKarciane = loadShelves<GraKarciana>("C:/Users/bartek/CLionProjects/Sklep_z_Grami/graKarty");

    for(auto i : polkaKarciane){
        i.opisGry();
    }
    addListKomputerowa(polkaKomputerowe, "The Witcher 3", zak);
    addListKarciana(polkaKarciane, "Magic the Gathering", zak);
    addListKarciana(polkaKarciane, "Magic the Gathering", zak);
    return 0;
}
