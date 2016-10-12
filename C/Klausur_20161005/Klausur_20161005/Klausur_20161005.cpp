// Klausur_20161005.cpp : Definiert den Einstiegspunkt für die Konsolenanwendung.
//

#include "stdio.h"


int main()
{
	for (int i = 11;i <= 20;i++) {
		printf("%i-er Reihe: ", i);
		for (int i2 = 1;i2 <= 10;i2++) {
			printf("%i ", i*i2);
		}
		printf("\n");
	}
    return 0;
}

