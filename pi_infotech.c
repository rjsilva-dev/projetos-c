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

int menuPrincipal();
int menuCadastro();
int menuOs();
int menuVender();

Cliente clientes[2048];
Produto produtos[2048];
int qtdClientes = 1;
int qtdProdutos = 1;

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
    printf("\n[2] - OS (VISITA TECNICA)");
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
    char nome[50], telefone[15], endereco[30], produto[30], quantidade[5], valor[10], cpf[11];
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
	            scanf("%s", &clientes[qtdClientes - 1].nome);
	
	            printf("\nDIGITE O CPF: ");
	            scanf("%lu", &clientes[qtdClientes - 1].cpf);
	
	            printf("\nDIGITE O TELEFONE: ");
	            scanf("%ld", &clientes[qtdClientes - 1].telefone);
	
	            printf("\nDIGITE O ENDERECO: ");
	            scanf("%s", &clientes[qtdClientes - 1].endereco);
	            
	            clientes[qtdClientes - 1].id = qtdClientes;
	            qtdClientes++;
				break;
			case 2:
	            printf("\n>> INFORMACOES DOS PRODUTOS: <<\n");
	
	            printf("\nDIGITE NOME PRODUTO: ");
	            scanf("%s", &produtos[qtdProdutos - 1].nome);
	
	            printf("\nDIGITE QUANTIDADE: ");
	            scanf(" %[^\n]", quantidade);
	
	            printf("\nDIGITE O VALOR: ");
	            scanf(" %[^\n]", valor);
				break;
			case 3:
            	printf("\n CLIENTES CADASTRADOS\n");
            	for(int x = 1; x < qtdClientes; x++) {
            		printf("\n");
            		printf("\nID: %d", clientes[x-1].id);
            		printf("\nNome: %s", clientes[x-1].nome);
	            	printf("\nCPF: %lu", (unsigned long) clientes[x-1].cpf);
	            	printf("\nTelefone: %ld", clientes[x-1].telefone);
	            	printf("\nEndereco: %s\n", clientes[x-1].endereco);
				}
				system("pause");
				menuCadastro();
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
    char nomeOs[50], enderecoOs[50], telefoneOs[15], nomeAparelhoOs[100], defeitoOs[100], valorOs[100];
    printf("\n.:: MENU DE OS ::.");
    printf("\n[1] - ABRIR OS");
    printf("\n[2] - CONSULTAR OS");
    printf("\n[3] - ENCERRAR OS");
    printf("\n[4] - AGENDAR VISITA TECNICA");
    printf("\n[5] - VOLTAR");

    printf("\nDIGITE A OPCAO: ");
    scanf("%d", &opcao);

    system("cls");

    switch(opcao) {
        case 1:
        printf("\n>> INFORMACOES DA OS: <<\n");
        printf("NOME DO CLIENTE: ");
        scanf(" %[^\n]", nomeOs);
        printf("ENDERECO DO CLIENTE: ");
        scanf(" %[^\n]", enderecoOs);
        printf("TELEFONE DO CLIENTE: ");
        scanf(" %[^\n]", telefoneOs);
        printf("NOME APARELHO: ");
        scanf(" %[^\n]", nomeAparelhoOs);
        printf("DEFEITO RELATADO: ");
        scanf(" %[^\n]", defeitoOs);
        printf("VALOR REPARO: ");
        scanf(" %[^\n]", valorOs);
       
	   break;
        case 2:
           
            break;
        case 3:
        	
        	break;
        case 4:
        	
        	break;
		case 5:
            menuPrincipal();
            break;
        default:
            printf("\nOPCAO INVALIDA");
            break;
    }
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

    return opcao;
}
