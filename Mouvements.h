#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "Initialisation.h"
#include "Affichage.h"
#include "Saisie.h"


int deplacerUnPion(int xSelectionne,int ySelectionne,int plateau[TAILLE][TAILLE]);
int verificationDeDeplacement(int plateau[TAILLE][TAILLE],int xDepart,int yDepart,int xArrive,int yArrive);
int testDeCase(int plateau[TAILLE][TAILLE],int x,int y);
void selectionnerUnPion(int* xSelectionne,int* ySelectionne,int joueur);