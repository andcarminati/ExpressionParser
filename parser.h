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

#ifndef CALCULADORA_H_INCLUDED
#define CALCULADORA_H_INCLUDED

#include "arvore.h"

#define MAX_BUFFER 1024
extern char buffer[MAX_BUFFER];

No* parentesis();
double avaliar_expressao(No* no);
No* operacao();
No* parentesis();
No* gerar_arvore(char* buffer);
void organizar_precedencias(No* no);
void colocar_espacos(char* buffer);
void habilitar_log();

#endif // CALCULADORA_H_INCLUDED
