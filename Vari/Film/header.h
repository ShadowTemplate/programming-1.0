#include <stdio.h>
#include <stdlib.h>
#define FILENAME "film.txt"
#define FILENAME2 "alfabetico.txt"
#define FILENAME3 "durata.txt"
#define FILENAME4 "anno.txt"
#define LEN 40
#define TIT 30
#define OPT1 "1. Stampa l'elenco dei film"
#define OPT2 "2. Aggiungi un film"
#define OPT3 "3. Ordina per titolo"
#define OPT4 "4. Ordina per durata"
#define OPT5 "5. Ordina per anno"
#define OPT6 "6. Esci"


void menu (void);
void stampa (void);
void aggiungi (void);
void buffer (void);
void alfabetico (void);
void duratasort (void);
void annosort (void);
int numerorighe (FILE *);

typedef struct
{
		char titolo[TIT];
		int anno;
		int durata;		
}FILM;

typedef char TITOLOFILM[TIT];
typedef TITOLOFILM ELENCOTITOLI[100];
typedef FILM ARRAY[100]; 
	
