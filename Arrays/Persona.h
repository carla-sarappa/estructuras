#include <iostream>

struct PersonaSt;
typedef PersonaSt *Persona;

Persona crearPersona(std::string nombre, int edad);

std::string getNombre(Persona p);

int getEdad(Persona p);

void crecer(Persona &p);

void imprimirPersona(Persona p);
