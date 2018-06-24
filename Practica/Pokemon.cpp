//
// Created by Tsuki on 23/6/2018.
//

#include "Pokemon.h"

struct PokemonSt {
    std::string nombre;
    int vida;
};

Pokemon crearPokemon(std::string nombre, int vida) {
    const Pokemon p = new PokemonSt;
    p->vida = vida;
    p->nombre = nombre;
    return p;
}

string getNombre(Pokemon p) {
    return p->nombre;
}

int getVida(Pokemon p) {
    return p->vida;
}

void cambiarNombre(Pokemon &p, string nombre) {
    p->nombre = nombre;
}

bool estaVivo(Pokemon p) {
    return p->vida > 0;
}

void restarVidas(Pokemon &p, int n) {
    p->vida -= n;
}

void restarVida(Pokemon &p) {
    restarVidas(p, 1);
}

void lucharN(int n, Pokemon &p, Pokemon &r) {
    restarVidas(p, n);
    restarVidas(r, n);
}

void destruir(Pokemon &p) {
    delete p;
    p = nullptr;
}