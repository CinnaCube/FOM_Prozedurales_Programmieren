// Alle Aufgaben vom Prozedurales Programmieren nach 4.03
//

#include "stdio.h"
#include "aufgaben.h"

void printMenu();

int main()
{
	int iMenu;
	do {
		printMenu();
		iMenu = NULL;
		scanf_s("%d", &iMenu);
		switch (iMenu)
		{
		case 0:
			//Nur fürs Beenden
			printf("Beende das Programm, PEACE!\n");
			break;
		case 404:
			a404_start();
			break;
		case 405:
			a405_start();
			break;
		case 503:
			a503_start();
			break;
		case 504:
			//a504_start();
			break;
		case 505:
			a505_start();
			break;
		case 5052:
			a505Zusatz_start();
			break;
		case 601:
			a601_start();
			break;
		case 602:
			a602_start();
			break;
		case 603:
			a603_start();
			break;
		case 604:
			a604_start();
			break;
		case 6042:
			a604_klausuraufgabe();
			break;
		case 607:
			a607_start();
			break;
		case 608:
			a608_start();
			break;
		case 6092:
			a6092_start();
			break;
		case 8:
			a8_start();
			break;
		default:
			printf("Diese Aufgabe ist nicht implementiert!\n");
			break;
		}
	} while (iMenu != 0);
    return 0;
}

void printMenu() {
	printf("\n------------------------------------------------\n");
	printf("Waehle deine Option, du Player\n\n");
	printf("0: Exit\n");
	printf("Die Nummer der Aufgabe entspricht der Funktion z.B. 404\n");
}