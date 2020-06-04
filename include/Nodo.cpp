#include "Nodo.h"

Nodo::Nodo(int entero)
{
    this->entero=entero;
    this->puntero_a_siguiente=0;
}

Nodo::~Nodo()
{
}

void Nodo::set_dato(int entero)
{
    this->entero=entero;
}

int Nodo::get_dato()
{
    return this->entero;
}

void Nodo::set_siguiente(Nodo* puntero_a_siguiente)
{
    this->puntero_a_siguiente = puntero_a_siguiente;
}

Nodo* Nodo::get_siguiente()
{
    return this->puntero_a_siguiente;
}

