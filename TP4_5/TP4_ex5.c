#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <ctype.h>
#define SIZE 1024

int taille_phrase(char* string) {
	int compteur = 0;
	while (*(string + compteur) != '\0') {
		compteur += 1;
	}
	return compteur;
}

int main() {

	char phrase[SIZE];
	int nb_lettres=0;
	int nb_mots=0;
	int compteur = 0;
	int rang;


	printf("Tapez votre phrase : ");
	gets_s(phrase, SIZE);
	for (int i = 0; i < taille_phrase(phrase); i++) {
		if(phrase[i]!=' '){
			rang = i;
			while (phrase[rang] != '\0') {
				if (phrase[rang] == ' ') {
					nb_lettres += compteur;
					if (phrase[rang - 1] != ' ') { nb_mots++; }
					compteur = 0;
				}
				else { compteur++; }
				rang++;
			}
			nb_mots++;
			nb_lettres += compteur;
			break;
		}
	}

	if (nb_mots > 0) {
		float moyenne = (float)nb_lettres / (float)nb_mots;
		printf("\nIl y a %d mots qui ont une longueur moyenne de %.2f caractères.\n", nb_mots, moyenne);
	}
	else { printf("\nIl n'y a pas de mots\n"); }

}