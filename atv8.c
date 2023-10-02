#include <stdio.h>

int main() {
    double salario, maiorSalario = 0, totalSalario = 0;
    int numFilhos, totalFilhos = 0, contador = 0;
    double percentualAte100 = 0;

    do {
        // Solicita ao usuário que insira o salário e o número de filhos
        printf("Digite o salário (ou um valor negativo para sair): ");
        scanf("%lf", &salario);

        if (salario >= 0) {
            printf("Digite o número de filhos: ");
            scanf("%d", &numFilhos);

            // Calcula a média do salário da população
            totalSalario += salario;

            // Calcula a média do número de filhos
            totalFilhos += numFilhos;

            // Verifica o maior salário
            if (salario > maiorSalario) {
                maiorSalario = salario;
            }

            // Verifica se o salário é até R$100,00
            if (salario <= 100.0) {
                contador++;
            }
        }
    } while (salario >= 0);

    // Calcula a média do salário da população
    double mediaSalario = totalSalario / contador;

    // Calcula a média do número de filhos
    double mediaFilhos = (double)totalFilhos / contador;

    // Calcula o percentual de pessoas com salário até R$100,00
    percentualAte100 = (double)contador / (contador + 1) * 100;

    // Imprime os resultados
    printf("Média do salário da população: %.2lf\n", mediaSalario);
    printf("Média do número de filhos: %.2lf\n", mediaFilhos);
    printf("Maior salário: %.2lf\n", maiorSalario);
    printf("Percentual de pessoas com salário até R$100,00: %.2lf%%\n", percentualAte100);

    return 0;
}