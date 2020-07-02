//
// Created by carolina on 3/6/20.
//

#include<iostream>
#include "include/BST.h"

using namespace std;

int main()
{
    BST<int>* bst = new BST<int>();
    int datos[] = { 23, 12, 31, 3, 7, 15, 29, 88, 53};
    for(int i=0;i<9;i++)
        bst->insert(datos[i]);

    bst->print_in_order();

    delete bst;



}

