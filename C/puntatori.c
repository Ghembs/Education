/*
 * puntatori
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

int main(int argc, char ** argv)
{
    int a = 4;
    int * ptr = &a;

    printf("inserisci un valore intero\n");
    scanf("%d", ptr); // equivale a scanf("%d", &a);
    printf("%d", ptr); // stampa il valore di ptr, ovvero l'indirizzo di a (come intero)
    printf("%d", *ptr); // equivale a printf("%d", a);

    return 0;
}