// 3_13_20161005.cpp : Definiert den Einstiegspunkt für die Konsolenanwendung.
//

#include "stdio.h"


int main()
{
	int iZaehler;
	for (int i = 1;i <= 25;i++) {
		printf("%d\n", i);
	}
	iZaehler = 1;
	while (iZaehler <= 25) {
		printf("%d\n", iZaehler);
		iZaehler++;
	}
	iZaehler = 1;
	do {
		printf("%d\n", iZaehler);
		iZaehler++;
	} while (iZaehler<=25);
    return 0;
}

