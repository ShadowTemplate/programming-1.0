#include <stdio.h>
#include <math.h>

int main(){
    float pi=0;
    int i=0;
    int NumAdd;
    printf("Quanti valori vuoi sommare?\n\n");
    scanf("%d", &NumAdd);
    
    while(i<NumAdd)
    {
     if(i%2==0) pi=pi+(4./(2*i+1));
     else pi=pi-(4./(2*i+1));                        
                   i++;
                   }
                   
                   printf("Pigreco approssimato vale %f \n\n", pi);
    
system("PAUSE");
return 0;   
}
