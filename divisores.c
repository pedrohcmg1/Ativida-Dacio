#include <stdio.h>

int main() {
    int num;

    printf("Digite um número inteiro para encontrar seus divisores: ");
    scanf("%d", &num);

    if (num <= 0) {
        printf("Por favor, digite um número inteiro positivo.\n");
        return 1;
    }

    printf("Os divisores de %d são: ", num);

    for (int i = 1; i <= num; i++) {
        if (num % i == 0) {
            printf("%d ", i);
        }
    }

    printf("\n");

    return 0;
}