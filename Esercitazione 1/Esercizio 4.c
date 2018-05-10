#include <stdio.h>
int x;
int main(){
     printf("Attenzione: digita -1 per terminare il codice\n\n"); 
     while(x!=-1){
     printf("Digita un numero... \n");
     scanf("%d", &x);
     if(x%2==0) printf("Il numero %d e' pari.\n\n", x);
     else printf("Il numero e' dispari.\n");
     }
     
     
           
system("PAUSE");
return 0;
}           
     
     
