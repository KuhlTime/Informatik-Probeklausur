#include <stdio.h>
#include <stdlib.h>

struct student {
	char name[10];
	float note;
};

void einlesen(struct student *neuerStudent) {
	printf("Nachname: ");
	scanf(" %s", &neuerStudent->name);
	printf("Note: ");
	scanf(" %f", &neuerStudent->note);
}

int main() {
	int anzahl, i;
	printf("Anzahl an Studenten: ");
	scanf(" %i", &anzahl);
	
	struct student *studenten = malloc(anzahl * sizeof(struct student));
	
	for (i=0; i < anzahl; i++) {
		einlesen(&studenten[i]);
	}
	
	/* Beste Note finden */
	float besteNote = 5.0;
	for(i=0; i < anzahl; i++) {
		float aktuelleNote = studenten[i].note;
		if(aktuelleNote < besteNote) {
			besteNote = aktuelleNote;
		}
	}
	
	/* Studenten mit besten Note ausgeben */ 
	printf("\nBesten Schüler:\n");
	for(i=0; i < anzahl; i++) {
		if(studenten[i].note == besteNote) {
			printf("\n%s - %f", studenten[i].name, studenten[i].note);
		}
	}
}
