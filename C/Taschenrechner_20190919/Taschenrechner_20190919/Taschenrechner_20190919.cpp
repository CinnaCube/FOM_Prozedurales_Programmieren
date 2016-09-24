// Taschenrechner_20190919.cpp : Definiert den Einstiegspunkt für die Konsolenanwendung.
//

#include "stdio.h"


int main()
{
	float fZahl1, fZahl2;
	printf("Gib eine Zahl ein:\n");
	scanf_s("%f", &fZahl1);
	printf("Gib eine Zeite Zahl ein:\n");
	scanf_s("%f", &fZahl2);
	printf("Dies ist die Summe deiner Zahlen: %f\n",fZahl1+fZahl2);
	return 0;
}

