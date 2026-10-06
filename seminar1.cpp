//repository pe github (tot ce fac se incarca in repository pe github)
/*
commit cand fac probleme si chestii de alea pt nota pentru activitate
test grila ianuarie 10%
actvitate seminar 10%
4 prezente la curs si 8 la semninar pentru intrare in examen si minim 1 punct la seminar

=RECAPITULARE=

*/
#include <iostream>
using namespace std;
// using namespace std;

// :: se numeste operator de rezolutie si e folosit pentru accesarea membrilor unei clase sau a unui namespace
// main - vfunctie principala legatura cu sistemul de operare
struct Colectie {
//in struct punem proprietatile/caracteristici/atribute ale colectiei
    char *denumire; //char ocupa un singur octet (8 biti) si poate retine un singur caracter
    char categorie;
    //pointerul ocupa 8 octeti pentru arhitectura pe 64 de biti
    int nr_elemente;
    //upper camel case si lower camel case
    float pret; //float e simpla precizie si ocupa 4 octeti
    //double e dubla precizie si ocupa 8 octeti
    //long mai adauga octeti
    bool finit; //2 valori, true sau false, ocupa 1 octet, e cea mai mica zona adresabila din memorie
};
void afisareColectie(Colectie c) {
    cout <<"Denumire: " << c.denumire << endl;
    cout <<"Categorie: " << c.categorie << endl;
    cout <<"Numar elemente: " << c.nr_elemente << endl;
    cout <<"Pret: " << c.pret << endl;
    cout <<"Finit: " << c.finit << endl;
}
int main () {
    std::cout << "Hello World!"<<std::endl;
    Colectie c;
    c.categorie = 'A';
    c.finit = true;
    c.nr_elemente = 245;
    c.pret = 4000;
    c.denumire = new char[strlen("Ceai")+1];
    strcpy(c.denumire, "Ceai"); //sau strcpy_s(c.denumire, strlen("Ceai")+1, "Ceai");
    cout <<sizeof(bool) << endl;

    afisareColectie(c);
    delete[] c.denumire; //eliberam memoria alocata dinamic pentru denumire
}
/* sablon de functie:
tip_returnat nume_functie (parametri) {
    // corpul functiei
    return valoare;
}
*/
// start without debugging daca nu se foloseste debug
//la visual studio 2026 merge si cu void 
//in cpp functiile sunt lower camel case
//memory leak - scurgeri de memorie, cand nu eliberezi memoria alocata dinamic