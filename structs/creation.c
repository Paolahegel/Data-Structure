#include <stdio.h>
#include <string.h>

struct Pessoa
{
    char nome[50];
    int idade;
    char telefone[15];
};

int main(){
    struct Pessoa lista[3];
    int i;
  
    strcpy(lista[0].nome, "Paola");
    lista[0].idade = 24;
    strcpy(lista[0].telefone, "123456789");

    strcpy(lista[1].nome, "Lucas");
    lista[1].idade = 25;
    strcpy(lista[1].telefone, "987654321");

    strcpy(lista[2].nome, "Geovan");
    lista[2].idade = 32;
    strcpy(lista[2].telefone, "1234567809");

    // imprimindo as informações do array lista
    for(i =0; i<3; i++){
        printf("Nome:  %s\n", lista[i].nome);
        printf("Idade: %d\n", lista[i].idade);
        printf("Telefone: %s\n\n", lista[i].telefone);
    }

    return 0;
    
}

