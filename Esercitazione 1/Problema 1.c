/* Problema 1
Calcolare e scrivere il valore assoluto, la parte intera e quella frazionaria di un numero
reale relativo (numero con parte intera e/o parte decimale e/o segno) digitato da tastiera.
L'implementazione non deve usare le funzioni di libreria del linguaggio C.
*/

#include <stdio.h>

int main(){
    
    float n, dec_part;
    int segno, parteintera;
    
    printf("Inserisci un numero reale ");
    scanf("%f", &n);
    printf("\n\n");
    
if (n>=0) {
printf ("Il valore assoluto e' %f\n", n);
segno=1;
parteintera=segno*n;
printf ("La parte intera e' %d\n", parteintera);
dec_part=n-parteintera;
printf ("La parte frazionaria e' %f\n", dec_part);
 }
else {
printf ("Il valore assoluto e' %f\n", -n);
segno=-1;
parteintera=segno*n;
printf ("La parte intera e' %d\n", parteintera);
dec_part=-n-parteintera;
printf ("La parte frazionaria e' %f\n", dec_part);
 }


system("PAUSE");
return 0;   
}
