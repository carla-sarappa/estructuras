//
// Created by Tsuki on 23/6/2018.
//

#include "Fraccion.h"

struct FraccionSt {
    int numerador;
    int denominador;
};

Fraccion fraccion(int numerador, int denominador) {
    const Fraccion f = new FraccionSt;
    f->numerador = numerador;
    f->denominador = denominador;
    return f;
}

void printFraccion(Fraccion f) {
    cout << f->numerador << "/" << f->denominador << endl;
}

Fraccion sumar(Fraccion f1, Fraccion f2) {
    return fraccion(
            f1->numerador * f2->denominador + f2->numerador * f1->denominador,
            f2->denominador * f1->denominador
    );
}

Fraccion restar(Fraccion f1, Fraccion f2) {
    return fraccion(
            f1->numerador * f2->denominador - f2->numerador * f1->denominador,
            f2->denominador * f1->denominador
    );
}

Fraccion multiplicar(Fraccion f1, Fraccion f2) {
    return fraccion(
            f1->numerador * f2->numerador,
            f2->denominador * f1->denominador
    );
}

void invertir(Fraccion &f1) {
    int tmp = f1->denominador;
    f1->denominador = f1->numerador;
    f1->numerador = tmp;
}

Fraccion dividir(Fraccion f1, Fraccion f2) {
    Fraccion copia = fraccion(f2->numerador, f2->denominador);
    invertir(copia);
    Fraccion resultado = multiplicar(f1, copia);

    delete copia;
    return resultado;
}

int mcd(int a, int b) {
    if (a < b) {
        int tmp = a;
        a = b;
        b = tmp;
    }
    while (b != 0) {
        int r = a % b;
        a = b;
        b = r;
    }
    return a;
}

void simplificar(Fraccion &f1) {
    int divisor = mcd(f1->numerador, f1->denominador);
    f1->numerador = f1->numerador / divisor;
    f1->denominador = f1->denominador / divisor;
}

void destruir(Fraccion &f1) {
    delete f1;
    f1 = nullptr;
}