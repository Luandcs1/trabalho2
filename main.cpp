#include <iostream>
#include "include/lista.h"

using namespace std;

int main() {
    Lista lista;
    int opcao, pos;
    string nome;

    do {
        cout << "\n--- MENU ---\n";
        cout << "1. Inserir início\n";
        cout << "2. Inserir fim\n";
        cout << "3. Inserir posição\n";
        cout << "4. Remover início\n";
        cout << "5. Remover fim\n";
        cout << "6. Buscar\n";
        cout << "7. Listar\n";
        cout << "8. Inverso\n";
        cout << "9. Contar\n";
        cout << "0. Sair\n";
        cin >> opcao;
        cin.ignore();

        switch (opcao) {
            case 1:
                cout << "Nome: ";
                getline(cin, nome);
                lista.inserirInicio(nome);
                break;

            case 2:
                cout << "Nome: ";
                getline(cin, nome);
                lista.inserirFim(nome);
                break;

            case 3:
                cout << "Nome: ";
                getline(cin, nome);
                cout << "Posição: ";
                cin >> pos;
                lista.inserirPosicao(nome, pos);
                break;

            case 4:
                lista.removerInicio();
                break;

            case 5:
                lista.removerFim();
                break;

            case 6:
                cout << "Buscar: ";
                getline(cin, nome);
                lista.buscar(nome);
                break;

            case 7:
                lista.listar();
                break;

            case 8:
                lista.mostrarInverso();
                break;

            case 9:
                cout << "Total: " << lista.contar() << endl;
                break;
        }

    } while (opcao != 0);

    return 0;
}