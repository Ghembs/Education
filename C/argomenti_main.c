/*
 * argomenti_main
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

/*
 * E' possibile passare argomenti al metodo main, come stringhe (array di caratteri),
 * il numero di argomenti viene salvato in argc, mentre argv rappresenta un array di
 * stringhe che li contiene, insieme al percorso (o al nome) del programma stesso
 */
int main(int argc, char ** argv) // arguments counter, arguments vector
{
    printf("%d\n", argc);
    printf("%s\n", argv[0]);
    printf("%s\n", argv[2]);
    return 0;
}