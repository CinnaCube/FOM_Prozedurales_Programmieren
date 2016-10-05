// 3_05_20160626.cpp : Definiert den Einstiegspunkt für die Konsolenanwendung.
//

#include "stdio.h"


int main()
{
	int iAlter;
	printf_s("Alter eingeben:\n");
	scanf_s("%i", &iAlter);
	(iAlter < 18 && iAlter > 0)? printf("Kind / Jugendlicher\n") : (iAlter >= 18 && iAlter < 67)? printf("Erwachsener\n") : printf("Rentner oder noch nicht geboren :P\n");
    return 0;
}

