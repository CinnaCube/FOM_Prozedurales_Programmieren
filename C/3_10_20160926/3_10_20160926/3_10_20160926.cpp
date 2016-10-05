// 3_10_20160926.cpp : Definiert den Einstiegspunkt für die Konsolenanwendung.
//

#include "stdio.h"


int main()
{
	int iTag;
	printf("Geben sie den Wochentag anhand von 1-7 ein\n");
	scanf_s("%d", &iTag);

	switch (iTag)
	{
	case 1:
	case 2:
	case 3:
		printf("Erste Wochenhaelfte\n");
		break;
	case 4:
	case 5:
		printf("Zweite WOchenhaelfte\n");
		break;
	case 6:
	case 7:
		printf("Wochenende\n");

		break;
	default:
		printf("Kein Wochentag");
		break;
	}
	return 0;
}

