#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "arvore.h"
#include "parser.h"


int main(){
    //habilitar_log();
    printf("-Processador de expressoes aritmeticas-\n");
    while(1){
        memset(buffer, 0, MAX_BUFFER);
        printf("= ");
        fgets(buffer, sizeof(buffer), stdin);
        No* no = gerar_arvore(buffer);
        if(no){
            printf("-Expressao carregada com sucesso-\n");

            // Implementacao do menu do trabalho

            destruir_arvore(no);
        }
    }
    return 0;
}
