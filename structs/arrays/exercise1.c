#include <stdio.h>
#include <string.h>

#define NUM_PRODUCTS 5

struct Produto
{
    char nome[50];
    int codigo;
    int quantidade;
    float preco;
};

int main(){
    int i;
    struct Produto produtos[NUM_PRODUCTS] = {
        {"Arroz", 101, 50, 20.5},
        {"Feijão", 102, 30, 15.0},
        {"Macarrão", 103, 20, 10.0},
        {"Óleo", 104, 25, 8.5},
        {"Açúcar", 105, 40, 5.0}
    };

    printf("Lista de Produtos:\n");
    for (i = 0; i < NUM_PRODUCTS; i++) {
        printf("Produto: %s, Código: %d, Quantidade: %d, Preço: %.2f\n", 
               produtos[i].nome, produtos[i].codigo, produtos[i].quantidade, produtos[i].preco);
    }

    return 0;
    
}
