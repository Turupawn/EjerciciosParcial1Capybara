#ifndef GUERRERO_H
#define GUERRERO_H

#include "Personaje.h"

class Guerrero : public Personaje
{
    public:
        Guerrero(int vida, int ataque);
        virtual ~Guerrero();
        void dibujar();
        void logica();
    protected:
    private:
};

#endif // GUERRERO_H
