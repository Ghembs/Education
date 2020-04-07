/*
 * funzioni
 * Copyright (c) 2020 Giuliano Gambacorta
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.

 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.

 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#include <stdio.h>
#include <stdlib.h>

// Una funzione ha un valore di ritorno, un nome e degli argomenti
// Il codice può essere scritto immediatamente o dopo il main
int max(int a, int b);

// Una funzione di tipo void non ritorna nulla
/*
 * Gli argomenti di questa funzione indicano un array, tramite un puntatore al tipo
 * dei suoi elementi e una dimensione
 */
void foo(int * ar, int dim);

int main(int argc, char ** argv)
{
    int pippo = 4;
    int paperino = 3;

    // Una chiamata di funzione può essere usata per passare un argomento ad un'altra
    printf("Il maggiore fra %d e %d e' %d",pippo, paperino, max(pippo, paperino));

    return 0;
}

int max(int a, int b)
{
    if(a > b)
        return a;
    else
        return b;
}