//
// Created by anderson on 16/10/25.
//

#ifndef TIENDA_VENTA_H
#define TIENDA_VENTA_H

#include <iostream>
#include "Cliente.h"
#include "Producto.h"
using std::cout;
using std::cin;
using std::string;

class Venta
{
private:
    Cliente *cliente;
    Producto *producto;
    int cantidadComprada;

public:
    Venta();
    Venta(Cliente *cliente, Producto *producto, int cantidadComprada);

    void mostrarDatos();
};

#endif // TIENDA_VENTA_H