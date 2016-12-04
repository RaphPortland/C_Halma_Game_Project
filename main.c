//
//  main.c
//  Projetinfo
//
//  Created by Partouche on 10/11/2016.
//  Copyright © 2016 Partouche. All rights reserved.
#include <stdio.h>
#include "damier.h"
#include "Lesfctdedeplacementdespions.h"
#include "affichagemode1.h"

void fonctionmode1();
void fonctionmode3();


int main() {
	printf("Bievenue dans le jeu de Halma \n");
	int bool=0;

	//Menu Principal
while (bool==0) {
	
    printf("1. Voulez vous jouer une personne vs une personne : 1 \n");
    printf("2. Voulez vous jouer a une personne vs l'ordinateur : 2\n");
    printf("3. Voulez vous jouer a quatres personne : 3\n");
    printf("4. Voulez vous voir jouer deux ordinateur c.a.d mode Machine vs Machine : 4\n");
    int nombredejoueur;
    scanf("%d" ,&nombredejoueur);

	switch (nombredejoueur){
		case 1:
			bool=1;
            fonctionmode1();
		break;
		case 2:
			bool=1;
            
            printf("fonctionmode2");
		break;
		case 3: 
            bool=1;
            fonctionmode3();
            break;
		case 4:
            bool=1;
			printf("fonctionmode4");
		break;
		default: 
			bool=0;
			printf("Veuillez sélectioner un mode existant c'est a dire compris en 1 et 4 inclus\n");

	}
}
    return 0;
}
