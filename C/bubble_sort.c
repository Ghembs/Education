/*
 * BUBBLE SORT
 * Implementazione dell'algoritmo di ordinamento a "bolle": scorre un array, scambiando
 * a due a due i valori non ordinati. Ogni volta che l'array (una porzione) viene
 * attraversato, il valore massimo (locale) è nella posizione giusta. Se non sono stati
 * effettuati scambi, l'array è ordinato e l'algoritmo termina.
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

#define bool unsigned short int // associo il nome "bool" agli interi piccoli e senza segno
#define TRUE 1 // associo il nome "TRUE" a 1 (che è un intero piccolo e senza segno), che verrà valutato vero dalle condizioni
#define FALSE 0 // associo il nome "FALSE" a 0 (che è un intero piccolo e senza segno), che verrà valutato falso dalle condizioni

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
 * Funzione per ordinare l'arry
 * @param ar array nella forma del puntatore al primo elemento
 * @param dim la dimensione dell'array da controllare (dimensione totale)
 */
void bubble_sort(int * ar, int dim)
{
    bool ordinato = FALSE; // lo inizializzo come falso, giusto per entrare nel ciclo

    while (dim > 1 && !ordinato) // finché ho più di due elementi e non sono ordinati
    {
        ordinato = TRUE; // quando comincio a scorrere, "penso" sia ordinato (vedi riga 41)
        for(int i = 0; i < dim-1; i++)
        {
            if(ar[i] > ar[i+1]) // elemento corrente è maggiore dell'elemento successivo
            {
                swap(&ar[i], &ar[i+1]); // scambio il corrente col successivo
                ordinato = FALSE; // quando ho effettuato uno scambio, so che non è ordinato
            }
        }
        dim--; // diminuisco la dimensione totale, avendo portato il massimo in fondo
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
    }

    bubble_sort(ar, dim);

    for(int i = 0; i < dim; i++)
    {
        printf("l'elemento %d e': %d\n", i, ar[i]);
    }

    free(ar);
    return 0;
}