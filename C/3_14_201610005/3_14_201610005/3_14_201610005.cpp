// 3_14_201610005.cpp : Definiert den Einstiegspunkt für die Konsolenanwendung.
//

#include "stdio.h"


int main()
{
	int iZaehler, iZeichen;
	for (int i = 1;i <= 10;i++) {
		for (int i2 = 1;i2 <= 10;i2++) {
			printf("*");
		}
		printf("\n");
	}
	printf("While kopf\n");
	iZaehler = 1;
	iZeichen = 1;
	while (iZaehler<=10) {
		while (iZeichen<=10) {
			printf("*");
			iZeichen++;
		}
		iZeichen = 1;
		printf("\n");
		iZaehler++;
	}
	printf("While fuss\n");
	iZaehler = 1;
	iZeichen = 1;
	do {
		do {
			printf("*");
			iZeichen++;
		} while (iZeichen <= 10);
		iZeichen = 1;
		printf("\n");
		iZaehler++;
	} while (iZaehler <= 10);
    return 0;
}

