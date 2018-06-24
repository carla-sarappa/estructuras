#include "Persona.h"

struct PersonaSt {
    std::string nombre;
    int edad;
};

Persona crearPersona(std::string nombre, int edad) {
    Persona p = new PersonaSt;
    p->edad = edad;
    p->nombre = nombre;
    return p;
}

std::string getNombre(Persona p) {
    return p->nombre;
}

int getEdad(Persona p) {
    return p->edad;
}

void crecer(Persona &p) {
    p->edad++;
}

void imprimirPersona(Persona p) {
    std::cout << "Persona " << p << " { " << std::endl;
    std::cout << "  edad: " << p->edad << std::endl;
    std::cout << "  nombre: " << p->nombre << std::endl;
    std::cout << "}" << std::endl;
}
