#include <stdio.h>
#include <stdlib.h>
// ESTRUTURAS PARA FACILTAR O CODIGO
struct Cliente {
    int id;
    char nome[50];
    char endereco[100];
    unsigned long telefone;
    char cpf[12];  // CPF DO SATANAIS QUASE INFARTO
};

struct Produto {
    int id;
    char nome[100];
    float preco;
    int quantidade;
};

struct OrdemServico {
    int id;
    char nomeOs[100];
    char cpfOs[12];  // CPF AGORA TU PEGA MALDITO?
    unsigned long telefoneOs;
    char enderecoOs[100];
    char modeloOs[100];
    char dftOs[100];
    float precoOs;
};

struct Venda {
    int idProduto;
    int quantidade;
    float valorTotal;
};


// VARIAVEIS GLOBAIS
struct Cliente clientes[2048];
struct Produto produtos[2048];
struct OrdemServico clientesOs[100];
struct Venda vendas[2048];
int qtdClientes = 1;
int qtdClientesOs = 1; 
int qtdProdutos = 1;
int qtdVendas = 0;

// MENU DE FUNÇOES PRINCIPAL
int menuPrincipal();
int menuCadastro();
int menuOs();
int menuVender();

int main() {
    system("color 70");
    printf("***************************************************\n");
    printf("*                                                 *");
    printf("\n*\tSISTEMA PDV - INFOTECH STORE beta 1.0     *");
    printf("\n*\t PROJETO INTEGRADOR TDS MODULO 1          *");
    printf("\n*\t  ROBSON JOSE / MARCOS ANTONIO            *\n");
    printf("*                                                 *");
    printf("\n***************************************************\n\n");

    menuPrincipal();
    return 0;
} 
// MENU PRINCIPAL CODIGO
int menuPrincipal() {
    int opcao;
    while (1) {
    	printf("===========================");
        printf("\n|     MENU PRINCIPAL      |");
        printf("\n===========================\n");
        printf("\n[1] - CADASTROS");
        printf("\n[2] - ORDEM DE SERVICO");
        printf("\n[3] - VENDER");
        printf("\n[4] - SAIR\n");
        printf("\nDIGITE A OPCAO: ");
        scanf("%d", &opcao);
        fflush(stdin);
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
                exit(0);  
            default:
                printf("OPCAO INVALIDA ESCOLHE A CERTA VERME MALDITO\n");
                system("pause");
                system("cls");
        }
    }
    return opcao;
}
// MENU DE CADASTRO
int menuCadastro() {
    int opcao;
    while (1) {
        system("cls");
		printf("===========================");
        printf("\n|     MENU DE CADASTROS   |");
        printf("\n===========================\n");
        printf("\n[1] - CLIENTES");
        printf("\n[2] - PRODUTOS");
        printf("\n[3] - LISTAR CLIENTES");
        printf("\n[4] - LISTAR PRODUTOS");
        printf("\n[5] - VOLTAR\n");
        printf("\nDIGITE A OPCAO: ");
        scanf("%d", &opcao);
        fflush(stdin);
        system("cls");
//OPÇOES CADASTRAMENTOS DE CLIENTES E TUDO MAIS
        switch (opcao) {
            case 1:
            	printf("==================================");
        		printf("\n|    INFORMACOES DOS CLIENTES\t |");
        		printf("\n==================================\n\n");
                printf("DIGITE O NOME: ");
                scanf(" %[^\n]", clientes[qtdClientes].nome); // Leitura de string com espaços USAR ISSO "%[^\n"
                printf("DIGITE O CPF: ");
                scanf("%11s", clientes[qtdClientes].cpf);  // Leitura como string USAR ISSO %11S CPF NAO BUGO
                printf("DIGITE O TELEFONE: ");
                scanf("%lu", &clientes[qtdClientes].telefone);
                printf("DIGITE O ENDERECO: ");
                scanf(" %[^\n]", clientes[qtdClientes].endereco); // Ler string com espaços USAR ISSO "%[^\n"
                clientes[qtdClientes].id = qtdClientes;
                qtdClientes++;
                break;

            case 2:
                printf("==================================");
        		printf("\n|    INFORMACOES DOS PRODUTOS\t |");
        		printf("\n==================================\n\n");
                printf("DIGITE NOME PRODUTO: ");
                scanf(" %[^\n]", produtos[qtdProdutos].nome); // Leitura de string com espaços
                printf("DIGITE QUANTIDADE: ");
                scanf("%d", &produtos[qtdProdutos].quantidade);
                printf("DIGITE O VALOR R$ ");
                scanf("%f", &produtos[qtdProdutos].preco);
                produtos[qtdProdutos].id = qtdProdutos;
                qtdProdutos++;
                break;

            case 3:
            	printf("==================================");
        		printf("\n|    CLIENTES CADASTRADOS\t |");
        		printf("\n==================================\n\n");
                for(int x = 1; x < qtdClientes; x++) {
                    printf("\nID: %d", clientes[x].id);
                    printf("\nNome: %s", clientes[x].nome);
                    printf("\nCPF: %s", clientes[x].cpf);  // Exibição como string
                    printf("\nTelefone: %lu", clientes[x].telefone);
                    printf("\nEndereco: %s\n", clientes[x].endereco);
                }
                system("pause");
                break;

            case 4:
                printf("==================================");
        		printf("\n|    PRODUTOS CADASTRADOS\t |");
        		printf("\n==================================\n\n");
                for(int x = 1; x < qtdProdutos; x++) {
                    printf("\nID: %d", produtos[x].id);
                    printf("\nNome: %s", produtos[x].nome);
                    printf("\nQtd: %d", produtos[x].quantidade);
                    printf("\nPreco R$ %.2f\n", produtos[x].preco);
                }
                system("pause");
                break;

            case 5:
                return 0;

            default:
                printf("\nOPCAO INVALIDA ESCOLHE A CERTA VERME MALDITO\n");
                system("pause");
                system("cls");
        }
    }
    return opcao;
}
//MENU ORDEM DE SERVICO
int menuOs() {
    int opcao;
    while (1) {
    	system("cls");
    	printf("============================");
        printf("\n|  MENU ORDEM DE SERVICO   |");
        printf("\n============================\n");
        printf("\n[1] - ABRIR OS");
        printf("\n[2] - CONSULTAR OS");
        printf("\n[3] - VOLTAR\n");
        printf("\nESCOLHA UMA OPCAO: ");
        scanf("%d", &opcao);
        fflush(stdin);
        system("cls");

        switch (opcao) {
            case 1:
            	printf("==================================");
                printf("\n|  CADASTRO DA ORDEM DE SERVICO  |");
                printf("\n==================================\n");
                printf("DIGITE O NOME: ");
                scanf(" %[^\n]", clientesOs[qtdClientesOs].nomeOs); // Leitura de string com espaços
                printf("DIGITE O CPF: ");
                scanf("%11s", clientesOs[qtdClientesOs].cpfOs);  // Mudança para 11s assim nao buga
                printf("DIGITE O TELEFONE: ");
                scanf("%lu", &clientesOs[qtdClientesOs].telefoneOs);
                printf("DIGITE O ENDERECO: ");
                scanf(" %[^\n]", clientesOs[qtdClientesOs].enderecoOs); // Leitura de string com espaços
                printf("APARELHO/MODELO: ");
                scanf(" %[^\n]", clientesOs[qtdClientesOs].modeloOs); // Leitura de string com espaços
                printf("DEFEITO RELATADO: ");
                scanf(" %[^\n]", clientesOs[qtdClientesOs].dftOs); // Leitura de string com espaços
                printf("VALOR CONSERTO R$ ");
                scanf("%f", &clientesOs[qtdClientesOs].precoOs);
                clientesOs[qtdClientesOs].id = qtdClientesOs;  // ID AUTOMATICO para ordem de serviço
                qtdClientesOs++;
                break;

            case 2:
                	printf("====================================");
                printf("\n|  ORDENS DE SERVICO CADASTRADAS  |");
                printf("\n====================================\n");
                for(int x = 1; x < qtdClientesOs; x++) {
                    printf("\nID: %d", clientesOs[x].id);
                    printf("\nNome: %s", clientesOs[x].nomeOs);
                    printf("\nCPF: %s", clientesOs[x].cpfOs);  // Mudança para %s
                    printf("\nTelefone: %lu", clientesOs[x].telefoneOs);
                    printf("\nEndereco: %s", clientesOs[x].enderecoOs);
                    printf("\nAparelho/Marca: %s", clientesOs[x].modeloOs);
                    printf("\nDefeito: %s", clientesOs[x].dftOs);
                    printf("\nPreco: %.2f\n", clientesOs[x].precoOs);
                }
                system("pause");
                system("cls");
                break;

            case 3:
                return 0;

            default:
                printf("\nOPCAO INVALIDA ESCOLHE A CERTA VERME MALDITO\n");
                system("pause");
                system("cls");
        }
    }
    return opcao;
}
//MENU VENDER UMA DAS MAIS COMPLICADAS QUE ACHEI
int menuVender() {
    int opcao;
    while (1) {
    	system("cls");
    	printf("============================");
        printf("\n|      MENU DE VENDAS      |");
        printf("\n============================\n");
        printf("\n[1] - REGISTRAR VENDA");
        printf("\n[2] - CONSULTAR ESTOQUE");
		printf("\n[3] - VOLTAR\n");
        printf("\n ESCOLHA UMA OPCAO: ");
        scanf("%d", &opcao);
        fflush(stdin);
        system("cls"); 

        switch(opcao) {
            case 1:
                // Registrar venda
                printf("============================");
        		printf("\n|      REGISTRAR VENDA     |");
       			printf("\n============================\n");
                int idProduto, quantidade;
                printf("DIGITE O ID DO PRODUTO: ");
                scanf("%d", &idProduto);
                printf("DIGITE A QUANTIDADE: ");
                scanf("%d", &quantidade);

                // Verificar se estoque suficiente
                if (idProduto < 1 || idProduto >= qtdProdutos) {
                    printf("ID DO PRODUTO INVALIDO\n");
                } else if (produtos[idProduto].quantidade < quantidade) {
                    printf("QUANTIDADE INSUFICIENTE EM ESTOQUE\n");
                } else {
                    // Registrar a venda
                    vendas[qtdVendas].idProduto = idProduto;
                    vendas[qtdVendas].quantidade = quantidade;
                    vendas[qtdVendas].valorTotal = quantidade * produtos[idProduto].preco;
                    qtdVendas++;

                    // Atualizar o estoque do produto
                    produtos[idProduto].quantidade -= quantidade;

                    printf("VENDA REGISTRADA COM SUCESSO\n");
                }
                system("pause");
                system("cls");
            case 2:
                 // Consultar estoque
                printf("=================================");
        		printf("\n|\tESTOQUE DE PRODUTOS\t|");
       			printf("\n=================================\n");
                for(int x = 1; x < qtdProdutos; x++) {
                    printf("\nID: %d", produtos[x].id);
                    printf("\nNome: %s", produtos[x].nome);
                    printf("\nQuantidade: %d", produtos[x].quantidade);
                    printf("\nPreco R$ %.2f\n", produtos[x].preco);
                }
                system("pause");
                system("cls");
                break;
 
            case 3:
                return 0;

            default:
                printf("\nOPCAO INVALIDA ESCOLHE A CERTA VERME MALDITO\n");
                system("pause");
                system("cls");
        }
    }
    return opcao;
}
