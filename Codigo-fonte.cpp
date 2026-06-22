#include <iostream>
#include <string>

using namespace std;

const int TAM = 50;

void exibirMenu() {
    cout << "\n===== SISTEMA DE CADASTRO DE ESTUDANTES =====\n";
    cout << "1 - Cadastrar estudante\n";
    cout << "2 - Listar estudantes\n";
    cout << "3 - Buscar estudante\n";
    cout << "4 - Calcular media da turma\n";
    cout << "5 - Mostrar situacoes\n";
    cout << "6 - Sair\n";
    cout << "Opcao: ";
}

int main() {
    int opcao;

    do {
        exibirMenu();
        cin >> opcao;

        switch (opcao) {
            case 1:
                cout << "Cadastrar estudante\n";
                break;

            case 2:
                cout << "Listar estudantes\n";
                break;

            case 3:
                cout << "Buscar estudante\n";
                break;

            case 4:
                cout << "Calcular media da turma\n";
                break;

            case 5:
                cout << "Mostrar situacoes\n";
                break;

            case 6:
                cout << "Encerrando programa...\n";
                break;

            default:
                cout << "Opcao invalida!\n";
        }

    } while (opcao != 6);

    return 0;
}