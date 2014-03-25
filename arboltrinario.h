#ifndef ARBOLTRINARIO_H
#define ARBOLTRINARIO_H
#include "nodotrinario.h"

using namespace std;

class ArbolTrinario
{
    public:
        NodoTrinario*raiz;
        ArbolTrinario();

        void imprimir(NodoTrinario*raiz);
        bool existe(int num);

        virtual ~ArbolTrinario();
    protected:
    private:
};

#endif // ARBOLTRINARIO_H
