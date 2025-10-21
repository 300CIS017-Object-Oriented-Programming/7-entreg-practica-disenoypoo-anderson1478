#include "Cliente.h"

Cliente::Cliente() : nombre(""), id("") {}

Cliente::Cliente(string &nombre, string &id)
{
    this->nombre = nombre;
    this->id = id;
}

void Cliente::mostrarDatos()
{
    cout << "Cliente: " << nombre << " | ID: " << id << "\n";
}

const string &Cliente::getNombre() const { return nombre; }
void Cliente::setNombre(const string &nombre) { this->nombre = nombre; }

const string &Cliente::getId() const { return id; }
void Cliente::setId(const string &id) { this->id = id; }
