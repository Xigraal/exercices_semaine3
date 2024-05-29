/*
 * Nom du fichier: Exercices_semaines3.c
 * Auteur: Thanisma Even Marcelin
 * Date: 2024/05/18
 * Description:Listes d'exercices de la semaine 3 pour le cours d'INF147
 */

#define _CRT_SECURE_NO_WARNINGS // pour ignorer les erreurs pour scanf_s
#define MAX 10
#define M_PI 3.1416
#define EPSILON 0.0001
#define FACTEUR_DE_SECURITE 0.5
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>


 // declaration de mes sous fonctions
void ex_1();
void ajoute_a(int* , int*);
char lettre = 'A';
char change_casse(char*);
double rotation_de_valeurs(double* nombre_a, double* nombre_b, double* nombre_c);




/*
*Nom de l'exercice: Exercices_semaines1.c
* main()
* Description:programme qui test les differents exercices de la semaine 2
* Paramètres: aucun
* Retour : status de la fin du programme
*/
int main() {

	int choix;

	int a = 10;
	int b = 15;
	char lettre = 'A';
	double nb_a = 0.25;
	double nb_b = 47.45;
	double nb_c = 7.01;

	printf("Menu des exercices de la semaine1 :\n");
	printf(" 1 => ex_1\n");
	printf(" 2 => ex_2\n");
	printf(" 3 => ex_3\n");
	printf(" 4 => ex_4\n");
	printf("5 => Pour voir le code secret.\n");
	printf("6 => Pour mettre fin au programme.\n");


	do {
		printf("\n\nVeuillez entrez votre choix: ");
		scanf(" %d", &choix);

		switch (choix) {
		case 1:
			printf("\nCe programe permet de pratiquer les pointeurs=> \n\n");
			ex_1();
			break;
		case 2:
			printf("\nCe programe permet de faire la somme de deux nombre entiers => \n\n");
			ajoute_a(&a, &b);
			printf("%d\n", a);
			break;
		case 3:
			printf("\nCe programe permet de changer une lettre majuscule en minuscule => \n\n");
			change_casse(&lettre);
			printf("%c\n", lettre);
			break;
		case 4:
			printf("\nCe programe  permet d’obtenir la valeur d’un point x de type double sur une courbe => \n\n");
			rotation_de_valeurs(&nb_a,&nb_b, &nb_c);
			printf("\t%.2lf\t%.2lf\t%.2lf\n", nb_a, nb_b, nb_c);
			break;
		case 5:
			printf("La vie d'un futur  ingenieur est comme un code à deboguer:");
			printf("chaque probleme est une enigme a resoudre, et chaque \n");
			printf("solution nous rapproche un peu plus de la perfection.\n");
			printf("Ainsi, chaque défi est une opportunité de croissance,\n");
			printf("et chaque obstacle surmonte est une preuve\n");
			printf("de sa determination et de son ingeniosite.");
			break;
		case 6:
			printf("Fin du programme.\n");
			break;
		default:
			printf("Choix invalide. Veuillez réessayer.\n");
		}

	} while (choix != 6);

	// garde la console ouverte
	system("pause");
	return EXIT_SUCCESS;
}
void ex_1() {

		long v1 = 5;
		long v2 = 10;
		long* p1 = &v1;
		long* p2 = &v2;
		long* p3 = p2;

		*p1 = 20;
		p2 = p1;

		//printf("%ld %ld %ld ", v1, v2,*p2);

	    v1 = 25;
		v2 = 30;

		//printf("%ld %ld ", *p1, *p3);

		p3 = &v1;
		*p3 = 40;
		*p2 = v2 + *p1;
		p1 = p2;

		printf("%ld %ld ", *p1, v1);
	}

void ajoute_a(int* p1, int* p2) {
	*p1 += *p2;
}

char change_casse(char* lettre) {
	if (*lettre >= 'A' && lettre <= 'Z') {
		*lettre += 32;
	}
}

double rotation_de_valeurs(double* nombre_a, double* nombre_b, double* nombre_c) {

	double temp = 0;
	temp = *nombre_a;
	*nombre_a = *nombre_c;
	*nombre_c = *nombre_b;
	*nombre_b = temp;

}