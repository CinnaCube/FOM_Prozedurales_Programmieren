// Getränkeautomat_20161012.cpp : Definiert den Einstiegspunkt für die Konsolenanwendung.
//

#include "stdio.h"


int main()
{
	float fPreis, fEinwurf;
	int iNummer, iAnzahl, iBezahlt = 0;
	printf("Getraenke Automat V0.2\n\nWaehlen sie ihr Getraenk aus:\n1) Wasser (0.50 Euro)\n2) Limonade (1.00 Euro)\n3) Bier (2.00 Euro)\n\nGeben Sie 1, 2 oder 3 ein: ");
	
	scanf_s("%d", &iNummer);
	printf("\nBitte geben Sie ihre gewuenschte Menge ein: ");
	scanf_s("%d", &iAnzahl);
	switch (iNummer) {
	case 1:
		fPreis = 0.50 * iAnzahl;
		break;
	case 2:
		fPreis = 1.00 * iAnzahl;
		break;
	case 3:
		fPreis = 2.00 * iAnzahl;
		break;
	default:
		printf("falsche eingabe!\n");
		return 0;
		break;
	}

	printf("\n\n---Bezahlvorgang---");
	while (fPreis >= 0.0) {
		printf("\n Bitte werfen Sie %.2f ein: ", fPreis);
		scanf_s("%f", &fEinwurf);
		if (fEinwurf < 0.0)fEinwurf = fEinwurf * (-1);
		fPreis = fPreis - fEinwurf;
		iBezahlt = 1;
	}
	if (fPreis < 0.0) {
		fPreis = fPreis * (-1.0);
		printf("Sie erhalten %.0f Rueckgeld\n", fPreis);
	}
	
	if (iBezahlt == 1) {
		printf("Vielen Dank, bitte entnehmen Sie ihr Getraenk.\n");
	}
	else {
		printf("Falscher Einwurf!\n");
	}
	return 0;
}

