// Kreisberechnung_21060919.cpp : Definiert den Einstiegspunkt f�r die Konsolenanwendung.
//

#include <stdio.h>
#define _USE_MATH_DEFINES // for C
#include <math.h>


int main()
{
	float fRadius;
	printf("Gib den Radius eines Kreises ein:\n");
	scanf_s("%f", &fRadius);
	printf("Die Flaeche deines Kreises betr�gt %f\n", M_PI*fRadius*fRadius);
    return 0;
}

