#ifndef NODOTRINARIO_H
#define NODOTRINARIO_H



class NodoTrinario
{
    public:
        int num;
        NodoTrinario*hijo_izquierdo;
        NodoTrinario*hijo_derecho;
        NodoTrinario*hijo_medio;
        NodoTrinario(int num);
        virtual ~NodoTrinario();
    protected:
    private:
};

#endif // NODOTRINARIO_H
