#ifndef LIST_H
#define LIST_H

#include <vector>
#include <iostream>
#include <stdexcept>

using namespace std;

template <class T>
class List {
private:
    vector<T> data;
    int size;

public:
    List() {
        size = 0;
    }

    // Inserta un valor al final de la lista
    void insert(T value) {
        data.push_back(value);
        size++;
    }

    // Elimina y despliega el ultimo elemento de la lista
    void removeLast() {
        if (size == 0) {
            cout << "NO HAY ELEMENTOS" << endl;
            return;
        }
        cout << data[size - 1] << endl;
        data.pop_back();
        size--;
    }

    // Regresa el contenido de la lista en la posicion indicada
    T getData(int pos) {
        // Precondicion: 0 <= pos < size
        return data[pos];
    }

    // Regresa el tamano actual de la lista
    int getSize() {
        return size;
    }

    // Regresa el valor mayor almacenado en la lista
    T getMax() {
        T maxVal = data[0];
        for (int i = 1; i < size; i++) {
            if (data[i] > maxVal) {
                maxVal = data[i];
            }
        }
        return maxVal;
    }

    // Imprime la lista, un elemento por linea, formato: [pos] - dato
    void print() {
        for (int i = 0; i < size; i++) {
            cout << "[" << i << "] - " << data[i] << endl;
        }
    }

    // Inserta un valor en una posicion especifica, recorriendo los
    // elementos posteriores una posicion a la derecha
    void insertAt(int pos, T value) {
        if (pos < 0 || pos > size) {
            cout << "POSICIÓN INVÁLIDA" << endl;
            return;
        }
        data.push_back(value); // crece el vector en una posicion
        for (int i = size; i > pos; i--) {
            data[i] = data[i - 1];
        }
        data[pos] = value;
        size++;
    }

    // Elimina el elemento en una posicion especifica, recorriendo los
    // elementos posteriores una posicion a la izquierda, y despliega
    // el valor eliminado
    void removeAt(int pos) {
        if (size == 0) {
            cout << "NO HAY ELEMENTOS" << endl;
            return;
        }
        if (pos < 0 || pos >= size) {
            cout << "POSICIÓN INVÁLIDA" << endl;
            return;
        }
        cout << data[pos] << endl;
        for (int i = pos; i < size - 1; i++) {
            data[i] = data[i + 1];
        }
        data.pop_back();
        size--;
    }
};

#endif