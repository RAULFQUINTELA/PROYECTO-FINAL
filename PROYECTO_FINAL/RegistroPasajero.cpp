#include "RegistroPasajero.h"

Cliente RegistroPasajero::registrarPasajero()
{
    string nombre, apellido, telefono, carnetIdentidad;

    cout << "Registro de Pasajero" << endl;
    cout << "Nombre: ";
    cin >> nombre;
    cout << "Apellido: ";
    cin >> apellido;
    cout << "Teléfono: ";
    cin >> telefono;
    cout << "Carnet de Identidad: ";
    cin >> carnetIdentidad;

    // Crear y devolver un nuevo Cliente
    return Cliente(nombre + apellido, "password", "10", "0");
}
