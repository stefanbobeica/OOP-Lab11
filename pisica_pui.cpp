//
// Created by stefa on 1/19/2022.
//

#include "pisica_pui.hpp"
int pisica_pui::pisici_pui = 0;
int pisica_pui::pisici_albe = 0;
int pisica_pui::pisici_negre = 0;
int pisica_pui::pisici_colorate = 0;
int pisica_pui::pisici_vaccinate = 0;
pisica_pui::pisica_pui(const char*culoare,const char *nume,const char *descriere,const bool vaxx, const float varsta):
                      pisica(culoare,nume,descriere,vaxx,varsta) {
    pisici_pui++;
    if(strcmp(culoare,"alba")==0)
        pisici_albe++;
    if(strcmp(culoare,"neagra")==0)
        pisici_negre++;
    if(strcmp(culoare,"colorata")==0)
        pisici_colorate++;
    if(vaxx)
        pisici_vaccinate++;
}

pisica_pui::pisica_pui():pisica() {
    pisica::culoare=strdup("neagra");
}

pisica_pui::~pisica_pui() {}

int pisica_pui::getNrPisici() {
    return pisici_pui;
}

int pisica_pui::getNrPisici_albe() {
    return pisici_albe;
}

int pisica_pui::getNrPisici_negre() {
    return pisici_negre;
}

int pisica_pui::getNrPisici_colorate() {
    return pisici_colorate;
}

int pisica_pui::getNrPisici_vaxxed() {
    return pisici_vaccinate;
}