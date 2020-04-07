/*
 * array_puntatori
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

int main(int argc, char ** argv)
{
    // Richiamo dell'uso di puntatori con variabili
    int val = 3;
    int * ptr = &val;
    *ptr = 2;

    // Dimostrazione di come un array sia indicizzabile tramite puntatori
    int a[10];
    *a = 4; // corrisponde a a[0] = 4;
    *(a+2) = 5; // corrisponde a a[2] = 5;

    // Array definito invocando esplicitamente l'allocazione di memoria
    int * ar;
    ar = (int *)malloc(10 * sizeof(int)); // memory allocation

    free(ar);
    return 0;
}