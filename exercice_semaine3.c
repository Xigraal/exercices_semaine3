/*
 * Nom du fichier: Exercices_semaines3.c
 * Auteur: Thanisma Even Marcelin
 * Date: 2024/05/18
 * Description:Listes d'exercices de la semaine 3 pour le cours d'INF147
 */

#define _CRT_SECURE_NO_WARNINGS // pour ignorer les erreurs pour scanf_s
#define MAX 10
#define TAILLE 20
#define NB_LIGNES1 3
#define NB_COLS1 3
#define NB_LIGNES2 4
#define NB_COLS2 4
#define M_PI 3.1416
#define EPSILON 0.0001
#define FACTEUR_DE_SECURITE 0.5
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <stdbool.h>


 // declaration de mes sous fonctions
void ex_1();
void ajoute_a(int* , int*);
void change_casse(char*);
void rotation_de_valeurs(double* nombre_a, double* nombre_b, double* nombre_c);
void ex_5(int*, int*);
void ex_6(p);
void ex_7();
void ex_8();
void ex_9(int tab[], int taille);
void ex_10(double tab[], int taille);
bool ex_11(int tab[], int taille, int val);
void ex_12(int tab[], int taille, int val);
void ex_13();
void ex_14();
void ex_15();
void ex_16();
void ex_17(int tab[][TAILLE], int taille, int* min);
void ex_18(int tab[][TAILLE], int taille, int* l, int* col);
void columnAverages(int rows, int cols, float tab[][NB_COLS2], float averages[]);




