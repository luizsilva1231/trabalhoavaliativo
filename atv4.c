#include <stdio.h>

int main() {
    double A, B, C;
    double maior, menor, meio;

    // Solicita ao usuário que insira os valores dos lados do triângulo
    printf("Digite os valores dos lados do triângulo (A, B e C): ");
    scanf("%lf %lf %lf", &A, &B, &C);

    // Encontre o maior, o menor e o lado do meio
    if (A >= B && A >= C) {
        maior = A;
        menor = B < C ? B : C;
        meio = B > C ? B : C;
    } else if (B >= A && B >= C) {
        maior = B;
        menor = A < C ? A : C;
        meio = A > C ? A : C;
    } else {
        maior = C;
        menor = A < B ? A : B;
        meio = A > B ? A : B;
    }

    // Use o Teorema de Pitágoras para verificar o tipo de triângulo
    if (menor * menor + meio * meio == maior * maior) {
        printf("É um triângulo retângulo.\n");
    } else if (menor * menor + meio * meio > maior * maior) {
        printf("É um triângulo acutângulo.\n");
    } else {
        printf("É um triângulo obtusângulo.\n");
    }

    return 0;
}