//
// Created by Tsuki on 23/6/2018.
//
#include <iostream>

using namespace std;


struct PokemonSt;
typedef PokemonSt *Pokemon;

Pokemon crearPokemon(string nombre, int vida);

string getNombre(Pokemon p);

int getVida(Pokemon p);

void cambiarNombre(Pokemon &p, string nombre);

bool estaVivo(Pokemon p);

void restarVida(Pokemon &p);

void lucharN(int n, Pokemon &p, Pokemon &r);

void destruir(Pokemon &p);

