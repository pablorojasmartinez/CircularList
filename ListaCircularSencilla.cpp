/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   ListaCircularSencilla.cpp
 * Author: pablo
 * 
 * Created on 26 de mayo de 2017, 12:00 AM
 */

#include "ListaCircularSencilla.h"
#include <iostream>
#include <malloc.h>
#include <stdlib.h>

ListaCircularSencilla::ListaCircularSencilla() {
}

ListaCircularSencilla::ListaCircularSencilla(const ListaCircularSencilla& orig) {
}

ListaCircularSencilla::~ListaCircularSencilla() {
}

void ListaCircularSencilla::insertIntoList(char value) {

    //variables
    NODEPTR newPtr, tempPtr, previousPtr;

    newPtr = (NODEPTR) malloc(sizeof (NODE)); //asignacion de memoria m=memory alloc = allocation
    newPtr-> data = value;

    tempPtr = headNode;

    if (tempPtr == NULL) {
        headNode = tailNode = newPtr;
        tailNode->nextPtr = headNode;
    } else {
        tailNode->nextPtr = newPtr;
        newPtr->nextPtr = headNode;
        headNode = newPtr;
    }
}

void ListaCircularSencilla::insertIntoLastList(char value) {

    //variables
    NODEPTR newPtr, tempPtr, previousPtr;

    newPtr = (NODEPTR) malloc(sizeof (NODE)); //asignacion de memoria m=memory alloc = allocation
    newPtr-> data = value;

    tempPtr = headNode;

    if (tempPtr == NULL) {
        headNode = tailNode = newPtr;
        tailNode->nextPtr = headNode;
    } else {
        tailNode->nextPtr = newPtr;
        tailNode = newPtr;
        newPtr->nextPtr = headNode;
    }
}

void ListaCircularSencilla::deleteLast() {
    NODEPTR newPtr, tempPtr, previousPtr, temp;

    newPtr = (NODEPTR) malloc(sizeof (NODE)); //asignacion de memoria m=memory alloc = allocation
    tempPtr = headNode;

    if (headNode == NULL) {
        printf("The list is empty.  ");

    } else if (headNode == tailNode) {
        headNode = tailNode = NULL;
        //cout << "Elemento eliminado" << endl;
    } else {
        bool seguir = true;
        tempPtr = headNode;
        while (seguir) {
            if (tempPtr->nextPtr == tailNode) {
                temp = tailNode;
                tailNode = tempPtr;
                tailNode->nextPtr = headNode;
                delete temp;
                seguir = false;
            } else {
                tempPtr = tempPtr->nextPtr;
            }
        }
    }
}

void ListaCircularSencilla::deleteFirst() {
    NODEPTR newPtr, tempPtr, previousPtr;

    newPtr = (NODEPTR) malloc(sizeof (NODE)); //asignacion de memoria m=memory alloc = allocation
    tempPtr = headNode;

    if (tempPtr == NULL) {
        printf("The list is empty.  ");
    }//if
    else {
        if (headNode == tailNode) {
            tailNode = headNode = NULL;
        }//if
        else {
            tempPtr = headNode;
            headNode = headNode->nextPtr;
            tailNode->nextPtr = headNode;
            delete tempPtr;
        }//else
    }//else
}//deleteFist

void ListaCircularSencilla::printList() {
    //nodo temporal
    NODEPTR tempNode = headNode;
    bool continuar = true;
    if (headNode == NULL) {
        printf("The list is empty.  ");
    }//if
    else {
        while (continuar) {
            printf("%c--> ", tempNode->data);
            if (tempNode == tailNode) {
                continuar = false;
            }//if
            tempNode = tempNode->nextPtr;
        }//while
    }//else
}
