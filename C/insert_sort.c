/*
 * insert_sort
 * Implementazione dell'algoritmo di inserimento ordinato: ogni volta che viene inserito
 * un nuovo elemento nell'array, si controlla se gli elementi che lo precedono sono
 * più grandi di esso e si provvede a farlo scorrere fino alla posizione giusta.
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

/**
 * Funzione che si occupa di far scorrere al suo posto l'ultimo elemento inserito,
 * salvandolo in una variabile temporanea e scambiandolo col precedente, finché è
 * superiore o fino a raggiungere l'inizio dell'array
 * @param ar array nella forma del puntatore al primo elemento
 * @param last_pos indice dell'ultimo elemento inserito
 */
void insert_sort(int * ar, int last_pos)
{
    int x = ar[last_pos]; // si salva l'ultimo elemento nella variabile x

    // il ciclo scorre all'indietro e finché gli elementi precedenti sono superiori
    for(int i = last_pos-1;i >= 0 && x<ar[i]; i--)
    {
        ar[i+1] = ar[i]; // si scambia il corrente col precedente
        ar[i] = x; // si inserisce l'ultimo al posto del corrente
    }
}

int main()
{
    int dim;
    int * ar;

    printf("Inserisci la dimensione dell'array\n");
    scanf("%d", &dim);

    ar = (int *)malloc(dim* sizeof(int)); //memory allocation

    printf("Inserisci %d valori interi:\n", dim);
    for(int i = 0; i < dim; i++)
    {
        scanf("%d", (ar + i));
        insert_sort(ar, i);
    }

    for(int i = 0; i < dim; i++)
    {
        printf("l'elemento %d e': %d\n", i, ar[i]);
    }

    free(ar);
    return 0;
}