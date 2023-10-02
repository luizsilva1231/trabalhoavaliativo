#include <stdio.h>
#include <math.h>

int main() {
    double x1, y1, x2, y2;
    double distancia;

    // Solicita ao usuário que insira as coordenadas dos pontos p1 e p2
    printf("Digite as coordenadas de p1 (x1 y1): ");
    scanf("%lf %lf", &x1, &y1);

    printf("Digite as coordenadas de p2 (x2 y2): ");
    scanf("%lf %lf", &x2, &y2);

    // Calcula a distância entre os pontos p1 e p2 usando a fórmula
    distancia = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

    // Imprime a distância com 4 casas decimais após a vírgula
    printf("A distância entre p1 e p2 é: %.4lf\n", distancia);

    return 0;
}