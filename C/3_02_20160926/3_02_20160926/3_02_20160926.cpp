// 3_02_20160926.cpp : Definiert den Einstiegspunkt für die Konsolenanwendung.
//	Aufgabe 3.02 aus Skript

#include "stdio.h"


int main()
{
	int i1, i2;
	scanf_s("%d,%d", &i1, &i2);
	(i1 < i2) ? printf("i1 ist kleiner als i2") : (i1 > i2) ? printf("ist ist groesser als i2\n") : (i1 == i2) ? printf("i1 ist gleich i2\n") : printf("kann nicht passieren!\n");
    return 0;
}

