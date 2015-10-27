#include "Nodo.h"

Nodo::Nodo(int valor)
{
    this->valor = valor;
    this->siguiente = NULL;
}

Nodo::~Nodo()
{
    //dtor
}
