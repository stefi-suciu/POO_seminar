#include <iostream>
using namespace std;

struct Ghiozdan {

    float lungime;
    int nrBuzunare;
    bool laptop;
    char *producator;
};

Ghiozdan citireGhiozdan() {

    char numeProducator[10]; //alocare la numele producatorului?? sa vad cum se face 
    Ghiozdan g;
    cout << "lungime: " << endl;
    cin >> g.lungime;
    cout << "numar buzunare: " << endl;
    cin >> g.nrBuzunare;
    cout << "este laptop? (1/0): " << endl;
    cin >> g.laptop;
    // g.producator = new [strlen(numeProducator) + 1]; si chestia asta cum se face si ce inseamna si cum functioneaza stiva si heep adica memoria in general
    cout << "producator: " << endl;
    cin >> numeProducator;
    g.producator = new char[strlen(numeProducator)+1]; //cat spatiu se aloca aici
    //de ex pt nike ar fi nevoie de 5 octeti
    //se aloca un sigur octet si se initializeaza cu codul ascii 5
    strcpy (g.producator, numeProducator);
    return g;
}

void afisare(Ghiozdan g){
    cout << "lungime: " << g.lungime << endl;
    cout << "buzunare: " << g.nrBuzunare << endl;
    cout << "laptop: " << g.laptop << endl;
    cout << "producator: " << g.producator << endl;
}

//subprogram pentru modificarea lungimii
void modificareLungime (Ghiozdan *g, float lungimeNoua){
    (*g).lungime = lungimeNoua; //n am inteles asta
}

int calculeazaNrBuzunare (Ghiozdan *ghiozdane, int nrGhiozdane){
    //calculam numarul total de buzunare
    int suma = 0;
    for (int i=0; i<nrGhiozdane; i++){
        suma += ghiozdane[i].nrBuzunare; //ce inseamna sageata?
        //operatorul de index??
    }
    return suma;

}

int main(){
    /*
    Ghiozdan g = citireGhiozdan();
    cout << "\n";
    modificareLungime (&g, 12);
    afisare(g);
    */

    int nrGhiozdane = 3;
    Ghiozdan *ghiozdane;
    ghiozdane = new Ghiozdan[3];
    //sa citesc fiecare ghiozdan in parte
    for (int i=0; i<nrGhiozdane; i++){
        ghiozdane[i] = citireGhiozdan();
    }
    //am citit cele 3 ghiozdane
    //sa afisez ghiozdanele
    for (int i=0; i<nrGhiozdane; i++){
        afisare(ghiozdane[i]);
    }

    cout << "Nr total de buzunare: " << calculeazaNrBuzunare(ghiozdane, nrGhiozdane);


}