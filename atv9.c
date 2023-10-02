#include <stdio.h>

int main() {
    int voto;
    int candidato1 = 0, candidato2 = 0, candidato3 = 0, candidato4 = 0;
    int votosNulos = 0, votosEmBranco = 0;

    printf("Digite o código do candidato (1 a 4) ou 5 para voto nulo, 6 para voto em branco, ou 0 para encerrar: ");

    while (1) {
        scanf("%d", &voto);

        if (voto == 0) {
            break; // Encerra a entrada de votos
        } else if (voto >= 1 && voto <= 4) {
            // Voto válido para um candidato
            switch (voto) {
                case 1:
                    candidato1++;
                    break;
                case 2:
                    candidato2++;
                    break;
                case 3:
                    candidato3++;
                    break;
                case 4:
                    candidato4++;
                    break;
            }
        } else if (voto == 5) {
            // Voto nulo
            votosNulos++;
        } else if (voto == 6) {
            // Voto em branco
            votosEmBranco++;
        } else {
            printf("Código de voto inválido. Tente novamente.\n");
        }
    }

    // Imprime os resultados
    printf("Total de votos para cada candidato:\n");
    printf("Candidato 1: %d votos\n", candidato1);
    printf("Candidato 2: %d votos\n", candidato2);
    printf("Candidato 3: %d votos\n", candidato3);
    printf("Candidato 4: %d votos\n", candidato4);
    printf("Total de votos nulos: %d votos\n", votosNulos);
    printf("Total de votos em branco: %d votos\n", votosEmBranco);

    return 0;
}