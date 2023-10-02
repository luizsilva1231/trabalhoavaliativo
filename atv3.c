#include <stdio.h>

int main() {
    double A, B, C;

    // Solicita ao usuário que insira os valores dos lados do triângulo
    printf("Digite os valores dos lados do triângulo (A, B e C): ");
    scanf("%lf %lf %lf", &A, &B, &C);

    // Verifica se os lados são maiores que zero
    if (A > 0 && B > 0 && C > 0) {
        // Verifica a desigualdade triangular
        if (A + B > C && A + C > B && B + C > A) {
            // Verifica o tipo de triângulo
            if (A == B && B == C) {
                printf("É um triângulo equilátero.\n");
            } else if (A != B && A != C && B != C) {
                printf("É um triângulo escaleno.\n");
            } else {
                printf("É um triângulo isósceles.\n");
            }
        } else {
            printf("Os valores fornecidos não formam um triângulo.\n");
        }
    } else {
        printf("Os valores dos lados devem ser maiores que zero.\n");
    }

    return 0;
}