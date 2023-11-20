#include <iostream>
#include <string>
#include "Cliente.h"
#include "Chofer.h"
#include "RegistroPasajero.h"
#include "RegistroChofer.h"

using namespace std;

int main()
{
    int opcion;
    cout << "Bienvenido a la aplicación. Por favor, elige tu opción:" << endl;
    cout << "1. Iniciar Sesión" << endl;
    cout << "2. Registrarse como Pasajero" << endl;
    cout << "3. Registrarse como Chofer" << endl;
    cout << "Ingrese el número correspondiente a su elección: ";
    cin >> opcion;

    if (opcion == 1)
    {
        // Lógica para iniciar sesión
        // Aquí deberías implementar la lógica para el inicio de sesión.
    }
    else if (opcion == 2)
    {
        // Registro de Pasajero
        Cliente nuevoPasajero = RegistroPasajero::registrarPasajero();
        cout << "Registro exitoso como pasajero. Ahora puedes iniciar sesión." << endl;
        // Puedes utilizar nuevoPasajero para iniciar sesión o realizar otras acciones.
    }
    else if (opcion == 3)
    {
        // Registro de Chofer
        Chofer nuevoChofer = RegistroChofer::registrarChofer();
        cout << "Registro exitoso como chofer. Ahora puedes iniciar sesión." << endl;
        // Puedes utilizar nuevoChofer para iniciar sesión o realizar otras acciones.
    }
    else
    {
        cout << "Opción no válida. Por favor, reinicia la aplicación." << endl;
    }

    return 0;
}