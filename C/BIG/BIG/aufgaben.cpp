#include "aufgaben.h"
#include "stdio.h"
#include "stdlib.h"
#include "string.h"
#define _USE_MATH_DEFINES // for C
#include <math.h>

//fuer 1101
#define ADD(wert1, wert2) ((wert1) + (wert2))
#define MULT(wert1, wert2) ((wert1) * (wert2))
//fuer 1102
#define MAXVALUE(zahl1, zahl2) (((zahl1)>(zahl2))?(zahl1):(zahl2))



void a404_start()
{
	int iGGT, iZahl1, iZahl2;

	printf("Groesster gemeinsamer Teiler\n\n");
	printf("Bitte erste Zahl: \n");
	scanf_s("%d", &iZahl1);
	printf("Bitte zweite Zahl: \n");
	scanf_s("%d", &iZahl2);

	printf("Ergebnis: %d\n", a404(iZahl2, iZahl1));
}

int a404(int a, int b)
{
	if (a == b) {
		return a;
	}
	else if (a < b) {
		return a404(a, b - a);
	}
	else {
		return a404(a-b, b);
	}
}

void a405_start() {
	int iStelle;

	printf("Fibonacci Stelle\n\n");
	printf("Bitte Stelle angeben: \n");
	scanf_s("%i", &iStelle);

	printf("Ergebnis: %i\n", a405(iStelle));
}

int a405(int iN) {
	if (iN == 0 || iN == 1) {
		return iN;
	}
	else {
		return a405(iN - 1) + a405(iN - 2);
	}
}

void a503_start() {
	int i = 5;
	int *i2 = &i;
	printf("Werte:\n%d\n", i);
	printf("%d\n", *i2);
	printf("Adressen:\n%p\n", &i);
	printf("%p\n", &i2);
}

//geh�rt zu 505
void berechneUmfang(float *pfUmfang, float *pfRadius) {
	*pfUmfang = 2 * M_PI * *pfRadius;
}
//geh�rt zu 505
void berechneFlaeche(float *pfFlaeche, float *pfRadius) {
	*pfFlaeche = M_PI * pow(*pfRadius, 2);
}
void a505_start() {
	float fRadius = 5.0;
	float fUmfang;
	float fFlaeche;

	berechneUmfang(&fUmfang, &fRadius);
	berechneFlaeche(&fFlaeche, &fRadius);
	
	printf("Diese Werte wurden berechnet mit Call by reference: %f und %f", fUmfang, fFlaeche);
}

//geh�rt zu 505Zusatz
void multipliziereCBR(int *piZahl1, int *piZahl2, int *piProdukt) {
	*piProdukt = *piZahl1 * *piZahl2;
}
//geh�rt zu 505Zusatz
int multipliziereCBV(int iZahl1, int iZahl2) {
	return iZahl1 * iZahl2;
}

void a505Zusatz_start() {
	int iZahl1 = 10;
	int iZahl2 = 8;
	int iProdukt;

	multipliziereCBR(&iZahl1, &iZahl2, &iProdukt);

	printf("Produkt auf Call by value: %i\n", multipliziereCBV(iZahl1, iZahl2));
	printf("Produkt auf Call by reference: %i\n", iProdukt);
}

void a601_start() {
	int iZaehler = 0;
	int aiArray[10];
	int iDurchschnitt = 0;

	printf("10 Zahlen eingeben:\n");
	for (iZaehler = 0; iZaehler <= 9; iZaehler++) {
		scanf_s("%d", &aiArray[iZaehler]);
		iDurchschnitt += aiArray[iZaehler];
	}

	printf("Der Durchschnitt ist: %d\n", iDurchschnitt / 10);
}

void a602_start() {
	int aiArray[100];
	float afArray[100];
	long alArray[100];
	double adArray[100];

	printf("int : %d Bytes\n", sizeof(aiArray));
	printf("long : %d Bytes\n", sizeof(alArray));
	printf("float : %d Bytes\n", sizeof(afArray));
	printf("double : %d Bytes\n", sizeof(adArray));
}

void a603_start() {
	int aiArray[10] = {5,4,3,5,6,7,4,3,50,1};
	int iZaehler, iInnen, iHash;
	for (iZaehler = 0; iZaehler < 9; iZaehler++) {
		/*
		NICHT OPTIMIERT
		for (iInnen = 0; iInnen < 9; iInnen++) {
		*/
		for (iInnen = 0; iInnen < 9-iZaehler; iInnen++) {
			if (aiArray[iInnen] > aiArray[iInnen + 1]) {
				iHash = aiArray[iInnen + 1];
				aiArray[iInnen + 1] = aiArray[iInnen];
				aiArray[iInnen] = iHash;
			}
		}
	}

	printf("Die Zahlenfolge ist: \n");
	for (iZaehler = 0; iZaehler < 10; iZaehler++) {
		printf("Stelle %d, %d\n", iZaehler, aiArray[iZaehler]);
	}
}

