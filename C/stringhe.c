/*
 * stringhe
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
#include <string.h>

int main(int argc, char ** argv)
{
    // In C non esiste il tipo stringa, si usano array di char
    int a[] = {1, 4, 8, 2};
    char robe[] = {'c', 'i', 'a', 'o'};

    // Per comodità è consentito assegnare direttamente una stringa, indicata con doppi apici
    char * robe1 = "ciaone";
    char * robe2 = "ciao";

    // Trattandosi di array, un'assegnazione di questo tipo, eguaglia gli indirizzi
    robe1 = robe;
    robe[2] = 'b'; // robe = "cibo"
    printf(robe1); // stampa cibo

    // La libreria string.h offre metodi appositi per manipolare le stringhe
    int confronto = strcmp(robe, robe1);

    // In questo modo vengono copiati i caratteri ed eventuali modifiche non influiscono
    strcpy(robe2, robe);
    robe = "qwertyuiop";
    printf(robe2); // stampa cibo

    return 0;
}