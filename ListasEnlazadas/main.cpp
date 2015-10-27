#include <iostream>
#include "Lista.h"

using namespace std;

int main()
{
    Lista l;
    l.agregar(new Nodo(10));
    l.agregar(new Nodo(20));
    l.agregar(new Nodo(30));
    l.imprimir();

    return 0;
}
