//
//  main.c
//  Projetinfo
//
//  Created by Partouche on 10/11/2016.
//  Copyright © 2016 Partouche. All rights reserved.
#include <stdio.h>
#include <time.h>
#include "damier.h"
#include "Lesfctdedeplacementdespions.h"
#include "affichagemode1.h"





void fonctionmode1();
void fonctionmode2();
void fonctionmode3();
void fonctionmode4();



int main() {

	int bool=0;
    fonctionturorielmode1();
	//Menu Principal
while (bool==0) {

    printf("      **  Bienvenue dans le jeu de l'Halma !\n");
    printf("1. Voulez-vous une partie à deux joueurs ?: 1 \n");
    printf("2. Voulez-vous une partie à un joueur vs l'ordinateur ?: 2\n");
    printf("3. Voulez-vous une partie à quatres joueurs ? : 3\n");
    printf("4. Voulez-vous voir jouer deux ordinateur l'un contre l'autre ? mode Machine vs Machine : 4\n");
    printf("5. Voulez-vous voir jouer quatres ordinateur les uns contre les autres ?: 5\n");
    int nombredejoueur;
    scanf("%d" ,&nombredejoueur);

	switch (nombredejoueur){
		case 1:
			bool=1;
            fonctionmode1();
		break;
		case 2:
			bool=1;
            fonctionmode2();
		break;
		case 3:
            bool=1;
            fonctionmode3();
            break;
		case 4:
            bool=1;
            fonctionmode4();
		break;
        case 5:
            bool=1;
            fonctionmode5();
		default:
			bool=0;
			printf("Veuillez sélectionner un mode existant ,c'est à dire compris entre 1 et 4 inclus\n");

	}
}
    return 0;
}
