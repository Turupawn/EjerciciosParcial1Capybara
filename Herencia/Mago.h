#ifndef MAGO_H
#define MAGO_H

#include "Personaje.h"

class Mago : public Personaje
{
    public:
        Mago(int vida, int ataque);
        virtual ~Mago();
        void dibujar();
        void logica();
    protected:
    private:
};

#endif // MAGO_H
