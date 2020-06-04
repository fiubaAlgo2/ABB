//
//  Cola.cpp
//  EjListas
//
//  Created by Carolina Pistillo on 16/10/18.
//  Copyright © 2018 Carolina Pistillo. All rights reserved.
//

#include "Cola.h"

Cola::Cola()
{
    this->primer_nodo=0;
    this->ultimo_nodo=0;
    this->tamanio = 0;
}

Cola::~Cola()
{
    while(!(this->cola_vacia()))
    {
        this->Desencolar();
    }
}

void Cola::push(int entero)
{
    Nodo* ptr_nodo = new Nodo(entero);
    
    if(cola_vacia())
    {
        this->primer_nodo=ptr_nodo;
    }
    
    else
    {
        this->ultimo_nodo->set_siguiente(ptr_nodo);
    }
    this->ultimo_nodo=ptr_nodo;
    this->tamanio++;
}

int Cola::pop()
{
    int datoDesacolado=0;
    
    if(!cola_vacia())
    {
        Nodo* ptr_aux = this->primer_nodo;
        
        this->primer_nodo = ptr_aux->get_siguiente();
        
        datoDesacolado = ptr_aux->get_dato();
        delete ptr_aux;
    }
    this->tamanio--;
    return datoDesacolado;
}

int Cola::get_primeroEnCola()
{
    if(!cola_vacia())
        return primer_nodo->get_dato();
    else return 0;
}

bool Cola::cola_vacia()
{
    return(this->primer_nodo==0);
}

unsigned int Cola::get_tamanio()
{
    return this->tamanio;
}

bool Cola::colaVacia() {
    return this->tamanio == 0;
}







