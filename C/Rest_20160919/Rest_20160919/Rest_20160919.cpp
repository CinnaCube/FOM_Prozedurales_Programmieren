// Rest_20160919.cpp : Definiert den Einstiegspunkt für die Konsolenanwendung.
//

#include "stdio.h"


int main()
{
	float iSek;

	printf("Gib Sekunden ein: \n");
	scanf_s("%i", &iSek);

	printf("Noch %f Sekunden, noch %f Minuten, noch %f Stunden\n", (24*60*60)%(iSek), (24*60)%(iSek/60), 24%(iSek/60/60));
    return 0;
}

