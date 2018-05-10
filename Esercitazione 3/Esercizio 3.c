/* Esercizio 3
Scrivere un programma per
a) Leggere n caratteri in un vettore c
b) Visualizzare gli elementi di c
c) Leggere un carattere c
d) Ricercare c nel vettore e stampare il risultato */

#include <stdio.h>
#define numvet 10
int main()
{
    int i=0;
    int vet[numvet]; // una cifra è considerata carattere ed una lettera è convertita in intero.
    int fine;
    int t;
    int elem; //elementi inseriti nel vettore
    int temp; //temporanea
    char scelta;
    int contatore=0; //del carattere
        
printf("Inserimento dati in un vettore. Potrai inserire al massimo 10 caratteri\n");
printf("Per iniziare ad assegnare i valori al vettore digita 1, altrimenti digita 0\n");
scanf("%d", &fine);
printf("\n\n");
    
while (0!= fine)
{
if(i<10)
{
printf("Inserisci l'elemento numero %d del vettore\n", i+1);
scanf("%c", &temp); //brucio il primo valore - bug della scanf con il &c
vet[i]=getchar(); // QUI sto assegnando il valore al vettore!!!
i++;
printf("Premi 1 per un altro valore, 0 per terminare\n");
scanf("%d", &fine);
} //fine if
else {
     printf("Errore. Hai raggiunto il limite massimo di caratteri inseribili\n\n");
     fine=0;
} //fine else
} //fine while   


//Mostra elementi
elem=i;
printf("Hai inserito %d caratteri\n\n", elem);
i=0;
t=0;
printf("Gli elementi del vettore sono: \n\n"); 
for(t=0; t<elem; t++) 
{
         putchar(vet[i]);
         printf("\n");
i++;
}

//Controllo carattere

printf("Scegli un carattere \n\n");
scanf("%d", &temp); //brucio il carattere - bug Scanf carattere
scelta=getchar();
printf("Hai scelto ");
putchar(scelta);
printf("\n\n");

for(i=0; i<elem; i++)

         if(scelta==vet[i]) contatore++;

printf("Il carattere e' stato trovato %d volte\n\n", contatore);                  


system("PAUSE");
return 0;   
}
