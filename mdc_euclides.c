#include <stdio.h>

int main() {
    int a, b, temp, resto;

    printf("Digite o primeiro número inteiro: ");
    scanf("%d", &a);
    printf("Digite o segundo número inteiro: ");
    scanf("%d", &b);

    if (a < b) {
        temp = a;
        a = b;
        b = temp;
    }

    while (b != 0) {
        resto = a % b;
        a = b;
        b = resto;
    }

    printf("O Máximo Divisor Comum (MDC) é: %d\n", a);

    return 0;
}