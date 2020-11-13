#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <ctype.h>
#define SIZE 30

int taille_mot(char *string) {
	int compteur = 0;
	while (*(string + compteur) != '\0') {
		compteur+=1;
	}
	return compteur;
}

int main() {

	int condition = 1;

	char mot[SIZE];
	char mot_brut[SIZE];

	printf("Entrez un mot : ");
	scanf_s("%s", mot_brut, sizeof(mot_brut));

	for (int i = 0; i < taille_mot(mot); i++) {
		mot[i] = tolower(mot_brut[i]);
	}

	for (int i = 0; i < taille_mot(mot) / 2; i++) {

		if (mot[i] != mot[taille_mot(mot) - i-1]) {
			condition = 0;
			printf("\n%d", condition);
		}
		if (condition == 0) { break; }
	}

	if (condition == 1) {
		printf("\n%s est un palindrome", mot_brut);
	}
	else { printf("\n%s n est pas un palindrome\n", mot_brut); }

}