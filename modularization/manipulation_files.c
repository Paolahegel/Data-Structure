#include <stdio.h>

int maic(){
    FILE *file; // ponteiro para o arquivo
    char nome[50];
    int idade;

    // Abre o arquivo para escrita
    file = fopen("dados.txt", "w");
    if (file == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }
    // Solicita os dados do usuário
    printf("Digite seu nome: ");
    scanf("%s", nome);
    printf("Digite sua idade: ");
    scanf("%d", &idade);

    // Escreve os dados no arquivo
    fprintf(file, "Nome: %s\nIdade: %d\n", nome, idade);

    fclose(file); // Fecha o arquivo
    printf("Dados gravados com sucesso!\n");

    // Reabre o arquivo para leitura
    file = fopen("dados.txt", "r");
    if (file == NULL) {
        printf("Erro ao abrir o arquivo para leitura.\n");
        return 1;
    }
    // Lê e exibe os dados do arquivo
    printf("Dados lidos do arquivo:\n");
    fscanf(file, "Nome: %s\nIdade: %d\n", nome, &idade);

    fclose(file); // Fecha o arquivo

    return 0; // Retorna 0 para indicar sucesso
}