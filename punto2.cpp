#include <iostream>
#include <fstream>
#include <string>

using namespace std;

struct Cliente {
    string nombre;
    int cantidad;
    double precio;
};

void capturar_datos(Cliente* cliente);
void imprimir_factura(Cliente* cliente, ofstream& archivo);

int main() {
    Cliente cliente;
    Cliente* puntero = &cliente;
    capturar_datos(puntero);
    ofstream archivo("factura.txt");
    imprimir_factura(puntero, archivo);
    archivo.close();
    return 0;
}

void capturar_datos(Cliente* cliente) {
    cout << "Ingrese el nombre del cliente: ";
    getline(cin, cliente->nombre);
    cout << "Ingrese la cantidad de productos comprados: ";
    cin >> cliente->cantidad;
    cout << "Ingrese el precio unitario de los productos: ";
    cin >> cliente->precio;
}

void imprimir_factura(Cliente* cliente, ofstream& archivo) {
    archivo << "Nombre del cliente: " << cliente->nombre << endl;
    archivo << "Cantidad de productos comprados: " << cliente->cantidad << endl;
    archivo << "Precio unitario de los productos: " << cliente->precio << endl;
    archivo << "Total a pagar: " << (cliente->cantidad * cliente->precio) << endl;
}