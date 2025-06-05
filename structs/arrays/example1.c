#include <stdio.h>
#include <string.h>

/* arrays with structs it's possible keep big data, like lists*/

// defining the struct Aluno
typedef struct {
    char nome[50];
    int idade;
    int matricula;
    char curso[30];
} Aluno;

// created array of 10 Aluno structs
Aluno alunos_lista[1];

void validaRegistro(Aluno aluno) {
    printf("\n Digite um nome: ");
    scanf("%s%*c", aluno.nome);

    int i, posicao = 0;

    for(i = 0; i<1; i++) {
        if(strcmp(alunos_lista[i].nome, aluno.nome) == 0) {
            printf("Aluno encontrado! \n");
            posicao = i;
        } else {
            posicao = -1;
        }
    }

    if(posicao = -1) {
        printf("Aluno não encontrado! \n");
    } else {
        printf("Aluno encontrado na posição %d \n", posicao);
    }
    // This function can be used to validate the student record
    // For now, it does nothing
}

int main() {
    int i;

    /*populating the arrays of structs with data inserted by the user
     it's necessarry a loop for */
    for (i = 0; i < 1; i++) {
        printf("\nDigite o nome do aluno %d: ", i + 1);
        fgets(alunos_lista[i].nome, sizeof(alunos_lista[i].nome), stdin);
        alunos_lista[i].nome[strcspn(alunos_lista[i].nome, "\n")] = 0; // remove newline character

        printf("\nDigite a idade do aluno %d: ", i + 1);
        scanf("%d", &alunos_lista[i].idade);

        printf("\nDigite a matrícula do aluno %d: ", i + 1);
        scanf("%d", &alunos_lista[i].matricula);
        getchar(); // consume newline character left by scanf

        printf("\nDigite o curso do aluno %d: ", i + 1);
        fgets(alunos_lista[i].curso, sizeof(alunos_lista[i].curso), stdin);
        alunos_lista[i].curso[strcspn(alunos_lista[i].curso, "\n")] = 0; // remove newline character
}

for(i=0; i< 1; i++) {
    printf("\nAluno %d:\n", i + 1);
    printf("Nome: %s\n", alunos_lista[i].nome);
    printf("Idade: %d\n", alunos_lista[i].idade);
    printf("Matrícula: %d\n", alunos_lista[i].matricula);
    printf("Curso: %s\n", alunos_lista[i].curso);
}

    validaRegistro(alunos_lista[0]); // Call the validation function with the first student

    return 0;
}