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
        Personaje(int vida, int ataque);
        Personaje();
        void dibujar();
        void logica();
        virtual ~Personaje();
    protected:
    private:
};

#endif // PERSONAJE_H
