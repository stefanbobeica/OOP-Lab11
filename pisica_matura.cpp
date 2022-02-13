//
// Created by stefa on 1/19/2022.
//

#include "pisica_matura.h"
int pisica_matura::pisici_mature = 0;
int pisica_matura::pisici_albe = 0;
int pisica_matura::pisici_negre = 0;
int pisica_matura::pisici_colorate = 0;
int pisica_matura::pisici_vaccinate = 0;
pisica_matura::pisica_matura(const char* culoare,const char *nume,const char *descriere,const bool vaxx, const float varsta):
        pisica(culoare,nume,descriere,vaxx,varsta) {
    pisici_mature++;
    if(strcmp(culoare,"alba")==0)
        pisici_albe++;
    if(strcmp(culoare,"neagra")==0)
        pisici_negre++;
    if(strcmp(culoare,"colorata")==0)
        pisici_colorate++;
    if(vaxx)
        pisici_vaccinate++;
}

pisica_matura::pisica_matura():pisica() {
    pisica::culoare=strdup("colorata");
}

pisica_matura::~pisica_matura() {}
int pisica_matura::getNrPisici() {
    return pisici_mature;
}

int pisica_matura::getNrPisici_albe() {
    return pisici_albe;
}

int pisica_matura::getNrPisici_negre() {
    return pisici_negre;
}

int pisica_matura::getNrPisici_colorate() {
    return pisici_colorate;
}

int pisica_matura::getNrPisici_vaxxed() {
    return pisici_vaccinate;
}