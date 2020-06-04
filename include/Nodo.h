#ifndef NODO_H_INCLUDED
#define NODO_H_INCLUDED


class Nodo
{
    //atributos
private:
    int entero; //dato a almacenar
    Nodo* puntero_a_siguiente; //puntero a otro nodo
    
    //metodos
public:
    
    //Constructor con un parametro
    //pre: -
    //post: crea un nodo con el dato 'entero' y el puntero a NULL
    Nodo(int entero);
    
    //Destructor
    //pre: nodo creado
    //post: -
    ~Nodo();
    
    //Setea el dato
    //pre: nodo creado
    //     entero es un dato valido
    //post: el nodo queda seteado con el dato 'entero'
    void set_dato(int entero);
    
    //Obtiene el dato
    //pre: nodo creado
    //post: Devuelve el dato que contiene el nodo
    int get_dato();
    
    //Setea el puntero al siguiente nodo
    //pre: nodo creado y ps valido
    //post: el puntero al siguiente nodo apunta a puntero_a_siguente
    void set_siguiente(Nodo* puntero_a_siguiente);
    
    //Obtiene el puntero al siguiente nodo
    //pre: nodo creado
    //post: devuelve el puntero al siguente nodo
    //      si es el ultimo apunta a NULL
    Nodo* get_siguiente();
    
    
};


#endif //NODO_H_INCLUDED
