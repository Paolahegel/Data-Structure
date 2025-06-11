#include <ctype.h>
#include <stdio.h>


int main() {
    char texto [] = "Programacao123";
    int i = 0;
        
    //for loop para percorrer cada caractere da string
    while(texto[i]){

        // Verifica se o caractere é uma letra
        if (isalpha(texto[i])) {
            printf("%c - uma letra.\n", texto[i]);

        // Transforma em maiúscula se for minúscula
        if(islower(texto[i])) {
            texto[i] = toupper(texto[i]);
            printf("Convertido para maiúsculo: %c\n", texto[i]);
        }
    }
    // verifica se é um número
    else if (isdigit(texto[i])) {
        printf("%c - um numero.\n", texto[i]);
    }
    i++;
    }

    printf("Texto final: %s\n", texto);

    return 0;

}