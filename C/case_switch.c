/*
 * Costrutto case switch
 * Copyright (c) 2020 Giuliano Gambacorta
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.

 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU General Public License for more details.

 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char ** argv) // arguments counter, arguments vector
{
    // In alternativa possono essere usati dei char, ad esempio 'p', 's' e 'd' per le categorie
    unsigned short int cat = -1; // intero breve e senza segno
    unsigned int prezzo = 0; // intero senza segno
    double prezzo_scontato; // virgola mobile a doppia precisione

    printf("Programma per il calcolo di uno sconto su un biglietto\n");
    printf("Legenda:\n");
    printf("0 - Pensionato (sconto 10%)\n");
    printf("1 - Studente (sconto 15%)\n");
    printf("2 - Disoccupato (sconto 20%)\n");

    // Controllo dell'errore, continua a chiedere la categoria finché non è fra quelle richieste
    while(cat < 0 || cat > 2)
    {
        printf("Inserire la propria categoria:\n");
        scanf("%d", &cat);
    }

    // Controllo dell'errore, continua a chiedere il prezzo finché non è > 0
    while(prezzo <= 0)
    {
        printf("Inserire il prezzo del biglietto\n");
        scanf("%d", &prezzo);
    }

    /*
     * Costrutto switch, l'argomento è la variabile della quale controllare i valori,
     * i quali sono indicati nei possibili case, è necessario inserire un break per
     * terminare il codice di ogni case
     */
    switch(cat)
    {
        case 0: // Con un char sarebbe stato case 'p' e così via
            prezzo_scontato = (double)prezzo * 0.9; // Viene effettuato un cast (conversione) a tipo double, per gestire i decimali
            break;
        case 1:
            prezzo_scontato = (double)prezzo * 0.85;
            break;
        default:
            prezzo_scontato = (double)prezzo * 0.8;
            break;
    }

    printf("Il prezzo scontato per la sua categoria e': %lf", prezzo_scontato);

    return 0;
}
