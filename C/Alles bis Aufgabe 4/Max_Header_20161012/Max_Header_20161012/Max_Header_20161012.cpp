// Max_Header_20161012.cpp : Definiert den Einstiegspunkt für die Konsolenanwendung.
//

#include "stdio.h"
#include "max.h"

int main()
{
	float fZahl1, fZahl2;
	printf("Geben Sie eine Zahle ein: ");
	scanf_s("%f",&fZahl1);
	printf("\nGeben Sie noch eine Zahle ein: ");
	scanf_s("%f", &fZahl1);

	printf("Die groessere Zahl ist %.2f\n",max(fZahl1,fZahl1));
    return 0;
}

