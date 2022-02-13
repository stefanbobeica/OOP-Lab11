

#include "pisica_tanara.hpp"
int pisica_tanara::pisici_tinere = 0;
int pisica_tanara::pisici_albe = 0;
int pisica_tanara::pisici_negre = 0;
int pisica_tanara::pisici_colorate = 0;
int pisica_tanara::pisici_vaccinate = 0;
pisica_tanara::pisica_tanara(const char* culoare, const char *nume,const char *descriere, const bool vaxx, const float varsta):
                          pisica(culoare,nume,descriere,vaxx,varsta) {
    pisici_tinere++;
  if(strcmp(culoare,"alba")==0)
      pisici_albe++;
  if(strcmp(culoare,"neagra")==0)
      pisici_negre++;
  if(strcmp(culoare,"colorata")==0)
      pisici_colorate++;
  if(vaxx)
      pisici_vaccinate++;
}


pisica_tanara::pisica_tanara():pisica() {

}

pisica_tanara::~pisica_tanara() {}

int pisica_tanara::getNrPisici() {
    return pisici_tinere;
}

int pisica_tanara::getNrPisici_albe() {
    return pisici_albe;
}

int pisica_tanara::getNrPisici_negre() {
    return pisici_negre;
}

int pisica_tanara::getNrPisici_colorate() {
    return pisici_colorate;
}

int pisica_tanara::getNrPisici_vaxxed() {
    return pisici_vaccinate;
}
