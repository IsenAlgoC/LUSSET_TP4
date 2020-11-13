#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <ctype.h>
#define SIZE 100

int main() {

	int Tab[SIZE];
	int occurence = 0;
	int nb;
	int check = 0;
	srand(time(NULL));

	for (int i = 0; i < SIZE; i++) {
		Tab[i] = (int)rand() % 100;
	}

	printf("Entrez la valeur recherchee : ");
	scanf_s("%d", &nb);

	int* curseur = &Tab[0];

	for (int i = 0; i < SIZE; i++) {
		if (*curseur == nb && check==0) {
			printf("\nLa valeurs %d a ete trouvee en %d", nb, i);
			check = 1;
		}
		else if ((*curseur == nb && check == 1)) {
			printf(", puis en %d", i);
		}
		curseur++;
	}

	if (check == 0) { printf("\nLa valeur n est pas dans le tableau.\n"); }
	else { printf("."); }

}