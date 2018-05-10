/*Esercizio 1
Scrivere un programma, utilizzando typedef e memcpy per
a) Leggere un elenco di nomi
b) Visualizzare i nomi dell’elenco
*/

// By Marcello & Gianvito

#include <stdio.h>
#include <string.h>
#define dim 20 //lunghezza nome/cognome persona
#define grand 100 //lunghezza lista persone

int main() {
    
    typedef char parola[dim];
    parola nome;
    parola cognome;
    
    typedef parola utente[2];
    utente persona;
    typedef utente lista[grand];
    lista rubrica;
    int scelta;
    int i;

printf("Creazione di una lista di nomi e cognomi \n\n");


printf("Definisci la lunghezza della tua rubrica (massimo %d): ", grand);
scanf("%d", &scelta);
fflush(stdin);

printf("\n");

for(i=0; i<scelta; i++)

{
printf("Inserisci il [%d] nome - Massimo %d caratteri (l'eccedenza sara' troncata)\n", i+1, dim-1);
fgets(persona[0], dim+1, stdin);
fflush(stdin);
strncpy(rubrica[i][0], persona[0], dim-1);

printf("\n");

printf("Inserisci il [%d] cognome - Massimo %d caratteri (l'eccedenza sara' troncata)\n", i+1, dim-1);

fgets(persona[1], dim+1, stdin);
fflush(stdin);
strncpy(rubrica[i][1], persona[1], dim-1);

printf("\n\n");

}

printf("\n\n\n");
printf("La tua rubrica contiene:\n");
for(i=0; i<scelta; i++)
{
         printf("%d) %s %s \n", i+1, rubrica[i][0], rubrica[i][1]);
         
         }

    system("pause");
        return 0;
    }
