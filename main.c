//
//  main.c
//  Projetinfo
//
//  Created by Partouche on 10/11/2016.
//  Copyright © 2016 Partouche. All rights reserved.
//

#include <stdio.h>
#include "damier.h"


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
			printf("fonctionmode2\n");
		break;
		case 3: 
            bool=1;
			printf("fonctionmode3\n");
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
