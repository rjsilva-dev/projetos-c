#include<stdio.h>
#include<stdlib.h>

struct Cliente {
    int id;
    char nome[50];
    char endereco[100];
    long telefone;
    unsigned long cpf;
};

struct Produto {
    int id;
    char nome[100];
    float preco;
    int quantidade;
};

struct OrdemServico {
    char nomeOs[100];
    unsigned long cpfOs;
    long telefoneOs;
    char enderecoOs[100];
    char modeloOs[100];
    char dftOs[100];
    float precoOs;
};

// Variáveis globais
struct Cliente clientes[2048];
struct Produto produtos[2048];
struct OrdemServico clientesOs[100];
int qtdClientes = 1;
int qtdClientesOs = 0;
int qtdProdutos = 1;

// Protótipos de funções
int menuPrincipal();
int menuCadastro();
int menuOs();
int menuVender();

int main() {
    system("color 70");
    printf(".:: SISTEMA PDV - INFOTECH STORE beta 1.0 ::.\n");

    menuPrincipal();
    return 0;
}

int menuPrincipal() {
    int opcao;
    printf("\nMENU PRINCIPAL:");
    printf("\n[1] - CADASTROS");
    printf("\n[2] - ORDEM DE SERVICO");
    printf("\n[3] - VENDER");
    printf("\n[4] - SAIR");
    printf("\nDIGITE A OPCAO: ");
    scanf("%d", &opcao);
    system("cls");

    switch(opcao) {
        case 1:
            menuCadastro();
            break;
        case 2:
            menuOs();
            break;
        case 3:
            menuVender();
            break;
        case 4:
            return 0;
        default:
            printf("OPCAO INVALIDA");
    }

    return opcao;
}

int menuCadastro() {
    int opcao;
    while (1) {
        system("cls");
        printf("\n.:: MENU DE CADASTRO ::.");
        printf("\n[1] - CLIENTES");
        printf("\n[2] - PRODUTOS");
        printf("\n[3] - LISTAR CLIENTES");
        printf("\n[4] - LISTAR PRODUTOS");
        printf("\n[5] - VOLTAR");
        printf("\nDIGITE A OPCAO: ");
        scanf("%d", &opcao);

        fflush(stdin);
        system("cls");

        switch (opcao) {
            case 1:
                printf("\n>> INFORMACOES DO CLIENTE <<\n");
                printf("\nDIGITE O NOME: ");
                scanf(" %[^\n]", clientes[qtdClientes].nome); // Leitura de string com espaços
                printf("\nDIGITE O CPF: ");
                scanf("%lu", &clientes[qtdClientes].cpf);
                printf("\nDIGITE O TELEFONE: ");
                scanf("%ld", &clientes[qtdClientes].telefone);
                printf("\nDIGITE O ENDERECO: ");
                scanf(" %[^\n]", clientes[qtdClientes].endereco); // Leitura de string com espaços
                clientes[qtdClientes].id = qtdClientes;
                qtdClientes++;
                break;

            case 2:
                printf("\n>> INFORMACOES DOS PRODUTOS: <<\n");
                printf("\nDIGITE NOME PRODUTO: ");
                scanf(" %[^\n]", produtos[qtdProdutos].nome); // Leitura de string com espaços
                printf("\nDIGITE QUANTIDADE: ");
                scanf("%d", &produtos[qtdProdutos].quantidade);
                printf("\nDIGITE O VALOR: ");
                scanf("%f", &produtos[qtdProdutos].preco);
                qtdProdutos++;
                break;

            case 3:
                printf("\n CLIENTES CADASTRADOS\n");
                for(int x = 1; x < qtdClientes; x++) {
                    printf("\nID: %d", clientes[x].id);
                    printf("\nNome: %s", clientes[x].nome);
                    printf("\nCPF: %lu", clientes[x].cpf);
                    printf("\nTelefone: %ld", clientes[x].telefone);
                    printf("\nEndereco: %s\n", clientes[x].endereco);
                }
                system("pause");
                break;

            case 4:
                printf("\n PRODUTOS CADASTRADOS\n");
                for(int x = 1; x < qtdProdutos; x++) {
                    printf("\nID: %d", produtos[x].id);
                    printf("\nNome: %s", produtos[x].nome);
                    printf("\nQtd: %d", produtos[x].quantidade);
                }
                system("pause");
                break;

            case 5:
                return 0;

            default:
                printf("\nOPCAO INVALIDA");
                break;
        }
    }
    return opcao;
}

int menuOs() {
    int opcao;
    printf("\n.:: MENU DE OS ::.");
    printf("\n[1] - ABRIR OS");
    printf("\n[2] - CONSULTAR OS");
    printf("\n[3] - VOLTAR");
    printf("\nDIGITE A OPCAO: ");
    scanf("%d", &opcao);
    system("cls");

    switch (opcao) {
        case 1:
            printf("\n>> INFORMACOES DA OS: <<\n");
            printf("\nDIGITE O NOME: ");
            scanf(" %[^\n]", clientesOs[qtdClientesOs].nomeOs); // Leitura de string com espaços
            printf("\nDIGITE O CPF: ");
            scanf("%lu", &clientesOs[qtdClientesOs].cpfOs);
            printf("\nDIGITE O TELEFONE: ");
            scanf("%ld", &clientesOs[qtdClientesOs].telefoneOs);
            printf("\nDIGITE O ENDERECO: ");
            scanf(" %[^\n]", clientesOs[qtdClientesOs].enderecoOs); // Leitura de string com espaços
            printf("\nMARCA E MODELO APARELHO: ");
            scanf(" %[^\n]", clientesOs[qtdClientesOs].modeloOs); // Leitura de string com espaços
            printf("\nDEFEITO RELATADO: ");
            scanf(" %[^\n]", clientesOs[qtdClientesOs].dftOs); // Leitura de string com espaços
            printf("\nVALOR REPARO: ");
            scanf("%f", &clientesOs[qtdClientesOs].precoOs);
            qtdClientesOs++;
            break;

        case 2:
            break;
            
        case 3:
            menuPrincipal();
            break;

        default:
            printf("\nOPCAO INVALIDA");
            break;
    }

    return 0;
}

int menuVender() {
    int opcao;
    printf("\n.:: MENU DE VENDAS ::.");
    printf("\n[1] - REGISTRAR VENDA");
    printf("\n[2] - CONSULTAR ESTOQUE");
    printf("\n[3] - VOLTAR");
    printf("\nDIGITE A OPCAO: ");
    scanf("%d", &opcao);
    system("cls");

    switch(opcao) {
        case 1:
            // Implementar registro de venda
            break;
        case 2:
            // Implementar consulta de estoque
            break;
        case 3:
            menuPrincipal();
            break;
        default:
            printf("\nOPCAO INVALIDA");
            break;
    }

    return opcao;
}

