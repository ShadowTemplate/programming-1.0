/*Scrivere un programma, utilizzando typedef e memcpy per 
a) Leggere per riga, in una matrice a, di cardinalità NR x NC,  n x m  elementi ( con 
n numero effettivo di righe,   m numero effettive di colonne) . 
b)  Visualizzare  la matrice  per  riga 
c) Visualizzare la matrice per colonna 
a) Per ogni riga, calcolare la somma degli elementi e memorizzarla in un vettore 
somma (da dichiarare opportunamente) 
b) Visualizzare  il vettore somma 
c) Per ogni colonna, estrarre il minimo e memorizzarlo in un vettore minimo  (da 
dichiarare opportunamente) 
d) Visualizzare  il vettore minimo 
Suggerimento: 
 dichiarare la matrice come un array di NR righe, dove ciascuna riga è un array di NC 
colonne ;  utilizzando typedef per definire il  
tipo riga – array di NC elementi  ed il tipo matrice – array di NR elementi di tipo riga*/

#include <stdio.h>
#include <limits.h>
#define NC 3
#define NR 5

int main(){
   
    typedef int colonne[NC];
    typedef colonne matrice[NR];
    colonne x;
    matrice y;
    int scelta, scelta1,
        i, j,
        minimo, m[NC],
        somma, s[NR];

do{
    printf ("Inserire numero di righe, massimo 5: \n");
    scanf ("%d", &scelta);
}
    while (scelta<0 || scelta>NR);
    
do{
    printf ("\nInserire numero di colonne, massimo 3: \n");
    scanf ("%d", &scelta1);
}
    while (scelta1<0 || scelta1>NC);
    
    for (j=0; j<scelta; j++){
        printf ("\nInserire i valori: \n");
        for (i=0; i<scelta1; i++)scanf ("%d", &x[i]);
        
        memcpy(y[j], x, sizeof(x));
    }
        
    printf ("\nVisualizza la matrice per riga: \n");
    for (j=0; j<scelta ; printf ("\n"), j++){
        for (i=0; i<scelta1; printf ("%d ", y[j][i]), i++);
    }
        
    printf ("\nVisualizza la matrice per matrice: \n");
    for (i=0; i<scelta1 ; printf ("\n"), i++){
        for (j=0; j<scelta; printf ("%d ", y[j][i]), j++);
    }
        
    printf ("\nVisualizza il minimo per colonne: \n");
    for (i=0; i<scelta1; i++){
        for (j=0, minimo=INT_MAX; j<scelta; j++){
            if (y[j][i]<minimo){
                minimo=y[j][i];  
                m[i]=minimo;
            }
        }
        printf ("%d ", m[i]);
        printf ("\n");
    }
                               
    printf ("\nVisualizza la somma per righe: \n");
    for (j=0; j<scelta; j++){
        for (i=0, somma=0; i<scelta1; i++){
             somma+=y[j][i];
             s[j]=somma;
        }
        printf ("%d ", s[j]);
        printf ("\n");
    }
    
system ("pause");
return 0;
}

    
