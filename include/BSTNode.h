//
// Created by carolina on 3/6/20.
//

#include "Cola.h"

#ifndef ABB_BSTNODE_H
#define ABB_BSTNODE_H

template <class T>
class BSTNode
{
private:
    T data;
    BSTNode<T>* left; //Left children
    BSTNode<T>* right; //Right children
    BSTNode<T>* parent;

public:
    BSTNode(T data);
    T get_data();
    void set_data(T data);
    void set_right(BSTNode<T>* right, BSTNode<T>* parent);
    void set_left(BSTNode<T>* left, BSTNode<T>* parent);
    void set_left(BSTNode<T>* left);
    void set_right(BSTNode<T>* right);
    void set_parent(BSTNode<T>* parent);
    BSTNode<T>* get_right();
    BSTNode<T>* get_left();
    BSTNode<T>* get_parent();
    bool isLeaf();
    bool rightChildOnly();
    bool leftChildOnly();
    void width(BSTNode<T> node);
};

template <class T>
BSTNode<T>::BSTNode(T data)
{
    this->data = data;
    this->left = NULL;
    this->right = NULL;
    this->parent = NULL;
}

template <class T>
T BSTNode<T>::get_data()
{
    return this->data;
}

template <class T>
void BSTNode<T>::set_right(BSTNode<T>* right, BSTNode<T>* parent){
    this->right = right;
    this->parent = parent;
}

template <class T>
void BSTNode<T>::set_right(BSTNode<T>* right){
    this->right = right;
}

template <class T>
void BSTNode<T>::set_left(BSTNode<T>* left, BSTNode<T>* parent){
    this->left = left;
    this->parent = parent;
}

template <class T>
void BSTNode<T>::set_parent(BSTNode<T> *parent) {
    this->parent = parent;
}

template <class T>
void BSTNode<T>::set_data(T data) {
    this->data = data;
}


template <class T>
void BSTNode<T>::set_left(BSTNode<T>* left){
    this->left = left;
}

template <class T>
BSTNode<T>* BSTNode<T>::get_right()
{
    return this->right;
}

template <class T>
BSTNode<T>* BSTNode<T>::get_left()
{
    return this->left;
}

template <class T>
BSTNode<T>* BSTNode<T>::get_parent()
{
    return this->parent;
}

template <class T>
bool BSTNode<T>::isLeaf() {
    return (this->get_left() == NULL && this->get_right() == NULL);
}

template <class T>
bool BSTNode<T>::rightChildOnly() {
    return (this->get_left() == NULL && this->get_right() != NULL);
}

template <class T>
bool BSTNode<T>::leftChildOnly() {
    return (this->get_left() != NULL && this->get_right() == NULL);
}

template <class T>
void BST<T>::width(BSTNode<T> node) //SE RECIBE LA RAIZ DEL ARBOL
{
    Cola cola, colaAux; //DEFINICIÓN DE 2 VARIABLES DE TIPO COLA
    BSTNode<T> aux; //DEFINICIÓN AUX DE TIPO NODOARBOL

    if (node != NULL) //SI EL ÁRBOL CONTIENE NODOS...
    {
        cola = new Cola(); //SE INSTANCIA EL OBJETO COLA
        colaAux = new Cola(); //SE INSTANCIA EL OBJETO COLAAUX
        cola.push(node); //SE INSERTA EL NODOARBOL "A" (RAIZ) COMO PRIMER NODO EN LA COLA
        while (cola.colavacia()!=1) //MIENTRAS HAYAN ELEMENTOS EN LA COLA...
        {
            colaAux.push(aux=cola.pop()); /*EL ELEMENTO EXTRAIDO DE LA COLA PRINCIPAL ES ASIGNADO
A AUX Y A SU VEZ INSERTADO EN LA COLA AUXILIAR*/
            if (aux.izq != null) //SI EL HIJO IZQUIERDO DEL NODO ACTUAL EXISTE
            {
                cola.push(aux.izq); //SE INSERTA ESE HIJO COMO ELEMENTO SIGUIENTE EN LA COLA
            }
            if (aux.der!= null) //SI EL HIJO DERECHO DEL NODO ACTUAL EXISTE
            {
                cola.push(aux.der); //SE INSERTA ESE HIJO COMO ELEMENTO SIGUIENTE EN LA COLA
            }
        }
        colaAux.print(); //POR ÚLTIMO SE IMPRIME LA COLA AUXILIAR
    }
}







#endif //ABB_BSTNODE_H
