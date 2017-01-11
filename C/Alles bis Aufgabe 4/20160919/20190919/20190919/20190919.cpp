//Programm in der Vorlesung vom 20190919
//
#include "stdio.h"
#define PI 3.14 //symbolische konstante ersetzt zeichen im code

int main()
{
	//Konstanten
	const double PI_LOCAL = 3.14;
	//Variablendeklaration
	int iZahl = 5, iZahl2 = 5; //Speicherplatz von 32 Bit / 8 Byte
	short iShortZahl = 5; //Speicherplatz von 16 bit / 4Byte
	unsigned short iShortUnsignedZahl = 5; //Ohne Minus Werte = Doppelte Anzahl von Werten möglich durch ein bit vorne
	float fKomma = 12.456;
	char cZeichen = 'A';


	//Bitverschiebung
	iZahl = iZahl << 1; //Verschieben an x Stellen nach links
	iZahl2 = iZahl2 >> 1; //Verschiebung an x Stellen nach rechts

						  //Bitverschiebung Ausgabe
	printf("Bitverschiebung nach link von 5 nach %i und nach rechts von 5 nach %i\n", iZahl, iZahl);

	//Platzhalter für die Ausgabe und formatierte Ausgabe
	printf("Hallo Welt!, %i und dann noch die float %.3f\n", iZahl, fKomma);

	//Char ausgeben
	printf("%-20c\n", cZeichen); //Linksbündig und 20 Zeichen ausgeben

								 //Länge eines Datentypes ausgeben
	printf("ein Float ist %2d Bit gross!\n", sizeof(fKomma) * 8);

	//Modulo = berechnet den Rest von Teilungen
	iZahl = iZahl % 2; //Ergibt 1, weil die 2 zweimal in die 5 geht und ein Rest 1 übrig bleibt

					   //TypeCasting
	float fType = (float)iZahl;

	//EIngeben eines einzelnen Zeichens
	printf("Bitte eine Zeichen eingeben:\n");
	char cZeichenEInlesen = getchar();
	printf("Zeichen: %c\n", cZeichen);


	//Einlesen von Daten
	int iTag, iMonat, iJahr;
	scanf_s("%i.%i.%i", &iTag, &iMonat, &iJahr);
	printf("%04i-%02-%02i\n", iJahr, iMonat, iTag);

	return 0;
}