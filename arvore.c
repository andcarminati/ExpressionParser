/* 
 * This file is part of the Data Structures Course.
 * Copyright (c) 2019 Andreu Carminati.
 * 
 * This program is free software: you can redistribute it and/or modify  
 * it under the terms of the GNU General Public License as published by  
 * the Free Software Foundation, version 3.
 *
 * This program is distributed in the hope that it will be useful, but 
 * WITHOUT ANY WARRANTY; without even the implied warranty of 
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU 
 * General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License 
 * along with this program. If not, see <http://www.gnu.org/licenses/>.
 */

#include "arvore.h"
#include <stdlib.h>
#include <stdio.h>


No* criar_arvore(char* chave){
    No* no = malloc(sizeof(No));
    no->token = chave;
    no->esquerda = NULL;
    no->direita = NULL;
    no->livre = 1;

    return no;
}

void destruir_arvore(No* no){

    if(no->direita) destruir_arvore(no->direita);
    if(no->esquerda) destruir_arvore(no->esquerda);

    free(no->token);
    free(no);

}

No* inserir(No* arvore, No* esquerdo, No* direito){
    arvore->esquerda = esquerdo;
    arvore->direita = direito;

    return arvore;
}

void imprimir_preordem(No* no){

}

void imprimir_simetrica(No* no){

}

void imprimir_posordem(No* no){

}
