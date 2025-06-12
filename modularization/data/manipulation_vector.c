#include <stdio.h>

void dobra_valor(int num) {
    num = num *2;
    printf("Dentro da função (por valor), o valor dobrado é: %d\n", num);
}

void dobra_valor_referencia(int *num) {
    *num = *num * 2;
    printf("Dentro da função (por referência), o valor dobrado é: %d\n", *num);
}

int main() {
    int valor = 10;
    
    printf("Valor original: %d\n", valor);
    
    dobra_valor(valor); // Passagem por valor
    printf("Após chamada por valor, o valor ainda é: %d\n", valor);
    
    dobra_valor_referencia(&valor); // Passagem por referência
    printf("Após chamada por referência, o valor agora é: %d\n", valor);
    
    return 0;
}