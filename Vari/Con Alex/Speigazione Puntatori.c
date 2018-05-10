#include <stdio.h>

#define DIM 25

void modifica_valori( int *, int *);
void foo( int, int );
void leggiVettore( int *, int );
void stampa( int *, int );

int main()
{
 	 /*
	  int a = 5, b = 3;
 	 int *pA;
 	 pA = &a;
 	 
 	 printf("prima della chiamata della funzione a = %d b = %d\n", a, b);
 	 foo(*pA,b);
 	 printf("dopo la chiamata della funzione foo() a = %d b = %d\n", a, b);
 	 modifica_valori( &a, &b);
 	 printf("dopo la chiamata della funzione modifica() a = %d b = %d\n", a, b);
	 */
	 
	 int n;
	 int a[DIM];
	 
	 printf("Inserisci numero di elementi del vettore : \n");
	 scanf("%d", &n);
	 printf("Inserisci %d valori \n", n);
	 leggiVettore( a , n );
	 stampa(a,n);
	 
	 
	 system("PAUSE");
	 return 0;	 
	 
}

void modifica_valori( int *x, int *y )
{
   *x = 3;
   *y = 5; 	 
	  
	  
}
void foo( int x, int y )
{
 x = 3;
 y = 5; 	 
	  
	  
}

void leggiVettore( int *vett, int n )
{
  int i;
  for( i = 0; i < n; i++ )
  	   scanf("%d", (vett+i)); // scanf("%d", &vett[i]); 
	  
	  
}
void stampa( int *vett , int n )
{
 int i;
 printf("I valori inseriti sono : \n");
 for( i = 0; i < n; i++ )
 	  printf("%d ", *(vett+i) );
 printf("\n"); 	 
	  
}
