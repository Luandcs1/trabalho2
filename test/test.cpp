#include <iostream>
#include "../include/lista.h"

using namespace std;

int main() {
    Lista lista;

    lista.inserirFim("Centro");
    lista.inserirFim("Bairro A");
    lista.inserirInicio("Terminal");

    lista.listar();

    cout << "Total: " << lista.contar() << endl;

    lista.buscar("Centro");

    lista.mostrarInverso();

    return 0;
}