void a604_start() {
	int aiPaare[][2] = { {1,2},{3,4},{5,6},{7,8},{9,10} };

	for (int i = 0; i < 5; i++) {
		printf("Erste Dimension Stelle %d: Werte %d und %d und Produkt %d\n",i,aiPaare[i][0],aiPaare[i][1], aiPaare[i][0]*aiPaare[i][1]);
	}
}
void a604_klausurAusgabe(int aiArray[8][8]) {
	printf("\n");
	for (int i = 0; i < 8; i++) {
		for (int j = 0; j < 8; j++) {
			printf("|%d", aiArray[i][j]);
		}
		printf("\n");
	}
}
void a604_klausuraufgabe() {
	int aiArray[8][8] = { 0 };
	int aiArray1[8][8] = { 0 };
	int aiArray2[8][8] = { 0 };
	int aiArray3[8][8] = { 0 };

	int *piZeiger = &aiArray3[0][0];

	for (int i = 0; i < 8; i++) {
		aiArray[i][i] = 1;
	}
	a604_klausurAusgabe(aiArray);

	for (int i = 0; i < 8; i++) {
		aiArray1[i][7-i] = 1;
	}
	a604_klausurAusgabe(aiArray1);

	//jede zweite zeile 1
	for (int i = 0; i < 8; i+=2) {
		for (int j = 0; j < 8; j++) {
			aiArray2[i][j] = 1;
		}
	}
	a604_klausurAusgabe(aiArray2);

	//mit Zeigerarythmetik
	for (int i = 0; i < 8; i++) {
		*piZeiger = 1;
		piZeiger += 8 + 1;
	}
	a604_klausurAusgabe(aiArray3);
}

void a607_start() {
	int aiArray[10] = { 0,1,2,3,4,5,6,7,8,9 };
	float afArray[10] = {.0,.1,.2,.3,.4,.5,.6,.7,.8,.9};

	int *piZeiger;
	float *pfZeiger;

	piZeiger = &aiArray[0];
	pfZeiger = &afArray[0];

	for (int i = 0; i < 10; i++) {
		printf("%d und %.1f\n",*piZeiger++,*pfZeiger++);
	}
}
//gehoert zu 608
int berechneProdukt(int aiFeld[], int iLaenge) {
	int iCount;
	int iProdukt = 1;
	for (iCount = 0; iCount < iLaenge;iCount++) {
		iProdukt *= aiFeld[iCount];
	}
	return iProdukt;
}

void a608_start() {
	int aiArray[10], iCount;
	for (iCount = 0; iCount < 10;iCount++) {
		scanf_s("%i", &aiArray[iCount]);
	}

	int iErgebnis = berechneProdukt(aiArray, 10);

	printf("Produkt: %i\n", iErgebnis);
}

float getAverage(int *array, int *groesse) {
	float fErgebnis;
	int iSumme=0;
	for (int iCount = 0; iCount < *groesse; iCount++) {
		iSumme += *(array + iCount);
	}
	fErgebnis = iSumme / *groesse;
	return fErgebnis;
}

void a6092_start() {
	int iLaenge;
	printf("Laenge des Arrays eingeben:\n");
	scanf_s("%i", &iLaenge);
	
	int *piZeigerAufArray = (int *) calloc(iLaenge, sizeof(int));
	printf("Werte eingeben:\n");
	for (int iCount = 0; iCount < iLaenge; iCount++) {
		scanf_s("%i", piZeigerAufArray + iCount);
	}
	float fAverage = getAverage(piZeigerAufArray, &iLaenge);

	printf("Ergebnis: %.2f", fAverage);
}
//klausur verketten
void a8_start() {
	char test1[100] = "Einigkeit und Recht und Freibier";
	char test2[100] = "Freiheit";
	char *pcPointer = test1;
	for (int iCount = 0; iCount < strlen(test1); iCount++) {
		if (*pcPointer == 'F') {
			iCount = strlen(test1);
		} else {
			pcPointer++;
		}
	}
	*pcPointer = '\0';
	strcat_s(test1,test2);
	printf("%s", test1);
}

