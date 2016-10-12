// Taschenrechner_Funktionen_20161012.cpp : Definiert den Einstiegspunkt für die Konsolenanwendung.
//

#include "stdio.h"

float eingabeZahl() {
	float fZahl;
	printf("Bitte eine Zahl eingeben: ");
	scanf_s("%f", &fZahl);
	return fZahl;
}

float multipliziere(float fZahl1, float fZahl2) {
	return fZahl1 * fZahl2;
}

void ausgabeErgebnis(float fErgebnis) {
	printf("Das Ergebnis lautet %.2f \n", fErgebnis);
}

int main()
{
	ausgabeErgebnis(multipliziere(eingabeZahl(), eingabeZahl()));
    return 0;
}

