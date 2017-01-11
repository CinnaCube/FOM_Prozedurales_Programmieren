// Tankverbrauch_20160919.cpp : Definiert den Einstiegspunkt für die Konsolenanwendung.
//

#include "stdio.h"


int main()
{
	float iLiter,iKM;
	float fVerbrauch;
	printf("Gib die verbrauchten Liter ein: \n");
	scanf_s("%i", &iLiter);

	printf("Nun die gefahrenen km: \n");
	scanf_s("%i", &iKM);

	printf("Sie haben einen Verbrauch von: %f\n", iLiter*100/iKM);
	return 0;
}

