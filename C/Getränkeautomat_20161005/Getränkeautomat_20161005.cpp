// Getränkeautomat_20161005.cpp : Definiert den Einstiegspunkt für die Konsolenanwendung.
//

#include "stdio.h"


int main()
{
	float fPreis, fEinwurf;
	int iNummer;
	printf("Getraenke Automat V0.2\n\nWaehlen sie ihr Getraenk aus:\n1) Wasser (0.50 Euro)\n2) Limonade (1.00 Euro)\n3) Bier (2.00 Euro)\n\nGeben Sie 1, 2 oder 3 ein:");

	scanf_s("%f", &fNummer);
	printf("\n\n Bitter werfen Sie %f ein",fNummer);
	switch (iNummer) {
	case 1:
		fPreis = 0.50;
		break;
	case 2:
		fPreis = 1.00;
		break;
	case 3:
		fPreis = 2.00;
		break;
	default:
		printf("falsche eingabe!");
		return 0;
		break;
	}
	scanf_s("%f", &fEinwurf);
	if (fEinwurf == fPreis) {
		printf("Vielen Dank, bitte entnehmen Sie ihr Getraenk.");
	}
	else {
		printf("Falscher Einwurf!");
	}
			return 0;
}

