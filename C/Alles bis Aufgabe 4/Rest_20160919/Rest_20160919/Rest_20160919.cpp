// Rest_20160919.cpp : Definiert den Einstiegspunkt für die Konsolenanwendung.
//

#include "stdio.h"


int main()
{
	int iSek;
	int iSek2, iMin, iStd, iDay;

	printf("Gib Sekunden ein: \n");
	scanf_s("%i", &iSek);

	iDay = iSek / (24*60*60);
	iSek = iSek % (24*60*60);

	iStd = iSek / (60*60);
	iSek = iStd % (60*60);

	iMin = iSek / 60;
	iSek = iSek % 60;

	printf("Noch %i Sekunden, noch %i Minuten, noch %i Stunden, noch %i Tage\n", iSek, iMin, iStd, iDay);
    return 0;
}