void a803_start() {
	char *acVornamen[5] = { "Rene", "Thomas", "Max", "Jonas", "Jesus" };
	char *acNachnamen[5] = {"Kasseboehmer", "Cruell", "Vorwieger", "Betha", "Heilig"};

	char cAusgabe[81];

	int iZahl;

	for (iZahl = 0; iZahl < 5; iZahl++) {
		strcpy_s(cAusgabe, acVornamen[iZahl]);

		while (strlen(cAusgabe) != 80 - strlen(acNachnamen[iZahl])) {
			strcat_s(cAusgabe, "_");
		}
		strcat_s(cAusgabe, acNachnamen[iZahl]);
		printf("%s\n", cAusgabe);
	}
}

void a804_start() {
	char sPfad[] = "C:\\Eigene Dateien\\FOM\\804\\main.c";

	char *pcBack = strrchr(sPfad, '\\');
	char *pcEnd = strrchr(sPfad, '.');

	
	printf("%s\n", pcEnd + 1);
	printf("%s\n", pcBack + 1);

	*pcBack = '\0';
	printf("%s\n", sPfad);
}

void a82_start() {
	char saText[] = "Ich bin dein Vater, Duke!";

	char *ptr = strstr(saText, "Duke");

	*ptr = '\0';

	strcat(saText, "Luke!");

	printf("%s", saText);
}

void a83_start() {
	char text1[100] = "Moege die Macht doch bleiben wo sie ist!";
	char text2[100] = " mit euch sein!";

	char *ptr = strstr(text1, " doch bleiben wo sie ist!");

	*ptr = '\0';

	strcat(text1, text2);
	// oder strcpy(ptr, text2);

	printf("%s\n", text1);
}

void a807_start() {
	char string[] = "Paris 111,Berlin 6,London 16,Rom 28";
	char *ptr = strtok(string, ",");
	int iSumme = 0;

	while (ptr!=NULL) {
		ptr = strchr(ptr, ' ');
		iSumme += atoi(ptr);
		ptr = strtok(NULL, ",");
		
	}
	printf("Summe ist: %i\n", iSumme);
	
}

void a84_start() {
	char string[] = "15.06.2012#08:15:00#Zahnarzttermin#privat";
	char *ptr = strtok(string, "#");

	printf("Aufgabe:\nDatum: %s\n", ptr);
	ptr = strtok(NULL, "#");
	char *ptr2 = strrchr(ptr, ':');
	*ptr2 = '\0';
	printf("Uhrzeit: %s\n", ptr);
	ptr = strtok(NULL, "#");
	printf("Termin: %s\n", ptr);
	ptr = strtok(NULL, "#");
	printf("Typ: %s\n", ptr);
}

void a901_start() {
	struct spender {
		float betrag;
		char vorname[30];
		char nachname[30];
	};

	struct spender einSpender;
	//char* einlesen = einSpender.vorname;
	printf("Vorname eingeben:\n");
	scanf("%s", einSpender.vorname);
	printf("Nachname eingeben:\n");
	scanf("%s", einSpender.nachname);
	printf("Betrag eingeben:\n");
	scanf("%f", &einSpender.betrag);

	//strcpy_s(einSpender.vorname, einlesen);

	printf("vorname: %s, nachname: %s, betrag: %f\n", einSpender.vorname, einSpender.nachname, einSpender.betrag);
}

void a902_start() {
	struct kunde {
		char name[30];
		char vorname[30];
	};

	struct rechnung {
		struct kunde kundeninfos;
		float rechnungsbretag;
	};

	struct rechnung Rechnung1;

	printf("Name eingeben:\n");
	scanf("%s", Rechnung1.kundeninfos.name);
	printf("Vorname eingeben:\n");
	scanf("%s", Rechnung1.kundeninfos.vorname);
	printf("Betrag eingeben:\n");
	scanf("%f", &Rechnung1.rechnungsbretag);

	printf("Daten: \n Name: %s\n Vorname: %s\n Betrag: %f", Rechnung1.kundeninfos.name, Rechnung1.kundeninfos.vorname, Rechnung1.rechnungsbretag);
}

struct spender {
	float betrag;
	char vorname[30];
	char nachname[30];
};

void einlesen_a903(struct spender* x) {
	printf("Vorname eingeben:\n");
	scanf("%s", x->vorname);
	printf("Nachname eingeben:\n");
	scanf("%s", x->nachname);
	printf("Betrag eingeben:\n");
	scanf("%f", &x->betrag);
}

