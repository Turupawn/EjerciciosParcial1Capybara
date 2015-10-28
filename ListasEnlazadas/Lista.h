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

        void borrar(T valor)
        {
            if(inicio->valor == valor)
            {
                Nodo<T>*aux = inicio;
                inicio = inicio->siguiente;
                delete aux;
                if(inicio==NULL)
                    return;
            }
            Nodo<T>* temp = inicio;
            while(temp->siguiente!=NULL)
            {
                if(temp->siguiente->valor == valor)
                {
                    Nodo<T>*aux = temp->siguiente;
                    temp->siguiente = temp->siguiente->siguiente;
                    delete aux;
                    if(temp->siguiente==NULL)
                        break;
                }
                temp = temp->siguiente;
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
