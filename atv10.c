#include <stdio.h>
#include <string.h>

#define NUM_CIDADES 200
#define ESTADO_RS "RS"

struct Cidade {
    int codigo;
    char estado[3];
    int veiculos;
    int acidentes;
};

int main() {
    struct Cidade cidades[NUM_CIDADES];
    int maiorIndiceAcidentes = 0, menorIndiceAcidentes = 0;
    int maiorCodigo = 0, menorCodigo = 0;
    double mediaVeiculos = 0.0;
    double mediaAcidentesRS = 0.0;
    int totalVeiculos = 0, totalAcidentesRS = 0;
    int numCidadesRS = 0;

    for (int i = 0; i < NUM_CIDADES; i++) {
        printf("Informe o código da cidade: ");
        scanf("%d", &cidades[i].codigo);

        if (cidades[i].codigo == 0) {
            break;
        }

        printf("Informe o estado da cidade (2 letras): ");
        scanf("%s", cidades[i].estado);

        printf("Informe o número de veículos de passeio em 1992: ");
        scanf("%d", &cidades[i].veiculos);

        printf("Informe o número de acidentes com vítimas em 1992: ");
        scanf("%d", &cidades[i].acidentes);

        if (i == 0 || cidades[i].acidentes > cidades[maiorIndiceAcidentes].acidentes) {
            maiorIndiceAcidentes = i;
        }
        if (i == 0 || cidades[i].acidentes < cidades[menorIndiceAcidentes].acidentes) {
            menorIndiceAcidentes = i;
        }

        if (i == 0 || cidades[i].veiculos > cidades[maiorCodigo].veiculos) {
            maiorCodigo = i;
        }
        if (i == 0 || cidades[i].veiculos < cidades[menorCodigo].veiculos) {
            menorCodigo = i;
        }

        totalVeiculos += cidades[i].veiculos;

        if (strcmp(cidades[i].estado, ESTADO_RS) == 0) {
            numCidadesRS++;
            totalAcidentesRS += cidades[i].acidentes;
        }
    }

    if (numCidadesRS > 0) {
        mediaAcidentesRS = (double)totalAcidentesRS / numCidadesRS;
    }

    if (totalVeiculos > 0) {
        mediaVeiculos = (double)totalVeiculos / NUM_CIDADES;
    }

    printf("a) Maior índice de acidentes de trânsito pertence à cidade de código %d no estado de %s\n", cidades[maiorIndiceAcidentes].codigo, cidades[maiorIndiceAcidentes].estado);
    printf("   Menor índice de acidentes de trânsito pertence à cidade de código %d no estado de %s\n", cidades[menorIndiceAcidentes].codigo, cidades[menorIndiceAcidentes].estado);

    printf("b) A média de veículos nas cidades brasileiras é %.2lf\n", mediaVeiculos);
    
    printf("c) A média de acidentes com vítimas entre as cidades do Rio Grande do Sul é %.2lf\n", mediaAcidentesRS);

    return 0;
}