#include <iostream>
#include "../include/lista.h"

using namespace std;

Lista::Lista() {
    inicio = nullptr;
}

void Lista::inserirInicio(string nome) {
    No* novo = new No{nome, inicio};
    inicio = novo;
}

void Lista::inserirFim(string nome) {
    No* novo = new No{nome, nullptr};

    if (!inicio) {
        inicio = novo;
        return;
    }

    No* temp = inicio;
    while (temp->prox)
        temp = temp->prox;

    temp->prox = novo;
}

void Lista::inserirPosicao(string nome, int pos) {
    if (pos == 0) {
        inserirInicio(nome);
        return;
    }

    No* temp = inicio;
    for (int i = 0; temp && i < pos - 1; i++)
        temp = temp->prox;

    if (!temp) {
        cout << "Posição inválida!\n";
        return;
    }

    No* novo = new No{nome, temp->prox};
    temp->prox = novo;
}

void Lista::removerInicio() {
    if (!inicio) return;

    No* temp = inicio;
    inicio = inicio->prox;
    delete temp;
}

void Lista::removerFim() {
    if (!inicio) return;

    if (!inicio->prox) {
        delete inicio;
        inicio = nullptr;
        return;
    }

    No* temp = inicio;
    while (temp->prox->prox)
        temp = temp->prox;

    delete temp->prox;
    temp->prox = nullptr;
}

void Lista::buscar(string nome) {
    No* temp = inicio;
    bool achou = false;

    while (temp) {
        if (temp->nome.find(nome) != string::npos) {
            cout << "Encontrado: " << temp->nome << endl;
            achou = true;
        }
        temp = temp->prox;
    }

    if (!achou)
        cout << "Não encontrado.\n";
}

void Lista::listar() {
    No* temp = inicio;
    while (temp) {
        cout << temp->nome << " -> ";
        temp = temp->prox;
    }
    cout << "NULL\n";
}

void Lista::listarInverso(No* no) {
    if (!no) return;
    listarInverso(no->prox);
    cout << no->nome << " -> ";
}

void Lista::mostrarInverso() {
    listarInverso(inicio);
    cout << "NULL\n";
}

int Lista::contar() {
    int c = 0;
    No* temp = inicio;
    while (temp) {
        c++;
        temp = temp->prox;
    }
    return c;
}