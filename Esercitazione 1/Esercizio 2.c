#include <stdio.h>

main() {
     int a, b, c;/* dichiarazione delle variabili a, b,c */
     printf("Inserisci i valori di a e b ");
     scanf("%d %d",&a, &b);/* lettura di a,b (scanf ) */
     c=a+b;/* calcolare la somma c */
     printf("La somma e' %d \n", c);/* visualizzare il risultato c (printf) */
     c=a/b;/* calcolare la divisione c*/
     printf("Il quoziente e' %d \n", c);/* visualizzare il risultato c (printf) */
     c=a%b;
     printf("Il resto della divisione e' %d\n", c);/* visualizzare il modulo (printf) */
system("PAUSE");
return 0;   
}


