//
// Created by Esteban Azuara Aguirre on 07/09/17.
//

#ifndef ED_EAZUARA_A06_NODOS_NODO_H
#define ED_EAZUARA_A06_NODOS_NODO_H

#endif //ED_EAZUARA_A06_NODOS_NODO_H


class Nodo{
public:
    int data;
    Nodo* next;

    Nodo();
    Nodo(int data, Nodo* next);

    Nodo();

    int getData;
    void setData(int data);
    Nodo* getNext();
    void  setNext(Nodo* next);

    int getData() const;

    int getGetData() const;

    void setGetData(int getData);

};
