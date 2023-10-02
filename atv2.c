#include <stdio.h>

int main() {
    double chico = 1.50; // Altura inicial de Chico em metros
    double ze = 1.10;    // Altura inicial de Zé em metros
    int anos = 0;        // Contador de anos

    // Enquanto Zé for menor ou igual a Chico, continue aumentando a altura de ambos
    while (ze <= chico) {
        chico += 0.02;  // Chico cresce 2 centímetros por ano (0.02 metros)
        ze += 0.03;     // Zé cresce 3 centímetros por ano (0.03 metros)
        anos++;         // Incrementa o contador de anos
    }

    // Imprime o resultado
    printf("Serão necessários %d anos para que Zé seja maior que Chico.\n", anos);

    return 0;
}