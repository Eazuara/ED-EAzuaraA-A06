//
// Created by Esteban Azuara Aguirre on 07/09/17.
//

#include "Nodo.h"

Nodo::Nodo() {
    data=0;
    next=NULL;
}

Nodo::Nodo(int data, Nodo *next) {
    data=data;
    next=next;
}
int Nodo::getData() const {
    return data;
}

void Nodo::setGetData(int getData) {
    Nodo::getData = getData;
}

Nodo* Nodo::getNext() {
    return next;
}

void  Nodo::setNext(Nodo *next) {
    next=next;
}
