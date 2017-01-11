// Fakultät_20161012.cpp : Definiert den Einstiegspunkt für die Konsolenanwendung.
//

#include "stdio.h"


int main()
{
	float fEinwurf = 1.0;
	int iNummer;
	
	printf("Geben sie eine Fakultaet ein: ");
	scanf_s("%d", &iNummer);
	for (int i=1; i <= iNummer; i++) {
		fEinwurf = (float)(int)fEinwurf*i;
	}
	printf("\nDas Ergebnis lautet: %.0f\n", fEinwurf);

	return 0;
}

