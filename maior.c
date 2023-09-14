#include <stdio.h>

int main() {
    int numero; // Declara a variável 'numero'

    printf("Digite um número: "); // Solicita ao usuário que digite um número
    scanf("%d", &numero); // Lê o valor digitado pelo usuário e armazena em 'numero'

    if (numero > 20) { // Verifica se 'numero' é maior do que 20
        printf("Maior do que 20\n"); // Se for maior, exibe a mensagem
    }

    return 0;
}
