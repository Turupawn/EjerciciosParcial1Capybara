#include "Lista.h"

Lista::Lista()
{
    inicio = NULL;
}

Lista::~Lista()
{
    //dtor
}

void Lista::agregar(Nodo* nuevo)
{
    if(inicio==NULL)
    {
        inicio = nuevo;
    }else
    {
        Nodo*temp = inicio;
        while(temp->siguiente!=NULL)
        {
            temp=temp->siguiente;
        }
        temp->siguiente = nuevo;
    }
}

void Lista::imprimir()
{
    for(Nodo*temp = inicio; temp!=NULL; temp=temp->siguiente)
        cout<<temp->valor<<endl;
}
