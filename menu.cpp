
#include <iostream>
using namespace std;

void mostrarMenu() {
    int opcion;
    do {
        cout << "\n--- Menu Principal ---\n";
        cout << "1. Crear amistad\n";
        cout << "2. Agregar contenido\n";
        cout << "3. Agregar interes a un usuario\n";
        cout << "4. Ver recomendaciones\n";
        cout << "5. Agregar usuario\n";
        cout << "6. Salir\n";
        cout << "Seleccione una opcion: ";
        cin >> opcion;

        switch (opcion) {
            case 1:
                cout << "Crear amistad.\n";
            break;
            case 2:
                cout << "Agregar contenido.\n";
            break;
            case 3:
                cout << "Agregar interes a un usuario.\n";
            break;
            case 4:
                cout << "Ver recomendaciones.\n";
            break;
            case 5:
                cout << "Agregar usuario.\n";
            break;
            case 6:
                cout << "Saliendo del programa...\n";
            break;
            default:
                cout << "Opcion no valida... \n Intente de nuevo.\n";
        }
    } while (opcion != 6);
}