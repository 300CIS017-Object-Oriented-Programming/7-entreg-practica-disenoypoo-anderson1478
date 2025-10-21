#include "Tienda.h"

Tienda::Tienda() {}

void Tienda::registrarProducto(Producto *producto)
{
    productos.push_back(producto);
}

void Tienda::registrarCliente(Cliente *cliente)
{
    clientes.push_back(cliente);
}

void Tienda::registrarVenta(Venta *venta)
{
    ventas.push_back(venta);
}

void Tienda::mostrarProductos()
{
    cout << "\n--- Productos registrados ---\n";
    for (auto p : productos)
    {
        p->mostrarDatos();
    }
}

void Tienda::mostrarClientes()
{
    cout << "\n--- Clientes registrados ---\n";
    for (auto c : clientes)
    {
        c->mostrarDatos();
    }
}

void Tienda::mostrarVentas()
{
    cout << "\n--- Ventas registradas ---\n";
    for (auto v : ventas)
    {
        v->mostrarDatos();
    }
}

float Tienda::calcularValorInventario()
{
    float total = 0;
    for (auto p : productos)
    {
        total += p->getPrecio() * p->getCantidad();
    }
    return total;
}