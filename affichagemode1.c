//
//  affichagemode1.c
//  Projetinfo
//
//  Created by Partouche on 17/11/2016.
//  Copyright © 2016 Partouche. All rights reserved.
//
#include <unistd.h>
#include "affichagemode1.h"


void fonctionaffichagepion(int damier[18][18], int tailleI, int tailleJ){



   // couleur("41");
    printf("     1. 2. 3. 4. 5. 6. 7. 8. 9. 10 11 12 13 14 15 16\n ");
    printf("                                                   ");
    //couleur("0");
    int jbis, ibis;
    for (ibis=1 ; ibis< tailleI-1; ibis++)
    {
        if (ibis<10){
            //couleur("41");
            printf("\n %d. ", ibis);
           // couleur("0");
            printf(" ");
        }
        else{
            //couleur("41");
            printf("\n %d.", ibis);
            //couleur("0");
            printf(" ");
        }
        for (jbis=1; jbis<tailleJ-1; jbis++){
            printf("%d  ", damier[ibis][jbis]);
        }
        
    }
    printf("\n");
}

void fonctionturorielmode1(){


    int jouer=0;
    do {
        printf("\nRégles Generale : \nLe plateau de jeu est composé d’un damier de 16x16 cases de couleurs alternées. Les angles, composés de 19 cases dans le jeu à deux et de 13 cases dans le jeu à quatre, représentent les « maisons », et jouent le rôle de point de départ et en face en diagonale de point d’arrivée.\n\n");
        printf("Les Deplacements:\n     Soit en avançant d'un pas, c'est à dire en se rendant sur une case voisine laissée libre. \n     Soit en sautant par dessus une pièce (adverse ou non), comme à saute-mouton pour se rendre sur une case libre. Un pion peut sauter par dessus plusieurs pions si une case est laissée libre entre chacun de ces pions. Ce type de déplacement est à privilégier pour avancer son pion plus rapidement.");


        printf("ATTENTION : Vous ne pourrez pas annuler la saisie de vos pions de départ donc veuillez bien verifié que le pions que vous choisirai aura bien la possibilité de faire un déplacement autorisé.\n");
        printf("\nMerci d'avoir lu le tutoriel du jeu de Halma produit par Jeremy Brasse, Lillian delaplace et aussi par Raphael Partouche. Bon jeu !! \n\n\n");

        printf("Envie de passer un bon moment et jouer ?\n1. Oui \n2. Non\n");
        scanf("%d", &jouer);
        if (jouer!=1){
            printf("Dommage vous n'avez pas le choix\n");
            //usleep(int nbr_microsec);
            sleep(1);
        }
        system("clear");

    } while(jouer!=1);
}