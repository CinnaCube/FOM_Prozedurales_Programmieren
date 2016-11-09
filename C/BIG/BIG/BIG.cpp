// Alle Aufgaben vom Prozedurales Programmieren nach 4.03
//

#include "stdio.h"
#include "aufgaben.h"

void printMenu();

int main()
{
	int iMenu;
	do {
		scanf_s("%d", &iMenu);
		switch (iMenu)
		{
		case 1:
			a404_start();
		case 2:
			a405_start(); 
		default:
			break;
		}
	} while (iMenu != 0);
    return 0;
}

void printMenu() {
	printf("Waehle deine Option, du Player\n\n");
	printf("0: Exit\n");
	printf("1: 4.04\n");
	printf("2: 4.05\n");
}