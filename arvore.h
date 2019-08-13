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

#ifndef ARVORE_H_INCLUDED
#define ARVORE_H_INCLUDED

typedef struct No{
    int livre;
    char* token;
    struct No* esquerda;
    struct No* direita;

} No;

No* criar_arvore(char* chave);
No* inserir(No* arvore, No* esquerdo, No* direito);
void destruir_arvore(No* no);
void imprimir_preordem(No* no);
void imprimir_simetrica(No* no);
void imprimir_posordem(No* no);


#endif // ARVORE_H_INCLUDED
