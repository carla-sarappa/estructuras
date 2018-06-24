//
// Created by Tsuki on 23/6/2018.
//

#include <iostream>

using namespace std;

struct FraccionSt;
typedef FraccionSt *Fraccion;

Fraccion fraccion(int numerador, int denominador);

Fraccion sumar(Fraccion f1, Fraccion f2);

Fraccion restar(Fraccion f1, Fraccion f2);

Fraccion multiplicar(Fraccion f1, Fraccion f2);

Fraccion dividir(Fraccion f1, Fraccion f2);

void invertir(Fraccion &f1);

void simplificar(Fraccion &f1);

void destruir(Fraccion &f1);

void printFraccion(Fraccion f);

