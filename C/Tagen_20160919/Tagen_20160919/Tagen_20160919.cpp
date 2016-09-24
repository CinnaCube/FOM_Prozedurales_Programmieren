// Tagen_20160919.cpp : Definiert den Einstiegspunkt für die Konsolenanwendung.
//

#include "stdio.h"


int main()
{
	int iTage;
	printf("Gib die verdammten Tage ein: \n");
	scanf_s("%i", &iTage);
	printf("In Std: %i, in Min %i, in Sek %i\n", iTage*24, iTage*24*60, iTage*24*60*60);
    return 0;
}

