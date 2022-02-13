//
// Created by stefa on 1/19/2022.
//

#ifndef LABORATOR11_BASE_HPP
#define LABORATOR11_BASE_HPP
#include <iostream>
#include <cstring>
using namespace std;

class base {

public:
    ~base();
    virtual int getNrPisici_albe()=0;
    virtual int getNrPisici_negre()=0;
    virtual int getNrPisici_colorate()=0;
    virtual int getNrPisici_vaxxed()=0;
    virtual int getNrPisici()=0;
    virtual char* getCuloare()=0;
    virtual char* getNume()=0;
    virtual char* getDescriere()=0;
    virtual float getVarsta()=0;
    virtual bool isVaxxed()=0;
    virtual void afisare()=0;

};


#endif //LABORATOR11_BASE_HPP
