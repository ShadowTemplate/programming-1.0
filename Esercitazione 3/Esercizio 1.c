/*Esercizio 1
Scrivere un programma per
a) Leggere n valori interi in un vettore a
b) Visualizzare gli elementi del vettore a
c) Invertire l’ordine degli elementi di a
d) Visualizzare gli elementi del vettore a*/

#include <stdio.h>
#define numvet 10
int main()
{
    int i=0;
    int vet[numvet];
    int fine;
    int t;
    int elem; //elementi inseriti nel vettore
    int meta;


printf("Inserimento dati in un vettore. Potrai inserire al massimo 10 elementi\n");
printf("Per iniziare ad assegnare i valori al vettore digita 1, altrimenti digita 0\n");
scanf("%d", &fine);
printf("\n\n\n");
    
while (0!= fine)
{
if(i<10)
{
printf("Inserisci l'elemento numero %d del vettore\n", i+1);
scanf("%d", &vet[i]);
i++;
printf("\nPremi 1 per un altro valore, 0 per terminare\n");
scanf("%d", &fine);
printf("\n\n");
} //fine if
else {
     printf("Errore. Hai raggiunto il limite massimo di numeri inseribili\n\n");
     fine=0;
} //fine else
} //fine while   


//Mostra elementi
elem=i;
printf("Hai inserito %d valori\n\n", elem);
i=0;
t=0;
printf("Gli elementi del vettore sono: \n\n"); 
for(t=0; t<elem; t++) 
{printf("%d \n", vet[i]);
i++;
}

//Inversione vettore
meta=elem/2;
printf("\n\n\nInversione del vettore\n");
    for(i=0; i<meta; i++)
    {
    t=vet[i];
    vet[i]=vet[elem-1-i];
    vet[elem-1-i]=t;
}

//Stampa vettore inverso
i=0;
printf("Gli elementi del vettore inverso sono: \n\n"); 
for(t=0; t<elem; t++) 
{printf("%d \n", vet[i]);
i++;
}


system("PAUSE");
return 0;   
}
