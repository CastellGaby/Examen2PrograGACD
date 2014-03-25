#include "nodotrinario.h"

NodoTrinario::NodoTrinario(int num)
{
    this->hijo_izquierdo=0;
    this->hijo_derecho=0;
    this->hijo_medio=0;
    this->num=num;

}

NodoTrinario::~NodoTrinario()
{
    //dtor
}
