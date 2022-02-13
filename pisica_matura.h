//
// Created by stefa on 1/19/2022.
//

#ifndef MAIN_CPP_PISICA_MATURA_H
#define MAIN_CPP_PISICA_MATURA_H
#include "pisica.hpp"

class pisica_matura:public pisica {
    static int pisici_mature;
    static int pisici_albe;
    static int pisici_negre;
    static int pisici_colorate;
    static int pisici_vaccinate;
public:
    int getNrPisici();
    int getNrPisici_albe();
    int getNrPisici_negre();
    int getNrPisici_colorate();
    int getNrPisici_vaxxed();
    pisica_matura();
    pisica_matura(const char* culoare,const char* nume, const char* descriere,
                const bool vaxx, const float varsta);
    ~pisica_matura();
};


#endif //MAIN_CPP_PISICA_MATURA_H
