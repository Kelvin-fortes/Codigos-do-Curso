#include <stdio.h>

// Função para verificar se um número é primo
int eh_primo(int numero) {
    if (numero <= 1) {
        return 0; // Números menores ou iguais a 1 não são primos
    }
    for (int i = 2; i * i <= numero; i++) {
        if (numero % i == 0) {
            return 0; // Se 'numero' é divisível por 'i', não é primo
        }
    }
    return 1; // Se não encontrou divisores, é primo
}

int main() {
    int num;

    // Solicita ao usuário para inserir um número
    printf("Digite um número inteiro: ");
    scanf("%d", &num);

    // Verifica se o número é primo e exibe o resultado
    if (eh_primo(num)) {
        printf("%d é um número primo.\n", num);
    } else {
        printf("%d não é um número primo.\n", num);
    }

    return 0;
}
