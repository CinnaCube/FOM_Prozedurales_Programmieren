#include "stdio.h"

/*
	Mein erstes C Programm seit langem  :P
*/

int main(){
	
	//Deklarierungsbereich START
	int iNull = 0;
	float fKomma = 10.456;
	char cZeichen = 'C';
	//Deklarationsbereiche ENDE

	//Wenn iNull gleich 0
	if (iNull == 0) {
		//Zehn mal ausführen
		for (int i = 0;i <= 10;i++) {
			//Formatierte Ausgabe über die Zeichenketten %i,%f,%s
			printf("Ergebnis: %i - %.2f - %c\n",iNull,fKomma,cZeichen);
		}
	}
    return 0;
}

