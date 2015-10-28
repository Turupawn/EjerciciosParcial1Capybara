#include <iostream>
#include "Lista.h"

using namespace std;

int main()
{
    Lista<int> l;
    l.agregar(10);
    for(;;)
    {
        l.agregar(20);
        l.borrar(20);
    }

    return 0;
}
