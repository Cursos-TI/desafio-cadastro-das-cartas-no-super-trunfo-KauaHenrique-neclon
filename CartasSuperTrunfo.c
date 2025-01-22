#include <stdio.h>

int main(){
    char nome[30],cidade[30];
    int area, PIB,populacao, turistico;

    printf("Digite o nome\n");
    scanf("%s", &nome);
    printf("Digite a cidade\n");
    scanf("%s", &cidade);
    printf("Digite a populacao\n");
    scanf("%d", &populacao);
    printf("Digite a area\n");
    scanf("%d", &area);
    printf("Digite o PIB\n");
    scanf("%d", &PIB);
    printf("Digite quantos ponto turistico\n");
    scanf("%d", &turistico);

    printf("Nome: %s\nCidade: %s\nPopulaçao: %d\nArea: %d\nPIB: %d\nPonto Turismo: %d",nome,cidade,populacao,area, PIB, turistico);
}
