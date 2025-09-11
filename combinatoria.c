#include <stdio.h>

long long int fatorial(int num);

int main() {
    int n, k;
    long long int resultado;

    printf("Digite o número total de elementos (n): ");
    scanf("%d", &n);
    printf("Digite o número de elementos a serem escolhidos (k): ");
    scanf("%d", &k);

    if (k > n) {
        printf("\nErro: O valor de k não pode ser maior que n.\n");
        return 1;
    }
    if (k < 0 || n < 0) {
        printf("\nErro: Os valores de n e k devem ser não negativos.\n");
        return 1;
    }

    resultado = fatorial(n) / (fatorial(k) * fatorial(n - k));

    printf("\nA combinatória de %d elementos tomados %d a %d é: %lld\n", n, k, k, resultado);

    return 0;
}

long long int fatorial(int num) {
    long long int fat = 1;
    if (num < 0) {
        return 0;
    }
    for (int i = 1; i <= num; i++) {
        fat = fat * i;
    }
    return fat;
}