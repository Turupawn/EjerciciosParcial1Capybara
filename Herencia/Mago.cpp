#include "Mago.h"

Mago::Mago(int vida, int ataque)
{
    this->vida = vida;
    this->ataque = ataque;
    this->tipo = "Mago";
}

Mago::~Mago()
{
    //dtor
}

void Mago::dibujar()
{
    cout<<"--dibujando un mago--"<<endl;
    cout<<"vida: "<<vida<<endl;
    cout<<"ataque: "<<ataque<<endl;
}

void Mago::logica()
{
    cout<<"Pirrin!"<<endl;
}
