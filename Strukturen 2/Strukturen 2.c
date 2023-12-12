#include <stdio.h>
#include <string.h>
#pragma warning(disable : 4996) 



typedef struct
{
	int KNr;
	char Vorname[20];
	char Nachname[20];
} customer;

int main(int argc, char* argv[]) {
	customer Kunde1 = { 1, "Hans", "Maurer" };
	customer Kunde2;
	scanf("%d %s %s", &Kunde2.KNr, Kunde2.Vorname, Kunde2.Nachname);
	printf("%d: %s %s\n", Kunde1.KNr, Kunde1.Vorname, Kunde1.Nachname);
	printf("%d: %s %s\n", Kunde2.KNr, Kunde2.Vorname, Kunde2.Nachname);
	return 0;
}
