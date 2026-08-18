#include <iostream>
#include <string>
#include "List.h"

using namespace std;

void probarEnteros() {
    cout << " PRUEBA CON LISTA DE ENTEROS (int)" << endl;

    List<int> lista;

    cout << "\n insert " << endl;
    lista.insert(10);
    lista.insert(20);
    lista.insert(30);
    lista.insert(40);
    lista.print();

    cout << "\n getSize " << endl;
    cout << "Tamano actual: " << lista.getSize() << endl;

    cout << "\n getData " << endl;
    cout << "Elemento en posicion 2: " << lista.getData(2) << endl;

    cout << "\n getMax " << endl;
    cout << "Valor maximo: " << lista.getMax() << endl;

    cout << "\n insertAt (posicion valida) " << endl;
    lista.insertAt(2, 99);
    lista.print();

    cout << "\n insertAt (posicion invalida) " << endl;
    lista.insertAt(100, 5);

    cout << "\n removeAt (posicion valida) " << endl;
    lista.removeAt(1);
    lista.print();

    cout << "\n removeAt (posicion invalida) " << endl;
    lista.removeAt(50);

    cout << "\n removeLast " << endl;
    lista.removeLast();
    lista.print();

    cout << "\n Vaciar la lista con removeLast " << endl;
    while (lista.getSize() > 0) {
        lista.removeLast();
    }

    cout << "\n removeLast en lista vacia " << endl;
    lista.removeLast();

    cout << "\n removeAt en lista vacia " << endl;
    lista.removeAt(0);
}

void probarStrings() {
    cout << " PRUEBA CON LISTA DE STRINGS" << endl;

    List<string> lista;

    cout << "\n insert " << endl;
    lista.insert("perro");
    lista.insert("gato");
    lista.insert("elefante");
    lista.insert("ardilla");
    lista.print();

    cout << "\n getMax (orden alfabetico) " << endl;
    cout << "Valor maximo: " << lista.getMax() << endl;

    cout << "\n insertAt " << endl;
    lista.insertAt(0, "aguila");
    lista.print();

    cout << "\n removeAt " << endl;
    lista.removeAt(2);
    lista.print();
}

void probarDoubles() {
    cout << " PRUEBA CON LISTA DE DOUBLES" << endl;

    List<double> lista;

    lista.insert(3.5);
    lista.insert(1.2);
    lista.insert(9.8);
    lista.print();

    cout << "\n getMax " << endl;
    cout << "Valor maximo: " << lista.getMax() << endl;

    cout << "\n removeLast " << endl;
    lista.removeLast();
    lista.print();
}

int main() {
    probarEnteros();
    probarStrings();
    probarDoubles();
    return 0;
}