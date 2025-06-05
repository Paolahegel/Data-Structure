#include <stdio.h>
#include <string.h>

struct Paciente
{
    char nome[50];
    int idade;
    char telefone[15];
};

void exibirPaciente(struct Paciente p){
    printf("Nome: %s\n", p.nome);
    printf("Idade: %d\n", p.idade);
    printf("Telefone: %s\n\n", p.telefone);
}

int main(){
    struct Paciente paciente1 = {"Paola", 24, "9999-0000"};
    exibirPaciente(paciente1);

    return 0;
}