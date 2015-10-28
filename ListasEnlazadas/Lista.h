#ifndef LISTA_H
#define LISTA_H

#include "Nodo.h"

template <typename T>
class Lista
{
    public:
        Nodo<T>* inicio;
        void agregar(T valor)
        {
            Nodo<T>* nuevo = new Nodo<T>(valor);
            if(inicio==NULL)
            {
                inicio = nuevo;
            }else
            {
                Nodo<T>*temp = inicio;
                while(temp->siguiente!=NULL)
                {
                    temp=temp->siguiente;
                }
                temp->siguiente = nuevo;
            }
        }
        void imprimir()
        {
            for(Nodo<T>*temp = inicio; temp!=NULL; temp=temp->siguiente)
                cout<<temp->valor<<endl;
        }
        Lista()
        {
            inicio = NULL;
        }

        virtual ~Lista()
        {

        }
    protected:
    private:
};

#endif // LISTA_H
