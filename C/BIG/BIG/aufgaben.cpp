#include "aufgaben.h"
#include "stdio.h"
#define _USE_MATH_DEFINES // for C
#include <math.h>


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

void a503_start() {
	int i = 5;
	int *i2 = &i;
	printf("Werte:\n%d\n", i);
	printf("%d\n", *i2);
	printf("Adressen:\n%p\n", &i);
	printf("%p\n", &i2);
}

//gehört zu 505
void berechneUmfang(float *pfUmfang, float *pfRadius) {
	*pfUmfang = 2 * M_PI * *pfRadius;
}
//gehört zu 505
void berechneFlaeche(float *pfFlaeche, float *pfRadius) {
	*pfFlaeche = M_PI * pow(*pfRadius, 2);
}
void a505_start() {
	float fRadius = 5.0;
	float fUmfang;
	float fFlaeche;

	berechneUmfang(&fUmfang, &fRadius);
	berechneFlaeche(&fFlaeche, &fRadius);
	
	printf("Diese Werte wurden berechnet mit Call by reference: %f und %f", fUmfang, fFlaeche);
}

//gehört zu 505Zusatz
void multipliziereCBR(int *piZahl1, int *piZahl2, int *piProdukt) {
	*piProdukt = *piZahl1 * *piZahl2;
}
//gehört zu 505Zusatz
int multipliziereCBV(int iZahl1, int iZahl2) {
	return iZahl1 * iZahl2;
}

void a505Zusatz_start() {
	int iZahl1 = 10;
	int iZahl2 = 8;
	int iProdukt;

	multipliziereCBR(&iZahl1, &iZahl2, &iProdukt);

	printf("Produkt auf Call by value: %i\n", multipliziereCBV(iZahl1, iZahl2));
	printf("Produkt auf Call by reference: %i\n", iProdukt);
}

void a601_start() {
	int iZaehler = 0;
	int aiArray[10];
	int iDurchschnitt = 0;

	printf("10 Zahlen eingeben:\n");
	for (iZaehler = 0; iZaehler <= 9; iZaehler++) {
		scanf_s("%d", &aiArray[iZaehler]);
		iDurchschnitt += aiArray[iZaehler];
	}

	printf("Der Durchschnitt ist: %d\n", iDurchschnitt / 10);
}

void a602_start() {
	int aiArray[100];
	float afArray[100];
	long alArray[100];
	double adArray[100];

	printf("int : %d Bytes\n", sizeof(aiArray));
	printf("long : %d Bytes\n", sizeof(alArray));
	printf("float : %d Bytes\n", sizeof(afArray));
	printf("double : %d Bytes\n", sizeof(adArray));
}