/*
 * esercizio if
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
#include <stdio>

int main(int argc, char ** argv)
{
    int a;

    printf("Inserisci un valore intero:\n");
    scanf("%d", &a); // %d, %i: intero, %f float, %lf double, %c char, %s stringhe

    if(a % 2 == 0) // LA DIVISIONE FRA A E 2 NON DEVE AVERE RESTO
    {
        printf("Hai inserito un numero pari!");
    } else
    {
        printf("Hai inserito un numero dispari!");
    }
}
