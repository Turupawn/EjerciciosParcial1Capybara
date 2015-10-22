#ifndef PERSONAJE_H
#define PERSONAJE_H

#include<iostream>
using namespace std;

class Personaje
{
    public:
        string tipo;
        int vida;
        int ataque;
        Personaje();
        virtual void dibujar() = 0;
        virtual void logica() = 0;
        virtual ~Personaje();
    protected:
    private:
};

#endif // PERSONAJE_H
