#ifndef TIENDA_TIENDA_H
#define TIENDA_TIENDA_H

#include <iostream>
#include <vector>
#include "Producto.h"
#include "Cliente.h"
#include "Venta.h"

using std::cout;
using std::cin;
using std::string;
using std::vector;

class Tienda
{
private:
    vector<Producto *> productos;
    vector<Cliente *> clientes;
    vector<Venta *> ventas;

public:
    Tienda();

    void registrarProducto(Producto *producto);
    void registrarCliente(Cliente *cliente);
    void registrarVenta(Venta *venta);

    void mostrarProductos();
    void mostrarClientes();
    void mostrarVentas();

    float calcularValorInventario();
};

#endif // TIENDA_TIENDA_H