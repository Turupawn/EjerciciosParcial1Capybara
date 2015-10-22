#include <iostream>
#include "ClaseEjemplo.h"

using namespace std;

int main()
{
    ClaseEjemplo clase_ejemplo;
    clase_ejemplo.x = 10;
    cout<<clase_ejemplo.x<<endl;
    clase_ejemplo.miFuncion();

    return 0;
}
