/* Esercizio 1
Scrivere un programma, utilizzando typedef e memcpy per
a) Leggere un elenco di nomi
b) Visualizzare i nomi dell’elenco */

     
    #include <stdio.h>
    #include <string.h>
     
    #define LungElenco 100
    #define LungNome 30
     
    int main()
     
    {
     
    typedef char name[LungNome];
    name ins_nome, elenco[LungElenco];
     
    int n, i, j;
     
    printf("QUESTO PROGRAMMA CONSENTE DI INSERIRE E VISUALIZZARE UN ELENCO DI NOMI\n\n");
     
    printf("Quanti nomi vuoi inserire?\n");
       scanf("%d", &n);
     
    while (n>LungElenco || n==0)
       {
     
       printf("Errore! Puoi inserire da 1 a %d nomi\n\n", LungElenco);
       printf("Quanti nomi vuoi inserire?\n");
          scanf("%d", &n);
     
       }
     
     
    printf("\nDopo aver digitato un nome, premi Invio per inserire il nome successivo\n\n");
     
    /* a) Leggere un elenco di nomi */
    for(i=0; i<n; i++)
          {
             {
     
             printf("Nome %d : ", i+1);
                scanf("\n%s", ins_nome);
     
             }
     
          memcpy(elenco[i], ins_nome, LungNome*sizeof(char));
     
          }
     
    /* b) Visualizzare i nomi dell’elenco */
    for(i=0; i<n; i++)
       printf("\nNome %d : %s", i+1, elenco[i]);
     
    printf("\n\n");
     
    system("pause");
     
    return 0;
     
    }
     
     
