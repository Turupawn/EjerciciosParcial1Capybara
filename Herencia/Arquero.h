#ifndef ARQUERO_H
#define ARQUERO_H

#include "Personaje.h"

class Arquero : public Personaje
{
    public:
        Arquero(int vida, int ataque);
        virtual ~Arquero();
        void dibujar();
        void logica();
    protected:
    private:
};

#endif // ARQUERO_H
