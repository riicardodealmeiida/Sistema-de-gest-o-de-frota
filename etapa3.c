#include <stdio.h>

#define MAX 10          // maximo de veiculos que a frota comporta
#define CIDADES 5       // numero de cidades (a matriz de distancias e 5x5)

// ---------- Estrutura de dados ----------
// Guarda todas as informacoes de um veiculo da frota
struct Veiculo {
    int id;             // identificador unico (ex: 101, 102)
    char placa[8];      // 7 caracteres + o '\0' do fim da string
    char modelo[30];    // nome do modelo (sem espacos)
    float consumo;      // quantos km o veiculo faz por litro
    float capacidade;   // capacidade de carga em toneladas
    int status;         // 0 = Disponivel, 1 = Em viagem, 2 = Manutencao
};

int main() {
    // Vetor fixo com todos os veiculos cadastrados
    struct Veiculo veiculos[MAX];
    // Quantidade de veiculos cadastrados (tambem e a proxima posicao livre)
    int quantidade = 0;
    int opcao;

    /* Matriz de distancias em km entre as cidades.
       Linha = origem, coluna = destino.
       0 = mesma cidade, -1 = nao existe rota direta. */
    float distancias[CIDADES][CIDADES] = {
        {0, 25, 90, 120, 150},
        {25, 0, 75, 105, 130},
        {90, 75, 0, 140, 110},
        {120, 105, 140, 0, 210},
        {150, 130, 110, 210, 0}
    };

    // Laco principal: repete o menu ate o usuario escolher 6 (Sair)
    do {
        printf("\n===== SISTEMA DE GESTAO DE FROTA =====\n");
        printf("1 - Cadastrar veiculo\n");
        printf("2 - Listar veiculos\n");
        printf("3 - Ver matriz de distancias\n");
        printf("4 - Simular viagem\n");
        printf("5 - Relatorio da frota\n");
        printf("6 - Sair\n");
        printf("Escolha: ");
        scanf("%d", &opcao);

        // ---------- 1 - CADASTRAR VEICULO ----------
        if (opcao == 1) {
            printf("Cadastro em construcao.\n");
        }

        // ---------- 2 - LISTAR VEICULOS ----------
        else if (opcao == 2) {
            printf("Listagem em construcao.\n");
        }

        // ---------- 3 - MATRIZ DE DISTANCIAS ----------
        else if (opcao == 3) {
            printf("Matriz em construcao.\n");
        }

        // ---------- 4 - SIMULAR VIAGEM ----------
        else if (opcao == 4) {
            printf("Simulacao em construcao.\n");
        }

        // ---------- 5 - RELATORIO DA FROTA ----------
        else if (opcao == 5) {
            printf("Relatorio em construcao.\n");
        }

        // ---------- 6 - SAIR ----------
        else if (opcao == 6) {
            printf("Programa encerrado.\n");
        }

        else {
            printf("Opcao invalida.\n");
        }

    } while (opcao != 6);   // o menu repete enquanto nao escolher Sair

    return 0;
}
