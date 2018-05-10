#include "header.h"

void menu()
{
 	 int scelta=1;
	 do{
	 
	  printf("Menu: \n");
	  puts(OPT1);
	  puts(OPT2);
	  puts(OPT3);
	  puts(OPT4);
	  puts(OPT5);
	  puts(OPT6);
	  
	  do{

 	  printf("\nScegli un'azione: ") ;
	  scanf("%d", &scelta);
	  }
	  while(scelta<1 || scelta>6);
	  
	  switch(scelta) {
  case 1: 
       printf("\n\nHai scelto ");
	   puts(OPT1);
       stampa();
       printf("\n\n\n");
       break;
  case 2:
       printf("\n\nHai scelto "); 
   	   puts(OPT2);      
   	   aggiungi();
       printf("\n\n\n");
	   break;
  case 3:
       printf("\n\nHai scelto ");       
	   puts(OPT3);
	   alfabetico();
       printf("\n\n\n");
       break;
  case 4:                    
       printf("\n\nHai scelto ");       
	   puts(OPT4);
	   duratasort();
       printf("\n\n\n");
       break; 
  case 5:                    
       printf("\n\nHai scelto ");       
	   puts(OPT5);
	   annosort();
       printf("\n\n\n");
       break; 	       
 }
	    
}
while(scelta!=6);
	 
	 }
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
void stampa (void)
{
 	 FILE *fp;
 	 if ( ( fp = fopen(FILENAME, "r") ) == NULL) perror("error >> ");
 	 else{
 	 char riga[LEN];
 	 printf("\n\nContenuto del file %s\n", FILENAME);
 	 printf("\n");
 	 
 	 while(fgets(riga, LEN, fp)!=NULL) printf("%s", riga);
	 fclose(fp);
	 };
	 
 }
	 
	 
	 
	 
	 
	 
	 
	 
	 
void aggiungi ()
{
 	 FILE *fp;
	 if ( ( fp = fopen(FILENAME, "a+") ) == NULL ) perror("error >> ");
	 int i=0;
 	 int choise;
 	 int choise2;
 	 char c;
	 FILM nuovo;
	 printf("\n\n");
 	 buffer();
 	 printf("Inserisci il titolo: ");
 	 gets(nuovo.titolo);
 	 printf("\nInserisci l'anno: ");
 	 scanf("%d", &nuovo.anno);
 	 printf("\nInserisci la durata (min.): ");
 	 scanf("%d", &nuovo.durata);
 	 printf("\n\nStai inserendo:\n\n");
	 printf("%s\t%d %d\n", nuovo.titolo, nuovo.anno, nuovo.durata);
	 do{
	 printf("\nPremi 1 per confermare, 0 per modificare le informazioni: ");
	 scanf("%d", &choise);
	 
	 if(choise==0){
	 printf("\n");
	 buffer();
	 do{
	 printf("Scegli 1 per cambiare il titolo, 2 per l'anno, 3 per la durata: ");
	 scanf("%d", &choise2);
	 }
	 while(choise2 < 1 || choise2 > 3);
	 switch(choise2){
	   
	 case 1:
  	 printf("\n");
  	 buffer();
 	 printf("Inserisci il titolo: ");
 	 gets(nuovo.titolo);	   		
     break;
	   		
     case 2:
  	 printf("\n");
  	 buffer();
 	 printf("Inserisci l'anno: ");
 	 scanf("%d", &nuovo.anno);			 
     break;	
	 		 
	 case 3:
  	 printf("\n");
  	 buffer();
 	 printf("Inserisci la durata (min.): ");
 	 scanf("%d", &nuovo.durata);	 				 
     break;	 
					 };

	 
	 };

 	 printf("\nInserirai: ");
 	 printf("%s\t%d %d\n", nuovo.titolo, nuovo.anno, nuovo.durata);
	 }

	 while(choise!=1 && choise!=0); 


fprintf(fp, "\n");
fprintf(fp, "%s\t%d %d", nuovo.titolo, nuovo.anno, nuovo.durata);
fclose(fp);
}
	 





void alfabetico (void)
{
 	 
 	 FILE *fp;
 	 FILE *fp2;
	 char titolotemp[TIT];
	 ELENCOTITOLI titologet;
 	 int a;
 	 char c;
	 char buffer[LEN];
	 int i = 0;	 
	 int j = 0;
	 ARRAY array; 
 	 
 	 if( ( fp = fopen(FILENAME, "r") ) == NULL) 
	  	 perror("error >> ");
 	 else
	  {
 	   	 if( ( fp2 = fopen(FILENAME2, "w") ) == NULL)
			 perror("error >> ");
 			  else{
		 	   	  a=numerorighe(fp);
		 		  printf("L'elenco ordinato e' stato creato nel file %s", FILENAME2); 
				   
	rewind(fp);
	for(j=0; j<a; j++)
	
	{
	 		 i = 0;
			  while( ( c = fgetc(fp) ) != '\t' && i < TIT )
			  titolotemp[i++] = c; 
				   
		   titolotemp[i] = '\0'; 
	 		 
			 strcpy(array[j].titolo, titolotemp); 
 
			  
			  fscanf(fp, "\t%d %d\n", &array[j].anno, &array[j].durata );

			  }	;
			  
j=0;
i=0; 
int scambi=1;
char temporaneo[TIT];
while ( scambi !=0 && i<= (a-2))
{ /* assegna a scambi il valore 0 */
scambi=0; /* vettore ordinato*/
for (j=a-1; j>=i+1; j--)
{ 
  	if( (strcmp(array[j].titolo, array[j-1].titolo))<0) //cioè se il primo viene prima del secondo
{// li scambio
strcpy(temporaneo, array[j].titolo);
strcpy(array[j].titolo, array[j-1].titolo);
strcpy(array[j-1].titolo, temporaneo);
	  };
scambi=1; /* vettore non ordinato*/
}; 
/* Il vettore a[0]....a[i] è ordinato */
i=i+1; }


i=0;
for(i=0; i<a; i++)
fprintf(fp2, "%s\t%d %d\n", array[i].titolo, array[i].anno, array[i].durata);			    

	 	  
	 	  		  fclose(fp2);
		  }
		  
		  fclose(fp);
      }

}











