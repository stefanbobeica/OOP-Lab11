

#ifndef LABORATOR11_PISICA_HPP
#define LABORATOR11_PISICA_HPP
#include "base.hpp"

class pisica: public base{
protected:
    char* culoare;
    char* nume;
    char* descriere;
    bool vaxx;
    float varsta;

public:
    pisica();
    pisica(const char* culoare, const char* nume, const char* descriere,
           const bool vaxx, const float varsta);
    char* getCuloare();
    char* getNume();
    char* getDescriere();
    float getVarsta();
    bool isVaxxed();
    void afisare();
    ~pisica();
};


#endif
