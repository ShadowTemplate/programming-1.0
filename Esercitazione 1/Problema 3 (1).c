/* Calcolare e scrivere, se esistono, le radici reali di un'equazione di 2° grado a coefficienti
reali, digitati da tastiera.
La soluzione deve segnalare l'esistenza o non esistenza di radici reali e, quando
esistono,se sono coincidenti o distinte.
Realizzare due implementazioni: una che utilizza l'istruzione if e l'altra che utilizza ? */
#include <stdio.h>

main()
{
 	  float a, b, c, delta, x1, x2; //Dichiarazione di coefficienti e radici dell'equazione
 	  printf(" Inserisci i valori dei coefficienti "); //Inserisci valori dei coefficienti
 	  scanf("%f %f %f",&a,&b,&c); //Assegna i valori alle variabili
 	  printf("\n I coefficienti inseriti sono %f %f %f \n\n", a,b,c); //Mostra valore dei coefficienti
 	  delta=b*b-4*a*c; //Calcolo del delta
 	  printf("\n Delta vale %f \n\n", delta); //Mostra valore dei coefficienti
 	  
 	  if(delta==0.)
 	  {x1=-b/2*a;
 	  x2=x1;
	   printf(" L'equazione ha due radici reali coincidenti. x1=x2= %f \n", x1);
	  }
	  else if (delta>0.)
	  {x1=(-b-sqrt(delta))/(2*a);
	  x2=(-b+sqrt(delta))/(2*a);
	  printf(" L'equazione ha due radici reali distinti \n x1= %f \n x2= %f\n\n", x1,x2);
	  }
	  else
	  {printf(" L'equazione ha radici complesse\n\n");
	  }
	  
 	system("PAUSE");
 	return 0;
}
