/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: pablo
 *
 * Created on 26 de mayo de 2017, 12:00 AM
 */

#include <cstdlib>

#include "ListaCircularSencilla.h"

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

   ListaCircularSencilla lC;
//    lC.insertIntoList('a');
//    lC.insertIntoList('b');
//    lC.insertIntoList('c');
//    lC.deleteFirst();
//    lC.deleteLast();
//    lC.printList();
    
    lC.insertIntoLastList('a');
    lC.insertIntoLastList('b');
    lC.insertIntoLastList('c');
    lC.printList();
    return 0;
}

