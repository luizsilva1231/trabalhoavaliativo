#include <stdio.h>

int main() {
    int numAlunos = 30;
    double notas1[numAlunos], notas2[numAlunos], notas3[numAlunos];
    double mediaPonderada, mediaGeral = 0;

    // Solicita ao usuário que insira as notas dos alunos
    for (int i = 0; i < numAlunos; i++) {
        printf("Digite as notas do aluno %d (nota1 nota2 nota3): ", i + 1);
        scanf("%lf %lf %lf", &notas1[i], &notas2[i], &notas3[i]);

        // Calcula a média ponderada para o aluno
        mediaPonderada = (notas1[i] * 2 + notas2[i] * 4 + notas3[i] * 3) / 10;

        // Soma a média ponderada à média geral
        mediaGeral += mediaPonderada;

        // Verifica se o aluno foi aprovado ou reprovado
        if (mediaPonderada >= 7.0) {
            printf("Aluno %d: %.2lf (Aprovado)\n", i + 1, mediaPonderada);
        } else {
            printf("Aluno %d: %.2lf (Reprovado)\n", i + 1, mediaPonderada);
        }
    }

    // Calcula a média geral da turma
    mediaGeral /= numAlunos;

    // Imprime a média geral da turma
    printf("Média geral da turma: %.2lf\n", mediaGeral);

    return 0;
}