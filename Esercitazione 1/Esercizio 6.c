#include <stdio.h>
#include <math.h>
#include <limits.h>

int main(){
    int x=1;
    double potenza=1;
    
    while(x<63)
    {
    potenza=pow(2,x);
    x++;
    printf("\n %.0f", potenza);
}
    
system("PAUSE");
return 0;   
}