void duratasort (void)
{
 	 
 	 FILE *fp;
 	 FILE *fp2;
	 char titolotemp[TIT];
	 ELENCOTITOLI titologet;
 	 int a;
 	 char c;
	 char buffer[LEN];
	 int i = 0;	 
	 int j = 0;
	 ARRAY array; 
 	 
 	 if( ( fp = fopen(FILENAME, "r") ) == NULL) 
	  	 perror("error >> ");
 	 else
	  {
 	   	 if( ( fp2 = fopen(FILENAME3, "w") ) == NULL)
			 perror("error >> ");
 			  else{
		 	   	  a=numerorighe(fp);
		 		  printf("L'elenco ordinato e' stato creato nel file %s", FILENAME3); 
				   
	rewind(fp);
	for(j=0; j<a; j++)
	
	{
	 		 i = 0;
			  while( ( c = fgetc(fp) ) != '\t' && i < TIT )
			  titolotemp[i++] = c; 
				   
		   titolotemp[i] = '\0'; 
	 		 
			 strcpy(array[j].titolo, titolotemp); 
 
			  
			  fscanf(fp, "\t%d %d\n", &array[j].anno, &array[j].durata );

			  }	;
			  

			  
j=0;
i=0; 
int scambi=1;
int temporaneo;
while ( scambi !=0 && i<= (a-2))
{ /* assegna a scambi il valore 0 */
scambi=0; /* vettore ordinato*/
for (j=a-1; j>=i+1; j--)
{ 
  	if( array[j].durata < array[j-1].durata) //cioè se il primo viene prima del secondo
{// li scambio
temporaneo = array[j].durata;
array[j].durata = array[j-1].durata;
array[j-1].durata = temporaneo;
	  };
scambi=1; /* vettore non ordinato*/
}; 
/* Il vettore a[0]....a[i] è ordinato */
i=i+1; }

i=0;
for(i=0; i<a; i++)
fprintf(fp2, "%s\t%d %d\n", array[i].titolo, array[i].anno, array[i].durata);			    

	 	  
	 	  		  fclose(fp2);
		  }
		  
		  fclose(fp);
      }

}


















void annosort (void)
{
 	 
 	 FILE *fp;
 	 FILE *fp2;
	 char titolotemp[TIT];
	 ELENCOTITOLI titologet;
 	 int a;
 	 char c;
	 char buffer[LEN];
	 int i = 0;	 
	 int j = 0;
	 ARRAY array; 
 	 
 	 if( ( fp = fopen(FILENAME, "r") ) == NULL) 
	  	 perror("error >> ");
 	 else
	  {
 	   	 if( ( fp2 = fopen(FILENAME4, "w") ) == NULL)
			 perror("error >> ");
 			  else{
		 	   	  a=numerorighe(fp);
		 		  printf("L'elenco ordinato e' stato creato nel file %s", FILENAME4); 
				   
	rewind(fp);
	for(j=0; j<a; j++)
	
	{
	 		 i = 0;
			  while( ( c = fgetc(fp) ) != '\t' && i < TIT )
			  titolotemp[i++] = c; 
				   
		   titolotemp[i] = '\0'; 
	 		 
			 strcpy(array[j].titolo, titolotemp); 
 
			  
			  fscanf(fp, "\t%d %d\n", &array[j].anno, &array[j].durata );

			  }	;

j=0;
i=0; 
int scambi=1;
int temporaneo;
while ( scambi !=0 && i<= (a-2))
{ /* assegna a scambi il valore 0 */
scambi=0; /* vettore ordinato*/
for (j=a-1; j>=i+1; j--)
{ 
  	if( array[j].anno < array[j-1].anno) //cioè se il primo viene prima del secondo
{// li scambio
temporaneo = array[j].anno;
array[j].anno = array[j-1].anno;
array[j-1].anno = temporaneo;
	  };
scambi=1; /* vettore non ordinato*/
}; 
/* Il vettore a[0]....a[i] è ordinato */
i=i+1; }


i=0;
for(i=0; i<a; i++)
fprintf(fp2, "%s\t%d %d\n", array[i].titolo, array[i].anno, array[i].durata);			    

	 	  
	 	  		  fclose(fp2);
		  }
		  
		  fclose(fp);
      }

}










	 
	 
	 
void buffer (void){
	 char c;
	 while( (c=getchar()) != '\n'){}
	 
	 
	 
	 }
	 
	 

int numerorighe (FILE *fp){
	
	int cont=0;
	char riga[40];
	
	while(fgets(riga, LEN, fp)!=NULL) cont++;
	
 
	return cont;
}
