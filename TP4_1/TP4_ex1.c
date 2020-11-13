#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include "tp4.h"

int main() {

	HEURE HeureDebut, HeureFin, Duree;
	HeureDebut.heure = 12; HeureDebut.minute = 30;
	Duree.heure = 0; Duree.minute = 45;
	HeureFin.heure = HeureDebut.heure + Duree.heure;
	HeureFin.minute = HeureDebut.minute + Duree.minute;

	if (HeureFin.minute >= 60) {
		HeureFin.minute = HeureFin.minute % 60;
		HeureFin.heure += 1;
	}

	printf("L'heure de fin est %d : %d", HeureFin.heure, HeureFin.minute);
}