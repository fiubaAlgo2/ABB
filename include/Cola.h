#ifndef COLA_H_INCLUDED
#define COLA_H_INCLUDED

#include"Nodo.h"

class Cola
{
private:
    //puntero al primer nodo de la cola
    Nodo* primer_nodo;

    //puntero al ultimo nodo de la cola
    Nodo* ultimo_nodo;
    
    unsigned int tamanio;
    
public:
    //Constructor
    //pre: -
    //post: crea una cola vacia
    //      primero y ultimo apuntan a NULL
    Cola();
    
    //Destructor
    //pre: la cola ha sido creada
    //post: libera todos los recursos de la cola
    ~Cola();
    
    //Acola
    //pre: la cola ha sido creada y dato es valido
    //post: agrega un dato (adentro de un nodo) al final de la cola
    void Encolar(int entero);
    
    //Desacola
    //pre: la cola ha sido creada y no esta vacia
    //post: libera el primer dato de la cola y devuelve el dato desacolado
    int Desencolar();
    
    //Obtiene el dato que esta primero en la cola
    //pre: la cola ha sido creada
    //post: devuelve el dato que esta primero en la cola
    int get_primeroEnCola();
    
    //La cola esta vacia?
    //pre: la cola ha sido creada
    //post: devuelve TRUE si la cola esta vacia y FALSE en caso contrario
    bool cola_vacia();
    
    //Devuelve el tamaño logico de la cola
    //pre: la cola ha sido creada
    //post: devuelve el valor de tamanio (cantidad de nodos de la lista)
    unsigned int get_tamanio();
    
};
#endif //Cola_h_included