/*
*Nom de l'exercice: Exercices_semaines1.c
* main()
* Description:programme qui test les differents exercices de la semaine 2
* Paramètres: aucun
* Retour : status de la fin du programme
*/
int main() {

	srand((unsigned int)time(NULL));

	int choix;

	int a = 10;
	int b = 15;
	char lettre1 = 'A';
	char lettre2 = 'e';
	double nb_a = 0.25;
	double nb_b = 47.45;
	double nb_c = 7.01;
	int c = 0;
	int d = 0;
	int tab[TAILLE] = {0};
	double tab1[TAILLE] = { 0 };
	int tab2[TAILLE][TAILLE] = { 0 };
	int compt = 56;
	int minimum = 0;
	int l = 0;
	int col = 0;

// declaration faite par chatgpt
	int rows = 3;
	float tab3[3][4] = {
		{1.0, 2.0, 3.0, 4.0},
		{5.0, 6.0, 7.0, 8.0},
		{9.0, 10.0, 11.0, 12.0}
	};
	float averages[NB_COLS2];

	printf("Menu des exercices de la semaine2 :\n");
	printf(" 1 => ex_1\n");
	printf(" 2 => ex_2\n");
	printf(" 3 => ex_3\n");
	printf(" 4 => ex_4\n");
	printf(" 5 => ex_5\n");
	printf(" 6 => ex_6\n");
	printf(" 7 => ex_7\n");
	printf(" 8 => ex_8\n");
	printf(" 9 => ex_9\n");
	printf("10 => ex_10\n");
	printf("11 => ex_11\n");
	printf("12 => ex_12\n");
	printf("13 => ex_13\n");
	printf("14 => ex_14\n");
	printf("15 => ex_15\n");
	printf("16 => ex_16\n");
	printf("17 => ex_17\n");
	printf("18 => ex_18\n");
	printf("18 => ex_19\n");
	printf("20 => Pour voir le code secret.\n");
	printf("21 => Pour mettre fin au programme.\n");


	do {
		printf("\n\nVeuillez entrez votre choix: ");
		scanf_s(" %d", &choix);

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
			printf("\nCe programe permet de changer une lettre majuscule en minuscule et vice versa => \n\n");
			change_casse(&lettre1);
			printf("%c\n", lettre1);
			change_casse(&lettre2);
			printf("%c\n", lettre2);
			break;
		case 4:
			printf("\nCe programe  permet de faire la rotation de trois nombres => \n\n");
			rotation_de_valeurs(&nb_a,&nb_b, &nb_c);
			printf("\t%.2lf\t%.2lf\t%.2lf\n", nb_a, nb_b, nb_c);
			break;
		case 5:
			ex_5(&c,&d);
			printf("La valeur assigne a c est: %d et a d est: %d", c, d);
			break;
		case 6:
			ex_6(&nb_a);
			printf("La valeur aleatoire assigne a nb_a est: %.2lf ", nb_a);
			break;
		case 7:
			ex_7();
			break;
		case 8:
			ex_8();
			break;
		case 9:
			for (int i = 0; i < TAILLE; i++) {

				tab[i] = i + TAILLE;
			}
			tab[18] = 9;
			ex_9(tab, TAILLE);
			break;
		case 10:
			for (int i = 0; i < TAILLE; i++) {

				tab1[i] = 0.567 *( i + TAILLE);
			}
			ex_10(tab1, TAILLE);
			break;
		case 11:
			for (int i = 0; i < TAILLE; i++) {

				tab[i] = i + TAILLE;
			}
			tab[18] = 15;
			ex_11(tab, TAILLE, b);
			break;
		case 12:
			for (int i = 0; i < TAILLE; i++) {

				tab[i] = i + TAILLE;
			}
			tab[18] = 15, tab[19] = 15, tab[14] = 15, tab[15] = 15, tab[16] = 15;
			ex_12(tab, TAILLE, b);
			break;
		case 13:
			ex_13();
			break;
		case 14:
			ex_14();
			break;
		case 15:
			ex_15();
			break;
		case 16:
			ex_16();
			break;
		case 17:
			for (int i = 0; i < TAILLE; i++) {
				for (int j = 0; j < TAILLE; j++) {

				tab2[i][j] = compt++;

				}
			}
			tab2[6][6] = 43;
			ex_17( tab2, TAILLE, &minimum);
			printf("La valeur minimum est: %d", minimum);
			break;
		case 18:
			for (int i = 0; i < TAILLE; i++) {
				for (int j = 0; j < TAILLE; j++) {

					tab2[i][j] = compt++;

				}
			}
			tab2[6][6] = 43;
			ex_18(tab2, TAILLE, &l, &col);
			printf("L'index est: [%d,%d]", l, col);
			break;

		case 19:
			// appel faite par chatgp
			columnAverages(rows, NB_COLS2, tab3, averages);

			printf("Moyennes des colonnes:\n");
			for (int j = 0; j < NB_COLS2; j++) {
				printf("Colonne %d: %f\n", j, averages[j]);
			}
			break;

		case 20:
			printf("La vie d'un futur  ingenieur est comme un code à deboguer:");
			printf("chaque probleme est une enigme a resoudre, et chaque \n");
			printf("solution nous rapproche un peu plus de la perfection.\n");
			printf("Ainsi, chaque défi est une opportunité de croissance,\n");
			printf("et chaque obstacle surmonte est une preuve\n");
			printf("de sa determination et de son ingeniosite.");
			break;
		case 21:
			printf("Fin du programme.\n");
			break;
		default:
			printf("Choix invalide. Veuillez réessayer.\n");
		}

	} while (choix != 21);

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

void change_casse(char* lettre) {

	if (*lettre >= 'A' && *lettre <= 'Z') {
		*lettre += 32;
	}
	else if (*lettre >= 'a' && *lettre <= 'z') {
		*lettre -= 32;
	}
}

void rotation_de_valeurs(double* nombre_a, double* nombre_b, double* nombre_c) {

	double temp = 0;
	temp = *nombre_a;
	*nombre_a = *nombre_c;
	*nombre_c = *nombre_b;
	*nombre_b = temp;

}
void ex_5(int* pvar1, int* pvar2) {

	*pvar1 = 5;
	*pvar2 = 99;

	printf("La valeur assigne a pvar1 est: %d et a pvar2 est: %d\n", *pvar1, *pvar2);

}

void ex_6(double* p) {


	*p = ((double)rand() / RAND_MAX) * (150 - 100) + 100;

}


void ex_7() {

	int tab[TAILLE] = { 0 };

	for (int i = 0; i < TAILLE; i++) {

		tab[i] = i;

		printf(" [%d] ", tab[i]);

	}

}

