#include <stdio.h>

int main() {
    double x, y;

    // Solicita ao usuário que insira as coordenadas do ponto (x, y)
    printf("Digite as coordenadas do ponto (x y): ");
    scanf("%lf %lf", &x, &y);

    // Verifica em qual quadrante ou eixo o ponto se encontra
    if (x == 0 && y == 0) {
        printf("Origem\n");
    } else if (x == 0) {
        printf("Eixo Y\n");
    } else if (y == 0) {
        printf("Eixo X\n");
    } else if (x > 0 && y > 0) {
        printf("Quadrante 1\n");
    } else if (x < 0 && y > 0) {
        printf("Quadrante 2\n");
    } else if (x < 0 && y < 0) {
        printf("Quadrante 3\n");
    } else {
        printf("Quadrante 4\n");
    }

    return 0;
}