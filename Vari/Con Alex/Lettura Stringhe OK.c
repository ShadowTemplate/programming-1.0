//Ordinamento stringhe

#define NUM 10
#define LEN 25
#include <stdio.h>
#include <string.h>

 typedef char vet[NUM];
    // typedef vet elenco[NUM]
    vet stringa[LEN];
    
void lettura (vet);
void buffer();


int main()

{
    int i=0;
    int temp=0;
    int scelta=0;
    char cestino;
    int ris=0;
     
    
    printf("Quante stringhe vuoi inserire?: ");
    scanf("%d", &scelta);
    buffer();
   
   
    
    for(i=0; i<scelta; i++) {
			  printf("Inserisci stringa max %d\n", LEN);
             lettura(stringa[i]);
             
            
      }
      
      
      
      printf("\n\n%s\n\n", "Hai inserito queste stringhe");
      
      i=0;
      
      for(i=0; i<scelta; i++) {
             printf("%d) %s\n", i+1, stringa[i]);
      }
      
  /*   strcpy( stringa[0], stringa[1]);
          printf("\n\n%s\n\n", "1 come 2");
      
      i=0;
      
      for(i=0; i<=scelta; i++) {
             printf("%d) %s\n", i+1, stringa[i]);
      }
    */
      
      
      //Ordinamento
           /*
      temp=scelta-1;
      int sentinella;
      int t;
      sentinella=1;
      i=0;
      
      do{
   
               sentinella=0;
               
               ris= strcmp( stringa[i], stringa[i+1]);
               if(ris>0) {
                        strcpy(stringa[scelta], stringa[i]);
                        strcpy(stringa[i], stringa[i+1]);
                        strcpy(stringa[i+1], stringa[scelta]);                        
                        sentinella++;
                        
               
                                              }
               i++;
              
          
      
}
while(sentinella!=0 && i<1000);

      printf("\n\n%s\n\n", "In ordine alfabetico sono:");
      
      i=0;
      
      for(i=0; i<scelta; i++) {
             printf("%d) %s\n", i+1, stringa[i]);


}
*/    
    system("PAUSE");
    return 0;
    
}


void lettura (vet str)
{
     int i=0;
     char c;
     
        
     c=getchar();
     while(c!='\n' && i<LEN)
     {
         str[i]=c;
         i++;
         c=getchar();
		                  
                  
     }
     str[i]='\0';
     
     /*
        int i=0;
        char c;
     
        printf("Inserisci stringa max %d\n\n", LEN);
	   while( ( c = getchar() ) != EOF && c != '\n' && i < LEN )
		  str[i++] = c;
      str[i] = '\0';
	 
	 
	 
	 */
     }
     
     
void buffer()
{
 	 char c;
 	 while ((c=getchar())!='\n');
 	 
 	 
	 }

