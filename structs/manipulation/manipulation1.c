#include <stdio.h>
#include <string.h>

struct Paciente
{
    char nome[50];
    int idade;
    char telefone[15];
};

int main(){
   struct Paciente paciente[3];
    int i;

    // Preenchendo os dados dos pacientes
    strcpy(paciente[0].nome, "Paola");
    paciente[0].idade = 24;
    strcpy(paciente[0].telefone, "123456789");
    strcpy(paciente[1].nome, "Lucas");
    paciente[1].idade = 25;
    strcpy(paciente[1].telefone, "987654321");
    strcpy(paciente[2].nome, "Geovan");
    paciente[2].idade = 32;
    strcpy(paciente[2].telefone, "1234567809");
   
    // Imprimindo os dados dos pacientes
    for(i = 0; i < 3; i++){
        printf("Paciente %d: \n", i + 1);
        printf("Nome: %s\n", paciente[i].nome);
        printf("Idade: %d\n", paciente[i].idade);
        printf("Telefone: %s\n\n", paciente[i].telefone);
    }

    // Alterando os dados do paciente 1
    strcpy(paciente[1].nome, "Lucas Silva");
    paciente[1].idade = 26;
    strcpy(paciente[1].telefone, "987654322");

    // Imprimindo os dados do paciente 1 após a alteração
    printf("Dados do paciente 1 após alteração:\n");
    printf("Nome: %s\n", paciente[1].nome);
    printf("Idade: %d\n", paciente[1].idade);
    printf("Telefone: %s\n", paciente[1].telefone);

    return 0;
}
