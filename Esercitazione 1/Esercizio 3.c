#include <stdio.h>

main() {
       int i, n, somma;
       printf("Inserisci il numero di interi che vuoi sommare \n");
       scanf("%d", &n);
       printf("Vuoi sommare %d valori\n", n);
       somma=0;
       i=0;
       while (i<=n){
       somma=somma+i;
       i++;
       }
       
   printf("Somma %d \n", somma);
  
       
system("PAUSE");
return (0);
}