void ausgeben_a903(struct spender x) {
	printf("vorname: %s, nachname: %s, betrag: %f\n", x.vorname, x.nachname, x.betrag);
}

void a903_start() {
	struct spender einSpender;
	einlesen_a903(&einSpender);
	ausgeben_a903(einSpender);
}
struct fahrzeug {
	float preis;
	char hersteller[30];
	char modell[30];
};

//KLausuraufgabe
void einlesen_a9032(struct fahrzeug* x) {
	printf("hersteller eingeben:\n");
	scanf("%s", x->hersteller);
	printf("modell eingeben:\n");
	scanf("%s", x->modell);
	printf("preis eingeben:\n");
	scanf("%f", &x->preis);
}

void ausgeben_a9032(struct fahrzeug x) {
	printf("hersteller: %s, modell: %s, preis: %f\n", x.hersteller, x.modell, x.preis);
}

void a9032_start() {
	struct fahrzeug einAuto;
	einlesen_a9032(&einAuto);
	ausgeben_a9032(einAuto);
}

struct person {
	char* vorname;
	char* nachname;
	int alter;
};

//Klausuraufgabe
void a9042_start() {
	struct person daten[] = { {"Vin","Diesel", 48},
	{"Jason","Statham", 48},{"Jet","Li",52} };

	struct person* pPerson;
	
	pPerson = daten;

	for (int i = 0; i <= 2; i++) {
		printf("%s %s, %i\n", pPerson->vorname, pPerson->nachname, pPerson->alter);
		pPerson++;
	}
}

void a1001_start() {
	FILE* file1 = fopen(".\\dateien\\1001.txt", "w");

	if (file1==NULL) {
		printf("Datei konnte nicht geoeffnet werden!\n");
	} else {
		printf("Datei konnte geoeffnet werden!\n");

		fclose(file1);
		printf("Datei geschlossen!\n");
	}
}

void a1002_start() {
	FILE* file1 = fopen(".\\dateien\\1002.txt", "w");
	int array1[5] = {1,2,3,4,5};
	int array2[5];
	int i = 0, itemp;

	if (file1 == NULL) {
		printf("Datei konnte nicht geoeffnet werden!\n");
	} else {
		printf("Datei konnte geoeffnet werden!\n");
		for (i = 0; i < 5; i++) {
			fprintf(file1, "%i\n", array1[i]);
		}

		fclose(file1);
		printf("Datei geschlossen!\n");
	}

	file1 = fopen(".\\dateien\\1002.txt", "r");
	i = 0;
	while (fscanf(file1,"%i",&itemp)!=EOF) {
		array2[i] = itemp;
		printf("zeile %i:%i\n",i+1, itemp);
		i++;
	}
	fclose(file1);
}

void a1003_start() {
	FILE* file1 = fopen(".\\dateien\\log.csv", "r");
	char datum[11];
	char uhrzeit[6];
	char login[30];


	if (file1 == NULL) {
		printf("Datei konnte nicht geoeffnet werden!\n");
	} else {
		printf("Datei konnte geoeffnet werden!\n");
		
		while (fscanf(file1, "%10s,%5s,%s", &datum, &uhrzeit, &login) != EOF) {
			printf("Datum:\t%s\nUhrzeit:\t%s Uhr\nLogin:\t%s\n", datum, uhrzeit, login);
		}

		fclose(file1);
		printf("Datei geschlossen!\n");
	}
}
//KLausuraufgabe
void a10032_start() {
	FILE* file1 = fopen(".\\dateien\\auto.csv", "r");
	char zeile[100];
	char *ptr;
	char ausgabe[100];
	float fSumme = 0.0;
	int Zahl=0;

	while (fscanf(file1, "%s", zeile)!=EOF) {
		ptr = strtok(zeile, ":");
		//printf("%s\n", ptr);
		ptr = strtok(NULL, ":");
		//printf("%s\n", ptr);
		fSumme += atoi(ptr);
		Zahl++;
	}
	printf("Durchschnitt: %.2f", fSumme/Zahl);

	fclose(file1);
}

void a1004_start() {
	FILE *ori = fopen(".\\dateien\\auto.csv", "r"), *cpy = fopen(".\\dateien\\kopie.csv", "w");
	char puffer[100];

	while (fgets(puffer, 100, ori)) {
		fputs(puffer, cpy);
	}
	fcloseall();
}