void ex_8() {

	int tab[TAILLE] = { 0 };

	for (int i = 0; i < TAILLE; i++) {

		tab[i] = i + TAILLE;

		printf(" [%d] ", tab[i]);

	}

}


void ex_9(int tab[], int taille) {


	int min = tab[0];
	int index_min = 0;

	for (int i = 1; i < taille; i++) {

		if ( tab[i] < min) {

			index_min = i;
		}

	}
	printf("L'index de la valeur minimum est: %d ", index_min);

}

void ex_10(double tab[TAILLE], int taille) {

	double moyenne_tab = 0;
	int nb_element = 0;

	for (int i = 0; i < taille; i++) {

		moyenne_tab += tab[i];
		nb_element += 1;

	}
	moyenne_tab /= nb_element;
	printf("La moyenne des valeurs du tableau est: %.2lf ", moyenne_tab);

}

bool ex_11(int tab[], int taille, int val) {


	for (int i = 0; i < taille; i++) {

		if (tab[i] == val) {

			printf("Cette valeur se trouve dans le tableau a la case %d \n", i);
			return true;
		}
			

	}

			printf("Cette valeur ne se trouve pas dans le tableau\n");
			return false;
	
}

void ex_12(int tab[], int taille, int val) {

	int recurrence_val = 0;
	for (int i = 0; i < taille; i++) {

		if (tab[i] == val) {

			recurrence_val += 1;
		}

	}
	printf("Cette valeur se trouve dans le tableau %d fois.\n", recurrence_val);

}

void ex_13() {

	int compteur = 1;
	int tab[NB_LIGNES1][NB_COLS1] = { 0 };

	
	for (int i = 0; i < NB_LIGNES1; i++) {
		for (int j = 0; j < NB_COLS1; j++) {
			tab[i][j] = compteur++;
		}
	}


	for (int j = 0; j < NB_COLS1; j++) {
		for (int i = 0; i < NB_LIGNES1; i++) {

			printf(" [%d] ", tab[i][j]);
		}
		printf("\n");
	}

}

void ex_14() {

	int tab[NB_LIGNES2][NB_COLS2] = { 0 };


	for (int j = 0; j < NB_COLS2; j++) {
		for (int i = 0; i < NB_LIGNES2; i++) {

			if (i == j) {
				tab[i][j] = 1;
			}
			printf(" [%d] ", tab[i][j]);
		}
		printf("\n");
	}

}

void ex_15() {

	int tab[NB_LIGNES2][NB_COLS2] = { 0 };


	for (int j = 0; j < NB_COLS2; j++) {
		for (int i = 0; i < NB_LIGNES2; i++) {

			if (i == j || (i + j == 3)) {
				tab[i][j] = 1;
			}
			printf(" [%d] ", tab[i][j]);
		}
		printf("\n");
	}

}

void ex_16() {

	int compteur = 9;
	int tab[NB_LIGNES1][NB_COLS1] = { 0 };


	for (int i = 0; i < NB_LIGNES1; i++) {
		for (int j = 0; j < NB_COLS1; j++) {
			tab[i][j] = compteur--;
			printf(" [%d] ", tab[i][j]);
		}
		printf("\n");
	}

}

void ex_17(int tab[][TAILLE], int taille, int* min) {


	*min = tab[0][0];

	for (int i = 1; i < taille; i++) {

		for (int j = 1; j < taille; j++) {


		if (tab[i][j] < *min) {
			*min = tab[i][j];
		}
		}

	}

}
void ex_18(int tab[][TAILLE], int taille, int* l, int* col) {


	int min = tab[0][0];

	*l = 0;
	*col = 0;

	for (int i = 1; i < taille; i++) {

		for (int j = 1; j < taille; j++) {


			if (tab[i][j] < min) {
				*l = i;
				*col = j;
				min = tab[i][j];
			}
		}

	}

}

// Dernier numero fait avec chatgpt, car l'enonce n'etait pas clair

void columnAverages(int rows, int cols, float tab[][NB_COLS2], float averages[]) {
	for (int j = 0; j < cols; j++) {
		float sum = 0;
		for (int i = 0; i < rows; i++) {
			sum += tab[i][j];
		}
		averages[j] = sum / rows;
	}
}
