#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <conio.h>
#include <ctype.h> //Pour le toupper
#include <string.h>
#define SIZE 20

int main() {

	char nom[SIZE];
	char prenom[SIZE];
	char sexe[SIZE];
	char ch;

	printf("Entrez votre nom de famille : ");
	scanf_s("%s", nom, sizeof(nom));

	printf("\nEntrez votre prenom : ");
	scanf_s("%s", prenom, sizeof(prenom));

	printf("\nQuel est votre sexe ? (H/F/N pour non renseigné) : ");
	ch = _getch();
	ch = toupper(ch);
	printf("%c", ch);

	switch (ch) {
		case 'H':
			strcpy_s(sexe, _countof(sexe), "Monsieur");
			break; //break le switch
		case 'F':
			strcpy_s(sexe,_countof(sexe), "Madame");
			break;
		case 'N':
			strcpy_s(sexe,_countof(sexe), "");
			break;
	}

	printf("\n\n%s %s %s\n", sexe, prenom, nom);

}