#include <stdio.h>
#include <string.h>

int main() {
    char name[] = "Paola Silva";
    char name2[50] = "Nascimento ";
    
    int comprimento = strlen(name); // Calcula o comprimento da stringdestino
    printf("O comprimento da string é: %d\n", comprimento);
    
    strcpy(name, name2); // Copia a string de origem para a string de destino
    printf("A string copiada é: %s\n", name2);
    
    strcat(name2, name); // Concatena a string de origem com a string de destino
    printf("A string concatenada é: %s\n", name);

    char buffer[50];
    sprintf(buffer, "Nome: %s", name); // Formata a string e armazena em uma variável  
    printf("A string formatada é: %s\n", buffer);
    return 0;
}