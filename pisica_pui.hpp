//
// Created by stefa on 1/19/2022.
//

#ifndef LABORATOR11_PISICA_NEAGRA_HPP
#define LABORATOR11_PISICA_NEAGRA_HPP
#include "pisica.hpp"

class pisica_pui:public pisica{
    static int pisici_pui;
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
    pisica_pui();
    pisica_pui(const char*culoare,const char* nume, const char* descriere,
                const bool vaxx, const float varsta);
    ~pisica_pui();
};


#endif
