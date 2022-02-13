#include "pisica.hpp"

pisica::pisica():vaxx(false),varsta(0) {

    culoare = strdup("N/A");
    nume = strdup("N/A");
    descriere = strdup("N/A");

}

pisica::pisica(const char* culoare, const char* nume, const char* descriere,
               const bool vaxx, const float varsta):vaxx(vaxx),varsta(varsta) {

    this->culoare = strdup(culoare);
    this->nume = strdup(nume);
    this->descriere = strdup(descriere);
}

char* pisica::getCuloare() {
    return culoare;
}

char* pisica::getNume() {
   return nume;
}

char* pisica::getDescriere() {
    return descriere;
}

float pisica::getVarsta() {
    return varsta;
}

bool pisica::isVaxxed() {
    return vaxx;
}

pisica::~pisica() {
    delete culoare;
    delete nume;
    delete descriere;
}

void pisica::afisare() {

    cout<<"Pisica se numeste: "<<nume<<endl;
    cout<<"Pisica are varsta: "<<(float)varsta<<endl;
    cout<<"Descriere: "<<descriere<<endl;

    if(vaxx==true)
        cout<<"Pisica are vaccinurile facute."<<endl;
    else cout<<"Pisica nu are vaccinurile facute."<<endl;
}
