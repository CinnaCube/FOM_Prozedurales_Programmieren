// 3_02_20160926.cpp : Definiert den Einstiegspunkt für die Konsolenanwendung.
//	Aufgabe 3.02 aus Skript

#include "stdio.h"


int main()
{
	scanf_s("%d,%d", &int i1, &int i2);
	(i1 < i2) ? printf("i1 ist kleiner als i2") : (i1 > i2) ? printf("ist ist groesser als i2\n") : printf("i1 ist gleich i2\n");
    return 0;
}

