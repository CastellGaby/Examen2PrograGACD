#include "arboltrinario.h"
#include <iostream>
#include <string>

using namespace std;

ArbolTrinario::ArbolTrinario()
{
    this->raiz=0;
}

ArbolTrinario::~ArbolTrinario()
{
    //dtor
}

void ArbolTrinario::imprimir(NodoTrinario*raiz)
{
    NodoTrinario*temporal;
    for(temporal=raiz;temporal!=0;temporal=temporal->hijo_derecho){
        cout<<temporal->num<<endl;
    }
    for(temporal=raiz;temporal!=0;temporal=temporal->hijo_izquierdo){
        cout<<temporal->num<<endl;
    }

    for(temporal=raiz;temporal!=0;temporal=temporal->hijo_medio){
        cout<<temporal->num<<endl;
    }
}

bool ArbolTrinario::existe(int num){
    NodoTrinario*temporal;
    for(temporal=raiz;temporal!=0;temporal=temporal->hijo_derecho){
        if(&temporal->num){
            return true;
        }else{return false;}
    }
    for(temporal=raiz;temporal!=0;temporal=temporal->hijo_izquierdo){
        cout<<temporal->num<<endl;
        if(&temporal->num){
            return true;
        }else{return false;}
    }

    for(temporal=raiz;temporal!=0;temporal=temporal->hijo_medio){
        cout<<temporal->num<<endl;
        if(&temporal->num){
            return true;
        }else{return false;}
    }
}
