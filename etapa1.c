#include <stdio.h>

#define MAX 10          // maximo de veiculos que a frota comporta

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

    return 0;
}
