#include <iostream>
#include "Lista.h"

using namespace std;

int main()
{
    Lista<int> l;
    l.agregar(10);
    l.agregar(20);
    l.agregar(30);
    l.imprimir();

    Lista<string> l2;
    l2.agregar("a");
    l2.agregar("b");
    l2.agregar("c");
    l2.imprimir();

    return 0;
}
