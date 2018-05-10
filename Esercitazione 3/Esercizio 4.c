/* Scrivere un programma per
a) Leggere per riga, in una matrice a, di cardinalità NR x NC, n x m numeri
floating point ( n numero effettivo di righe, m numero effettive di colonne) .
b) Visualizzare la matrice per riga
c) Visualizzare la matrice per colonna
d) Per ogni riga, calcolare la sommaRighe degli elementi e memorizzarla in un
vettore somma (da dichiarare opportunamente)
e) Visualizzare il vettore sommaRighe
f) Per ogni colonna, estrarre il minimo e memorizzarlo in un vettore minimoRighe
(da dichiarare opportunamente)
g) Visualizzare il vettore minimoRighe */

#include <stdio.h>
#define NR 4
#define NC 2

int main()
{
      
     float mat[NR][NC];
     int i,j;
     float acc=0;
     float som[NR];
     float min[NC];
     float minimo;
     
for(i=0; i<NR; i++)
{
         for(j=0; j<NC; j++)
         {
         printf("Inserisci un valore per la cella [%d] [%d] ", i, j);
         scanf("%f", &mat[i][j]);
         acc+=mat[i][j]; //per la somma del rigo
                 
         
         }// fine primo for (colonna by colonna)
         som[i]=acc; //assegna la somma della riga al vettore delle somme
         acc=0; //azzera l'accumulatore della somma, per prepararlo alla nuova riga
         }  //fine secondo for (riga by riga)

//Stampa matrice per riga
printf("\n\n");    

for(i=0; i<NR; i++)
{
         printf("La riga %d contiene:  ", i);
         
         for(j=0; j<NC; j++)
         {
           printf("\t %7.3f", mat[i][j]);

         
         
         }// fine primo for
         printf("\n");
         }  //fine secondo for


//Stampa matrice per colonna
printf("\n\n");    

for(j=0; j<NC; j++)
{
         printf("La colonna %d contiene:  ", j);
         
         minimo=mat[0][j]; //assume che il minimo della colonna sia l'elemento della prima riga
         
         for(i=0; i<NR; i++)
         {
           printf("\t %5.3f", mat[i][j]);
           if(minimo>mat[i][j]) minimo=mat[i][j]; //calcola il minimo per la colonna
                  
         }// fine primo for
         min[j]=minimo; //assegna il minimo nel vettore dei minimi
         printf("\n");
         }  //fine secondo for
         
         
//Stampa vettore somma
for(i=0; i<NR; i++)
printf("La somma della riga %d vale %.3f \n", i, som[i]);

printf("\n\n");


//Stampa vettore minimi
for(i=0; i<NC; i++)
printf("Il minimo della colonna %d e' %.3f \n", i, min[i]);

printf("\n\n");
    
system("PAUSE");
return 0;   
}