void a1005_start() {
	//Vom Olli gemacht. Zum �ben selber machen.
	FILE *csv;
	char puffer[100];
	char *ptr;

	csv = fopen(".\\dateien\\log.csv", "r");

	while (fgets(puffer, 100, csv)) {
		ptr = strtok(puffer, ",");
		printf("IP:%s", ptr);
		ptr = strtok(NULL, ",");
		printf("Uhrzeit:%s", ptr);
		ptr = strtok(NULL, ",");
		printf("User:%s", ptr);
	}
	fclose(csv);
}

//KLausuraufgabe WICHTIG 20 PUnkte
void a10052_start() {
	FILE *datei;
	char zeile[30];
	char *ptr;
	int summe = 0;
	int groesster = 0;
	int raumnummer = 0;

	datei = fopen(".\\dateien\\raeume.txt", "r");
	if (datei == NULL) {
		printf("Die Datei konnte nicht gefunden werden!");
	} else {
		while (fgets(zeile, 30, datei)) {
			ptr = strrchr(zeile, ',');
			summe += atoi(ptr+1);
			if (groesster < atoi(ptr + 1)) {
				groesster = atoi(ptr + 1);
				ptr = strtok(zeile, ",");
				raumnummer = atoi(ptr);
			}
		}

		printf("Summe:%i Groesster Raum:%i", summe, raumnummer);
	}

	fclose(datei);
}

void a1007_start() {
	FILE *flatfile;
	char *ptr;
	char zeile[100];
	flatfile = fopen(".\\dateien\\flatFile.txt", "r+");
	if (flatfile == NULL) {
		printf("Datei konnte nicht geoeffnet werden!");
	} else {
		//Eine Zeile hat 62 Zeichen plus 1 fuer den Zeilenumbruch
		fseek(flatfile, 63 + 63 + 15, SEEK_SET);
		fputs("Martina", flatfile);
		fseek(flatfile, 63 + 63 + 30, SEEK_SET);
		fputs("m.hill@web.de", flatfile);
	}
	fclose(flatfile);
}

void a1101_start() {
	int addieren = ADD(1, 3) * ADD(2, 4);
	printf("%d\n", addieren);

	int multi = MULT(1+2, 5+1);
	printf("%d\n", multi);
}

void a1102_start() {
	int zahlA = 4, zahlB = 7;

	int maxInt = MAXVALUE(zahlA, zahlB);

	printf("Max-Int: %i\n", maxInt);

	//--------------------------------------
	float zahlX = 12.6, zahlY = 0.8;

	float maxFloat = MAXVALUE(zahlX, zahlY);

	printf("Max-Float: %.1f\n", maxFloat);
}

//KLausurvorbereitungsaufgaben vom 20170120
void a994_start() {
	char array[5][4] = { { 'A','B','C','D' },
						{ 'E','F','G','H' },
						{ 'I','J','K','L' },
						{ 'M','N','O','P' },
						{ 'Q','R','S','T' }, };
	for (int i = 0; i < 5;i++) {
		printf("Zeile %i:",i+1);
		for (int i2 = 0; i2 < 4;i2++) {
			printf(" %c", array[i][i2]);
		}
		printf("\n");
	}
}

void a995_start() {
	char zeile[] = "Artikel:Google Chromecast;Nettopreis:30.50";

	char *ptr;

	ptr = strtok(zeile, ";");
	ptr = strchr(ptr, ':');
	ptr++;
	printf("%s ", ptr);
	ptr = strtok(NULL, ";");
	ptr = strchr(ptr, ':');
	ptr++;
	printf("%.2f\n", atof(ptr)*1.19);
}

struct Auto {
	int ps;
	char* hersteller;
	char modell[100];
};

void drucken(struct Auto auto1) {
	printf("Hersteller: %s\n",auto1.hersteller);
	printf("Modell: %s\n",auto1.modell);
	printf("PS: %i\n",auto1.ps);
}
void drucken(struct Auto* auto1) {
	printf("Hersteller: %s\n", auto1->hersteller);
	printf("Modell: %s\n", auto1->modell);
	printf("PS: %i\n", auto1->ps);
}

void a996_start() {
	
	struct Auto auto1;
	auto1.ps = 130;
	auto1.hersteller = "VW";
	//auto1.modell = "Golf";
	strcpy(auto1.modell, "Golf");

	drucken(auto1);

	drucken(&auto1);
}

void l001_start() {
	int i = 12, i2 = 21, i3 = 5;

	i = i << 1;
	i2 = i2 << 1;
	i3 = i3 << 1;

	printf("%i,%i,%i\n", i,i2,i3);

	i = 16;
	i %= 5;
	printf("%i\n", i);
}