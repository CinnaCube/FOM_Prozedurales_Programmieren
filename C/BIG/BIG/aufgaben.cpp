#include "aufgaben.h"
#include "stdio.h"


void a404_start()
{
	int iGGT, iZahl1, iZahl2;

	printf("Groesster gemeinsamer Teiler\n\n");
	printf("Bitte erste Zahl: \n");
	scanf_s("%d", &iZahl1);
	printf("Bitte zweite Zahl: \n");
	scanf_s("%d", &iZahl2);

	printf("Ergebnis: %d\n", a404(iZahl2, iZahl1));
}

int a404(int a, int b)
{
	if (a == b) {
		return a;
	}
	else if (a < b) {
		return a404(a, b - a);
	}
	else {
		return a404(a-b, b);
	}
}

void a405_start() {
	int iStelle;

	printf("Fibonacci Stelle\n\n");
	printf("Bitte Stelle angeben: \n");
	scanf_s("%i", &iStelle);

	printf("Ergebnis: %i\n", a405(iStelle));
}

int a405(int iN) {
	if (iN == 0 || iN == 1) {
		return iN;
	}
	else {
		return a405(iN - 1) + a405(iN - 2);
	}
}
