#include "Venta.h"

Venta::Venta() : cliente(nullptr), producto(nullptr), cantidadComprada(0) {}

Venta::Venta(Cliente *cliente, Producto *producto, int cantidadComprada)
{
    this->cliente = cliente;
    this->producto = producto;
    this->cantidadComprada = cantidadComprada;
}

void Venta::mostrarDatos()
{
    cout << "Venta - Cliente: " << cliente->getNombre()
         << " | Producto: " << producto->getNombre()
         << " | Cantidad: " << cantidadComprada
         << " | Total: $" << producto->getPrecio() * cantidadComprada << "\n";
}