// 4_03_2016109.cpp : Definiert den Einstiegspunkt für die Konsolenanwendung.
//

#include "stdio.h"
#include "berechnung.h"


int main()
{
	int iRadius = 0;

	printf("Geben sie den Radius ein: ");
	scanf_s("%d", &iRadius);

	printf("Umfang: %f / Flaeche: %f\n", umfang(iRadius), flaeche(iRadius));
	
	return 0;
}

