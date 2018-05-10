/* Scrivere un programma per il calcolo del Massimo Comune Divisore tra due numeri interi
utilizzando l'algoritmo Euclideo.*/

#include <stdio.h>

int a, b, mcd;
int continua = 1;

int main() {
	
	do {

	   printf("Calcolo del mcd tra due numeri. \n\n");	
	   printf("Inserisci due numeri interi ");
	   scanf("%d",&a);
	   scanf("%d",&b);	
	
	   while (a!=b)
		  if (a>b) a=(a-b);
		  else b=(b-a);
	
       mcd=a;
	
	   printf("Il massimo comune divisore e': %d \n\n", mcd);
	   printf("Premere 1 per ripetere, 0 per terminare ");
	   scanf("%d", &continua);
	}
	while (continua==1);	
	

	   	
system("PAUSE");
return 0;
	
	
}

