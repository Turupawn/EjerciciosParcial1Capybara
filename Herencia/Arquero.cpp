#include "Arquero.h"

Arquero::Arquero(int vida, int ataque)
{
    this->vida = vida;
    this->ataque = ataque;
    this->tipo = "Arquero";
}

Arquero::~Arquero()
{
    //dtor
}

void Arquero::dibujar()
{
    cout<<"--dibujando un arquero--"<<endl;
    cout<<"vida: "<<vida<<endl;
    cout<<"ataque: "<<ataque<<endl;
}

void Arquero::logica()
{
    cout<<"Woosh!"<<endl;
}
