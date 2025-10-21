//
// Created by anderson on 16/10/25.
//

#ifndef TIENDA_CLIENTE_H
#define TIENDA_CLIENTE_H

#include <iostream>
using std::cout;
using std::cin;
using std::string;

class Cliente
{
private:
    string nombre;
    string id;

public:
    Cliente();
    Cliente(string &nombre, string &id);

    void mostrarDatos();

    const string &getNombre() const;
    void setNombre(const string &nombre);

    const string &getId() const;
    void setId(const string &id);
};

#endif // TIENDA_CLIENTE_H