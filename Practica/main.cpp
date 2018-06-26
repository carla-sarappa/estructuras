//
// Created by Carla on 23/6/2018.
//

#include <iostream>
#include "Pokemon.h"
#include "Fraccion.h"
//#include "../LinkedLists/FunctionalLinkedLists/FunctionalLinkedLists.h"
#include "../LinkedLists/DestructiveLinkedLists/DestructiveLinkedLists.h"

using namespace std;

void printPokemon(Pokemon p) {
    cout << getNombre(p) << " " << getVida(p) << endl;
}


void ejercicio1() {
    Pokemon pikachu = crearPokemon("Pikachu", 30);
    Pokemon butterfree = crearPokemon("Butterfree", 15);
    lucharN(15, pikachu, butterfree);

    printPokemon(pikachu);
    printPokemon(butterfree);

    cout << estaVivo(pikachu) << endl;
    cout << estaVivo(butterfree) << endl;

    cambiarNombre(pikachu, "Biberita");

    printPokemon(pikachu);

    destruir(pikachu);

    cout << pikachu << endl;
}

void ejercicio2() {
    Fraccion f1 = fraccion(1, 2);
    Fraccion f2 = fraccion(2, 3);
    Fraccion f3 = fraccion(4, 8);

    printFraccion(sumar(f1, f2));
    printFraccion(multiplicar(f1, f2));
    printFraccion(dividir(f1, f2));
    simplificar(f3);
    printFraccion(f3);

}

int sumar1(List ls) {
    int total = 0;
    List xs = ls;

    while (not isNil(xs)) {
        total = total + head(xs);
        tkTail(xs);
    }
    return total;
}

int length1(List xs) {
    int i;
    for (i = 0; not isNil(xs); ++i) {
        tkTail(xs);
    }
    return i;
}

void mapSucc1(List &xs) {
    int i;
    List ls = Nil();
    for (i = 0; not isNil(xs);) {
        mkCons(head(xs) + 1, ls);
        tkTail(xs);
    }
    xs = ls;
}

void drop1(int n, List &xs) {

}

List take1(int n, List xs) {

}

void ejercicio5() {
    List ls = Nil();
    mkCons(4, ls);
    mkCons(3, ls);
    mkCons(2, ls);
    mkCons(1, ls);

//    List xs = Nil();
//    mkCons(4, xs);
//    mkCons(3, xs);
//    mkCons(2, xs);
//    mkCons(1, xs);

    printList(ls);

    List a = copiar(ls);
    cout << sumar1(ls) << endl;

    printList(a);

    cout << length1(a) << endl;



//    printList(take(2, xs));
//
}

int main() {

    ejercicio5();

    return 0;
}