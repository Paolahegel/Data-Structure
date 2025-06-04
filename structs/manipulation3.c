#include <stdio.h>
#include <string.h>

// defining the struct Aluno
struct Aluno {
    char nome[50];
    int idade;
    char matricula[15];
    char curso[30];
};

// function main
int main() {
    int i;
    struct Aluno alunos[3]; // array of 3 Aluno structs

    // populating the array of structs
    strcpy(alunos[0].nome, "Ana");
    alunos[0].idade = 20;
    strcpy(alunos[0].matricula, "2023001");
    strcpy(alunos[0].curso, "Engenharia de Software");

    strcpy(alunos[1].nome, "Bruno");
    alunos[1].idade = 22;
    strcpy(alunos[1].matricula, "2023002");
    strcpy(alunos[1].curso, "Ciência da Computação");

    strcpy(alunos[2].nome, "Carla");
    alunos[2].idade = 21;
    strcpy(alunos[2].matricula, "2023003");
    strcpy(alunos[2].curso, "Sistemas de Informação");
    
    // displaying the information of each student
    printf("Informações dos Alunos:\n");
    for (i = 0; i < 3; i++) {
        printf("Nome: %s\n", alunos[i].nome);
        printf("Idade: %d\n", alunos[i].idade);
        printf("Matrícula: %s\n", alunos[i].matricula);
        printf("Curso: %s\n\n", alunos[i].curso);
    }
}
