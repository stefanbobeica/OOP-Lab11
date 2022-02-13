#include "pisica_tanara.hpp"
#include "pisica_pui.hpp"
#include "pisica_matura.h"
using namespace std;

int main() {
    int nr_zile;
    nr_zile=(300-300/2)/2;
    cout<<"In "<<nr_zile<<" zile cafeneaua va avea  o ocupare a locurilor <=50%."<<endl;
    cout<<endl;
    int  cantitate=0;
    for(int i=0;i<100;i++)
        cantitate+=(300-2*i)*100;
    cout<<"Cantitatea consumata in 100 de zile este de "<<cantitate/100<<" kilograme."<<endl;
    cout<<endl;
    base** cafenea;
    cafenea=new base*[10];
    cafenea[0]=new pisica_pui("alba","Riki"," o pisica alba",false,0.5);
    cafenea[1]=new pisica_matura("colorata","Pufi","o pisica matura",true,23);
    cafenea[2]=new pisica_tanara("neagra","Jojo","o pisica columbianca",false,2.5);
    cafenea[3]=new pisica_matura("neagra","Kira","o pisica cantareata",true,25);
    cafenea[4]=new pisica_pui("colorata","Lex","o pisica celebra",false,0.8);
    cafenea[5]=new pisica_matura("alba","Baghera","o pisica interesanta",true,19);
    cafenea[6]=new pisica_tanara("colorata","Ella","o pisica misterioasa",true,2);
    cafenea[7]=new pisica_matura("neagra","Kitty","o pisica fancy",true,23);
    cafenea[8]=new pisica_pui("neagra","Rafi","o pisica cinstita", false,0.6);
    cafenea[9]=new pisica_matura("neagra","Zorro","o alta pisica matura",true,23);
   //ce a am implementat functioneaza similar pentr 300 de inregistrari, dar am luat 10 pentru un exemplu relevant
    cout<<"Sunt "<<cafenea[0]->getNrPisici()<<" pisici pui."<<endl;
    cout<<"Sunt "<<cafenea[2]->getNrPisici()<<" pisici tinere."<<endl;
    cout<<"Sunt "<<cafenea[1]->getNrPisici()<<" pisici mature."<<endl;
    cout<<endl;
    cout<<"Pisici pui:"<<endl;
    cout<<"->Pisici negre: "<<cafenea[0]->getNrPisici_negre()<<endl;
    cout<<"->Pisici albe: "<<cafenea[0]->getNrPisici_albe()<<endl;
    cout<<"->Pisici colorate: "<<cafenea[0]->getNrPisici_colorate()<<endl;
    cout<<endl;
    cout<<"Pisici tinere:"<<endl;
    cout<<"->Pisici negre: "<<cafenea[2]->getNrPisici_negre()<<endl;
    cout<<"->Pisici albe: "<<cafenea[2]->getNrPisici_albe()<<endl;
    cout<<"->Pisici colorate: "<<cafenea[2]->getNrPisici_colorate()<<endl;
    cout<<endl;
    cout<<"Pisici mature:"<<endl;
    cout<<"->Pisici negre: "<<cafenea[1]->getNrPisici_negre()<<endl;
    cout<<"->Pisici albe: "<<cafenea[1]->getNrPisici_albe()<<endl;
    cout<<"->Pisici colorate: "<<cafenea[1]->getNrPisici_colorate()<<endl;
    cout<<endl;
    int* top3;
    top3 = new int[3];
    top3[0] = 0;
    top3[1] = 0;
    top3[2] = 0;
    int index1,index2,index3;
    for(int i=0;i<10;i++)
        if(top3[0]<strlen(cafenea[i]->getDescriere())){
        top3[0]=strlen(cafenea[i]->getDescriere());
        index1=i;
        }
    for(int i=0;i<10;i++)
        if(top3[1]<strlen(cafenea[i]->getDescriere()) && strlen(cafenea[i]->getDescriere())<top3[0]){
            top3[1]=strlen(cafenea[i]->getDescriere());
            index2=i;
        }
    for(int i=0;i<10;i++)
        if(top3[2]<strlen(cafenea[i]->getDescriere()) && strlen(cafenea[i]->getDescriere())<top3[1]) {
            top3[2] = strlen(cafenea[i]->getDescriere());
            index3=i;
        }
        cout<<"Pisica cu cea mai lunga descriere:"<<endl;
        cafenea[index1]->afisare();
        cout<<endl;
        cout<<"Pisica cu a 2 a cea mai lunga descriere:"<<endl;
        cafenea[index2]->afisare();
        cout<<endl;
        cout<<"Pisica cu a 3 a cea mai lunga descriere:"<<endl;
        cafenea[index3]->afisare();
    delete[] cafenea;
    return 0;
}


