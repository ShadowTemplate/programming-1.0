#include <stdio.h>

int main()
{
    int a, b;
    int mcd;
    int somma;
    float media;
    int scelta;
    
    printf("Inserisci due valori per a e b\n\n");
    scanf("%d", &a);
    scanf("%d", &b);
    
    printf("Digita 1 per sommarli, 2 per farne la media, 3 per uscire dal programma\n\n");
    scanf("%d", &scelta);
    
    switch(scelta)
    {
                  case 1: 
                       { somma=a+b;
                       printf("La sommma e' %d\n\n", somma);
                                   } break;
                  case 2:
                       { somma=a+b;
                       media=somma/2;
                       printf("La media e' %.3f\n\n", media);
                                   } break;
                  default: break;
                  }
    
    
    
    
system("PAUSE");
return 0;   
}
