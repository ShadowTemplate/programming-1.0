#include <stdio.h>

int x;
int main(){
    printf("Inserisci un numero intero ");
    scanf("%d", &x);
    x%2==0 ? printf("E' pari.\n\n") : printf("E' dispari.\n\n");
    
    
system("PAUSE");
return 0;   
}
