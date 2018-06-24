//
// Created by Carla on 23/6/2018.
//

#include <iostream>
#include "Pokemon.h"
#include "Fraccion.h"

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

int main() {

    ejercicio2();

    return 0;
}