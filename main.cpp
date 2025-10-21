#include <iostream>
#include "Tienda.h"
using std::cout;
using std::cin;
using std::string;

int main()
{
    Tienda tienda;

    int opcion = 0;

    while (opcion != 6)
    {
        cout << "\n===== MENU TIENDA ECOLOGICA =====\n";
        cout << "1. Registrar producto\n";
        cout << "2. Registrar cliente\n";
        cout << "3. Registrar venta\n";
        cout << "4. Mostrar inventario\n";
        cout << "5. Mostrar ventas\n";
        cout << "6. Salir\n";
        cout << "Seleccione una opción: ";
        cin >> opcion;

        if (opcion == 1)
        {
            string codigo, nombre;
            float precio;
            int cantidad;
            cout << "Código: ";
            cin >> codigo;
            cout << "Nombre: ";
            cin >> nombre;
            cout << "Precio: ";
            cin >> precio;
            cout << "Cantidad: ";
            cin >> cantidad;

            Producto *p = new Producto(codigo, nombre, precio, cantidad);
            tienda.registrarProducto(p);
        }
        else if (opcion == 2)
        {
            string nombre, id;
            cout << "Nombre del cliente: ";
            cin >> nombre;
            cout << "ID: ";
            cin >> id;

            Cliente *c = new Cliente(nombre, id);
            tienda.registrarCliente(c);
        }
        else if (opcion == 3)
        {
            string idCliente, codigoProd;
            int cantidad;
            cout << "ID del cliente: ";
            cin >> idCliente;
            cout << "Código del producto: ";
            cin >> codigoProd;
            cout << "Cantidad comprada: ";
            cin >> cantidad;

            // Nota: aquí podrías implementar la búsqueda en listas para relacionar cliente y producto
            cout << "Venta registrada (modo demostración)\n";
        }
        else if (opcion == 4)
        {
            tienda.mostrarProductos();
            cout << "Valor total del inventario: $" << tienda.calcularValorInventario() << "\n";
        }
        else if (opcion == 5)
        {
            tienda.mostrarVentas();
        }
        else if (opcion == 6)
        {
            cout << "Saliendo...\n";
        }
        else
        {
            cout << "Opción no válida.\n";
        }
    }

    return 0;
}