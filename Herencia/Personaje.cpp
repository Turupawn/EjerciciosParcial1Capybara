#include "Personaje.h"

Personaje::Personaje(int vida, int ataque)
{
    this->vida = vida;
    this->ataque = ataque;
    this->tipo = "Personaje";
}

Personaje::Personaje()
{

}

Personaje::~Personaje()
{
    //dtor
}

void Personaje::dibujar()
{
    cout<<"Funcion dibujar de Personaje"<<endl;
}

void Personaje::logica()
{
    cout<<"Funcion logica de Personaje"<<endl;
}
