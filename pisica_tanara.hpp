
#ifndef LABORATOR11_PISICA_TANARA_HPP
#define LABORATOR11_PISICA_TANARA_HPP
#include "pisica.hpp"

class pisica_tanara:public pisica {
private:
    static int pisici_tinere;
    static int pisici_albe;
    static int pisici_negre;
    static int pisici_colorate;
    static int pisici_vaccinate;
public:
    pisica_tanara();
    int getNrPisici();
    int getNrPisici_albe();
    int getNrPisici_negre();
    int getNrPisici_colorate();
    int getNrPisici_vaxxed();
    pisica_tanara(const char* culoare,const char* nume, const char* descriere,
                const bool vaxx, const float varsta);
    ~pisica_tanara();
};




#endif
