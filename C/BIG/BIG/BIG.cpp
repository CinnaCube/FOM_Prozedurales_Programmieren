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
		case 803:
			a803_start();
			break;
		case 804:
			a804_start();
			break;
		case 83:
			a83_start();
			break;
		case 807:
			a807_start();
			break;
		case 84:
			a84_start();
			break;
		case 901:
			a901_start();
			break;
		case 902:
			a902_start();
			break;
		case 903:
			a903_start();
			break;
		case 9032:
			a9032_start();
			break;
		case 9042:
			a9042_start();
			break;
		case 1001:
			a1001_start();
			break;
		case 1002:
			a1002_start();
			break;
		case 1003:
			a1003_start();
			break;
		case 10032:
			a10032_start();
			break;
		case 1004:
			a1004_start();
			break;
		case 10052:
			a10052_start();
			break;
		case 1007:
			a1007_start();
			break;
		case 1101:
			a1101_start();
			break;
		case 1102:
			a1102_start();
			break;
		case 994:
			a994_start();
			break;
		case 995:
			a995_start();
			break;
		case 996:
			a996_start();
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