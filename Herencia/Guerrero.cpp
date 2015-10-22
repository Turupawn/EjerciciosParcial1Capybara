#include "Guerrero.h"

Guerrero::Guerrero(int vida, int ataque)
{
    this->vida = vida;
    this->ataque = ataque;
    this->tipo = "Guerrero";
}

Guerrero::~Guerrero()
{
    //dtor
}

void Guerrero::dibujar()
{
    cout<<"--dibujando un guerrero--"<<endl;
    cout<<"vida: "<<vida<<endl;
    cout<<"ataque: "<<ataque<<endl;
}

void Guerrero::logica()
{
    cout<<"Wrrarrr!"<<endl;
}
