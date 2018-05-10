#include <stdlib.h>
#include <stdio.h>

main()
{
int N; //numeri da sommare
int i; //indice
int num; //numero inserito
int somma;

somma = 0;

printf("Inserisci la quantita' N di numeri da sommare -> ");
scanf("%d",&N);

for(i=1;i<=N;i++)
{
printf("\nInserisci il %d' valore -> ", i);
scanf("%d", &num);
somma = somma + num;
}

printf("\nLa somma dei numeri inseriti e' -> %d\n\n", somma);

system("PAUSE");
return (0);
}
