#include <stdio.h>

int main() {
    float nota1, nota2, nota3, nota4;
    float media;

    printf("Digite a 1ª nota: ");
    scanf("%f", &nota1);
    printf("Digite a 2ª nota: ");
    scanf("%f", &nota2);
    printf("Digite a 3ª nota: ");
    scanf("%f", &nota3);
    printf("Digite a 4ª nota: ");
    scanf("%f", &nota4);

    media = (nota1 + nota2 + nota3 + nota4) / 4.0;

    printf("\nA média do aluno foi: %.2f\n", media);

    if (media >= 7.0) {
        printf("Situação: Aprovado por média.\n");
    } else if (media >= 4.0) {
        printf("Situação: Em exame final.\n");
    } else {
        printf("Situação: Reprovado.\n");
    }

    return 0;
}