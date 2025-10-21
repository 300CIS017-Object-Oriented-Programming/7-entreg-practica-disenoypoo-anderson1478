//
// Created by anderson on 16/10/25.
//

#include "Producto.h"

Producto::Producto() : codigo(""), nombre(""), precio(0.0), cantidad(0) {}

Producto::Producto(string &codigo, string &nombre, float precio, int cantidad)
{
    this->codigo = codigo;
    this->nombre = nombre;
    this->precio = precio;
    this->cantidad = cantidad;
}

void Producto::mostrarDatos()
{
    cout << "Código: " << codigo
         << " | Nombre: " << nombre
         << " | Precio: $" << precio
         << " | Cantidad: " << cantidad << "\n";
}

const string &Producto::getCodigo() const { return codigo; }
void Producto::setCodigo(const string &codigo) { this->codigo = codigo; }

const string &Producto::getNombre() const { return nombre; }
void Producto::setNombre(const string &nombre) { this->nombre = nombre; }

float Producto::getPrecio() const { return precio; }
void Producto::setPrecio(float precio) { this->precio = precio; }

int Producto::getCantidad() const { return cantidad; }
void Producto::setCantidad(int cantidad) { this->cantidad = cantidad; }
