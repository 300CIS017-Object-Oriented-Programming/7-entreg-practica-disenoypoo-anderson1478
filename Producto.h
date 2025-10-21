//
// Created by anderson on 16/

#ifndef TIENDA_PRODUCTO_H
#define TIENDA_PRODUCTO_H

#include <iostream>
using std::cout;
using std::cin;
using std::string;

class Producto
{
private:
    string codigo;
    string nombre;
    float precio;
    int cantidad;

public:
    Producto(); // Constructor por defecto
    Producto(string &codigo, string &nombre, float precio, int cantidad);

    void mostrarDatos();

    // Getters y Setters
    const string &getCodigo() const;
    void setCodigo(const string &codigo);

    const string &getNombre() const;
    void setNombre(const string &nombre);

    float getPrecio() const;
    void setPrecio(float precio);

    int getCantidad() const;
    void setCantidad(int cantidad);
};

#endif