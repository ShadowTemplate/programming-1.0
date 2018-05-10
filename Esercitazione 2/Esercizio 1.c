/* Scrivere un programma per il calcolo del Massimo Comune Divisore tra due numeri interi
utilizzando l'algoritmo Euclideo.*/

#include <stdio.h>

int a, b, mcd;
int main() {
	
	   printf("Calcolo del MCD tra due numeri. \n\n");	
	   printf("Inserisci due numeri interi ");
	   scanf("%d",&a);
	   scanf("%d",&b);	
	
	   while (a!=b)
		  if (a>b) a=(a-b);
		  else b=(b-a);
	
       mcd=a;
	
	   printf("Il massimo comun divisore e': %d \n\n", mcd);
	   
	  
system("PAUSE");
return 0;
	
	
}
