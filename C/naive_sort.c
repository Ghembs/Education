/*
 * NAIVE SORT
 * Implementazione dell'algoritmo di ordinamento banale: cerca il massimo in un array,
 * lo scambia col valore nell'ultima posizione e ricomincia ignorando l'ultimo valore,
 * finché non ha un valore solo da controllare e dunque l'array è ordinato.
 *
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
 * Funzione per trovare il massimo in un array
 * @param ar array nella forma del puntatore al primo elemento
 * @param dim la dimensione dell'array da controllare (minore o uguale alla dimensione totale)
 * @return l'indice dell'elemento più grande dell'array
 */
int find_max(int * ar, int dim)
{
    int pos = 0; // l'indice del massimo, inizialmente si considera il primo elemento

    for(int i = 1; i < dim; i++) // si parte da 1 perché si confronta a partire dal secondo elemento
        if(ar[i] > ar[pos]) // se l'elemento corrente (di indice i) è maggiore del massimo attuale
            pos = i; // salvo i in pos per specificare che è l'indice del massimo

    return pos;
}

/**
 * Funzione per scambiare fra loro i valori di due variabili
 * @param a Il puntatore alla prima variabile
 * @param b Il puntatore alla seconda
 */
void swap(int * a, int * b)
{
    int tmp = *a; // Si salva temporaneamente il valore di a, che altrimenti verrebbe sovrascritto
    *a = *b; // Si sostituisce il valore di a con quello di b
    *b = tmp; // si sostituisce il valore di b con quello di a (quello originale, sennò diventerebbero uguali)
}

/**
 * La funzione per ordinare l'array
 * @param ar array nella forma del puntatore al primo elemento
 * @param dim la dimensione dell'array da controllare (dimensione totale)
 */
void naive_sort(int * ar, int dim)
{
    int pos_max; // l'indice del massimo

    while(dim > 1)
    {
        pos_max = find_max(ar, dim); // inizializzo l'indice col massimo della porzione di array che sto considerando, inizialmente sarà il massimo di tutto l'array

        if(pos_max < dim - 1) // controllo se l'indice coincide o no con l'ultimo elemento
            swap(&ar[pos_max], &ar[dim-1]); // se l'indice non è dell'ultimo elemento, eseguo lo scambio fra l'elemento di indice massimo e l'ultimo

        dim--;
    }
}

//codice di prova
int main(int argc, char** argv) // NAIVE SORT
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
    }

    naive_sort(ar, dim);

    for(int i = 0; i < dim; i++)
    {
        printf("l'elemento %d e': %d\n", i, ar[i]);
    }

    free(ar);
    return 0;
}