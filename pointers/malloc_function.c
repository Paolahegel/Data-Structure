#include <stdio.h>
#include <stdlib.h>


int main() {
    int *ponteiro; // will keep adresss of memory
    
    /* aloca um espaço de memória, retorna o tamanho em bytes para saber do espaço 
    que precisa para guardar esse tipo de int. Com a função malloc eu não inicialzo
    a memória "limpa" em 0, sendo possível ter resquicios de outros dados nela*/ 

    ponteiro = (int*) malloc( 5 * sizeof(int)); 

    // verifica se a locação foi bem-sucedida
    if (ponteiro != NULL) {
        int i;

        // iniciliza os valores manualmente, percorrendo o espaço alocado e add valores nesse espaço
        for (i = 0; i < 5; i ++){
            ponteiro[i] = i + 1; 
        }
        
        for (i = 0; i<5; i++){
            printf("%d ", ponteiro[i]);
        }

        free(ponteiro); // libera o espaço alocado na memória antes usado
    } else {
        printf("ERRO na alocação de memória"); 
        }

        return 0;

}
