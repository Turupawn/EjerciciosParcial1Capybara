#ifndef LISTA_H
#define LISTA_H

#include "Nodo.h"

class Lista
{
    public:
        Nodo* inicio;
        void agregar(Nodo* nuevo);
        void imprimir();
        Lista();
        virtual ~Lista();
    protected:
    private:
};

#endif // LISTA_H
