/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   ListaCircularSencilla.h
 * Author: pablo
 *
 * Created on 26 de mayo de 2017, 12:00 AM
 */

#ifndef LISTACIRCULARSENCILLA_H
#define LISTACIRCULARSENCILLA_H

class ListaCircularSencilla {
public:
    ListaCircularSencilla();
    ListaCircularSencilla(const ListaCircularSencilla& orig);
    virtual ~ListaCircularSencilla();

    void insertIntoList(char value);
    void insertIntoLastList(char value);
    void printList();
    void deleteFirst();
    void deleteLast();

private:

    struct node { //Struct objeto que se define en una clase y carece de metodos
        char data;
        struct node *nextPtr; //indicamos que * es un puntero
    };

    //variables
    typedef struct node NODE; //para cuando definamos los tipos nodos sean en mayuscula
    typedef NODE *NODEPTR;

    NODEPTR headNode; //head o start inicio del node
    NODEPTR tailNode;

};

#endif /* LISTACIRCULARSENCILLA_H */

