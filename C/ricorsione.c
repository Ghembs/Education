/*
 * ricorsione
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

// Una funzione ricorsiva invoca sé stessa, contiene necessariamente una condizione d'arresto
int fat(int n)
{
    if (n == 1)
        return 1;
    else
        return n * fat(n-1);
}

int main()
{
    int n, fattoriale;

    printf("inserisci un numero intero\n");
    scanf("%d", &n);

    fattoriale = fat(n);

    printf("%d! = %d", n, fattoriale);

    return 0;
}