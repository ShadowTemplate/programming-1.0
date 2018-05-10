#include "header.h"

int main()
{
    int i=0;
    int vet[numvet];
    int fine;
    int t;
    int elem; //elementi inseriti nel vettore
    int max;
    int min;
    
printf("Inserimento dati in un vettore. Potrai inserire al massimo 10 elementi\n");
printf("Per iniziare ad assegnare i valori al vettore digita 1, altrimenti digita 0\n");
scanf("%d", &fine);
printf("\n\n\n");
    
while (0!= fine)
{
if(i<numvet)
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

//Calcolo max
max=vet[0];
for(i=0; i<elem; i++)
if (vet[i]>max) max=vet[i];
printf("\nIl massimo e' %d \n\n", max);

//Calcolo min
min=vet[0];
for(i=0; i<elem; i++)
if (vet[i]<min) min=vet[i];
printf("\nIl minimo e' %d \n\n", min);


    
system("PAUSE");
return 0;   
}
