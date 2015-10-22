#include <iostream>
#include "Personaje.h"
#include "Mago.h"
#include "Guerrero.h"
#include "Arquero.h"
#include <vector>

using namespace std;

int main()
{
    vector<Personaje*>personajes;
    personajes.push_back(new Mago(70,7));
    personajes.push_back(new Guerrero(110,13));
    personajes.push_back(new Arquero(75,6));

    for(int i=0;i<personajes.size();i++)
    {
        if(personajes[i]->tipo == "Mago")
        {
            ((Mago*)personajes[i])->dibujar();
            ((Mago*)personajes[i])->logica();
        }
    }
    return 0;
}
