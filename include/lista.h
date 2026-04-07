#ifndef LISTA_H
#define LISTA_H

#include <string>
using namespace std;

struct No {
    string nome;
    No* prox;
};

class Lista {
private:
    No* inicio;

    void listarInverso(No* no);

public:
    Lista();

    void inserirInicio(string nome);
    void inserirFim(string nome);
    void inserirPosicao(string nome, int pos);

    void removerInicio();
    void removerFim();

    void buscar(string nome);

    void listar();
    void mostrarInverso();

    int contar();
};

#endif