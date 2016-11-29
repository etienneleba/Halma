#include "mouvements.h"
#define TAILLE 10

int main (void){

    //Déclarations des variables
    int quitter = 0,quitterPartie = 0,quitterMenu = 0,nbDeJoueurs;
    Plateau plateauDeJeu;
    Case caseSelectionne,caseOriginJoueur1,caseOriginJoueur2;

    //Plateau *plateau,Case originJoueur1,Case originJouer2,int joueur1,int joueur2);

    do { //Boucle principale du jeu
        
        do { //Boucle du menu
            afficherLeMessageDuMenu();
            nbDeJoueurs = 2;
            quitterMenu = 1;
        } while (quitterMenu != 1);
        
        //Initialisation du jeu
        initialisation(&plateauDeJeu,&caseOriginJoueur1,&caseOriginJoueur2,1,2);
        
        do { //Boucle de la partie en cours
        
            selectionnerUnPion(&caseSelectionne,joueur);
            deplacerUnPion(&plateauDeJeu,&caseSelectionne);
            
            if (joueur < nbDeJoueurs)
                joueur++;
            else 
                joueur = 1;
            
        }while (quitterPartie != 1);
        
        
    }while (demandeNouvellePartie());
    
    system("clear");
    return 0;
}