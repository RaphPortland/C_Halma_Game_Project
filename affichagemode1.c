//
//  affichagemode1.c
//  Projetinfo
//
//  Created by Partouche on 17/11/2016.
//  Copyright © 2016 Partouche. All rights reserved.
//
#include <unistd.h>
#include "affichagemode1.h"


void fonctionaffichagepion(int damier[18][18], int tailleI, int tailleJ, int nbrsdejoueur){



    couleur("41");
    printf("      1.  2.  3.  4.  5.  6.  7.  8.  9.  10  11  12  13  14  15  16 \n");
    printf("                                                                     ");
    couleur("0");
    int jbis, ibis, m=0;
    for (ibis=1 ; ibis< tailleI-1; ibis++)
    {
        if (ibis<10){
            couleur("41");
            printf("\n %d. ", ibis);
            couleur("0");
            printf(" ");
        }
        else{
            couleur("41");
            printf("\n %d.", ibis);
            couleur("0");
            printf(" ");
        }
        for (jbis=1; jbis<tailleJ-1; jbis++){
            m=jbis+ibis;
            if ((nbrsdejoueur==2 && ibis==16 && jbis==16 )|| (nbrsdejoueur==2 && ibis==16 && jbis==15) ||  ( nbrsdejoueur==2 && ibis==16 && jbis==14  )   ||  ( nbrsdejoueur==2 && ibis==16 && jbis==13 )
            || (nbrsdejoueur==2 && ibis==16 && jbis==12 )|| (nbrsdejoueur==2 && ibis==15 && jbis==16) ||  ( nbrsdejoueur==2 && ibis==15 && jbis==15  )   ||  ( nbrsdejoueur==2 && ibis==15 && jbis==14 )
            || (nbrsdejoueur==2 && ibis==15 && jbis==13 )|| (nbrsdejoueur==2 && ibis==15 && jbis==12) ||  ( nbrsdejoueur==2 && ibis==14 && jbis==16  )   ||  ( nbrsdejoueur==2 && ibis==14 && jbis==15 )
            || (nbrsdejoueur==2 && ibis==14 && jbis==14 )|| (nbrsdejoueur==2 && ibis==14 && jbis==13) ||  ( nbrsdejoueur==2 && ibis==13 && jbis==16  )   ||  ( nbrsdejoueur==2 && ibis==13 && jbis==15 )
            || (nbrsdejoueur==2 && ibis==13 && jbis==14 )|| (nbrsdejoueur==2 && ibis==12 && jbis==16) ||  ( nbrsdejoueur==2 && ibis==12 && jbis==15  )
            || (nbrsdejoueur==2 && ibis==1 && jbis==1 )|| (nbrsdejoueur==2 && ibis==1 && jbis==2) ||  ( nbrsdejoueur==2 && ibis==1 && jbis==3  )   ||  ( nbrsdejoueur==2 && ibis==1 && jbis==4 )
            || (nbrsdejoueur==2 && ibis==1 && jbis==5 )|| (nbrsdejoueur==2 && ibis==2 && jbis==1) ||  ( nbrsdejoueur==2 && ibis==2 && jbis==2  )   ||  ( nbrsdejoueur==2 && ibis==2 && jbis==3 )
            || (nbrsdejoueur==2 && ibis==2 && jbis==4 )|| (nbrsdejoueur==2 && ibis==2 && jbis==5) ||  ( nbrsdejoueur==2 && ibis==3 && jbis==1  )   ||  ( nbrsdejoueur==2 && ibis==3 && jbis==2 )
            || (nbrsdejoueur==2 && ibis==3 && jbis==3 )|| (nbrsdejoueur==2 && ibis==3 && jbis==4) ||  ( nbrsdejoueur==2 && ibis==4 && jbis==1  )   ||  ( nbrsdejoueur==2 && ibis==4 && jbis==2 )
            || (nbrsdejoueur==2 && ibis==4 && jbis==3 )|| (nbrsdejoueur==2 && ibis==5 && jbis==1) ||  ( nbrsdejoueur==2 && ibis==5 && jbis==2  )

            || (nbrsdejoueur==4 && ibis==16 && jbis==16 )|| (nbrsdejoueur==4 && ibis==15 && jbis==16) ||  ( nbrsdejoueur==4 && ibis==15 && jbis==15  )   ||  ( nbrsdejoueur==4 && ibis==15 && jbis==14 )
            || (nbrsdejoueur==4 && ibis==15 && jbis==13 )|| (nbrsdejoueur==4 && ibis==16 && jbis==13) ||  ( nbrsdejoueur==4 && ibis==14 && jbis==16  )   ||  ( nbrsdejoueur==4 && ibis==14 && jbis==15 )
            || (nbrsdejoueur==4 && ibis==14 && jbis==14 )|| (nbrsdejoueur==4 && ibis==16 && jbis==14) ||  ( nbrsdejoueur==4 && ibis==13 && jbis==16  )   ||  ( nbrsdejoueur==4 && ibis==13 && jbis==15 )
            || (nbrsdejoueur==4 && ibis==16 && jbis==15 )|| (nbrsdejoueur==4 && ibis==1 && jbis==16) ||  ( nbrsdejoueur==4 && ibis==1 && jbis==15  )
            || (nbrsdejoueur==4 && ibis==1 && jbis==1 )|| (nbrsdejoueur==4 && ibis==1 && jbis==2) ||  ( nbrsdejoueur==4 && ibis==1 && jbis==3  )   ||  ( nbrsdejoueur==4 && ibis==1 && jbis==4 )
            || (nbrsdejoueur==4 && ibis==1 && jbis==14 )|| (nbrsdejoueur==4 && ibis==2 && jbis==1) ||  ( nbrsdejoueur==4 && ibis==2 && jbis==2  )   ||  ( nbrsdejoueur==4 && ibis==2 && jbis==3 )
            || (nbrsdejoueur==4 && ibis==2 && jbis==4 )|| (nbrsdejoueur==4 && ibis==2 && jbis==16) ||  ( nbrsdejoueur==4 && ibis==3 && jbis==1  )   ||  ( nbrsdejoueur==4 && ibis==3 && jbis==2 )
            || (nbrsdejoueur==4 && ibis==3 && jbis==3 )|| (nbrsdejoueur==4 && ibis==1 && jbis==13) ||  ( nbrsdejoueur==4 && ibis==4 && jbis==1  )   ||  ( nbrsdejoueur==4 && ibis==4 && jbis==2 )
            || (nbrsdejoueur==4 && ibis==2 && jbis==15 )|| (nbrsdejoueur==4 && ibis==2 && jbis==14) ||  ( nbrsdejoueur==4 && ibis==2 && jbis==13  )

            || (nbrsdejoueur==4 && ibis==16 && jbis==2 )|| (nbrsdejoueur==4 && ibis==16 && jbis==1) ||  ( nbrsdejoueur==4 && ibis==15 && jbis==1  )   ||  ( nbrsdejoueur==4 && ibis==15 && jbis==2 )
            || (nbrsdejoueur==4 && ibis==15 && jbis==3 )|| (nbrsdejoueur==4 && ibis==15 && jbis==4) ||  ( nbrsdejoueur==4 && ibis==14 && jbis==1  )   ||  ( nbrsdejoueur==4 && ibis==14 && jbis==13 )
            || (nbrsdejoueur==4 && ibis==14 && jbis==2 )|| (nbrsdejoueur==4 && ibis==16 && jbis==3) ||  ( nbrsdejoueur==4 && ibis==16 && jbis==4  )   ||  ( nbrsdejoueur==4 && ibis==13 && jbis==1 )
            || (nbrsdejoueur==4 && ibis==13 && jbis==2)|| (nbrsdejoueur==4 && ibis==3 && jbis==16) ||  ( nbrsdejoueur==4 && ibis==3 && jbis==15  )
            || (nbrsdejoueur==4 && ibis==3 && jbis==14 )|| (nbrsdejoueur==4 && ibis==4 && jbis==16) ||  ( nbrsdejoueur==4 && ibis==4 && jbis==15 )){
                if (m%2==0){
                    couleur("43");
                    couleur("30");
                    }
                    if(m%2==1) {
                        couleur("46");
                        couleur("30");
                    }
            }
            else
            {
                if (m%2==0){
                    couleur("45");
                }
                if(m%2==1) {
                    couleur("44");
                }
            }
            printf(" %d  ", damier[ibis][jbis]);
            couleur("0");
    m++;
    }

}
printf("\n");
}

void fonctionturorielmode1(){


    int jouer=0;
    do {
        printf("        Bienvenue dans le jeu de l'Halma \n");

        printf("\nRègles Générales : \nLe plateau de jeu est composé d’un damier de 16x16 cases de couleurs alternées. Les angles, composés de 19 cases dans le jeu à deux et de 13 cases dans le jeu à quatre, représentent les « maisons », et jouent le rôle de point de départ et d’arrivée selon le joueur.\n\n");
        printf("Les Déplacements:\n     Soit en avançant d'un pas, c'est à dire en se rendant sur une case voisine laissée libre. \n     Soit en sautant par dessus une pièce (adverse ou non), comme à saute-mouton pour se rendre sur une case libre de la même couleur que celle de départ. Un pion peut sauter par dessus plusieurs pions si une case est laissée libre entre chacun de ces pions. Ce type de déplacement est à privilégier pour avancer son pion le plus rapidement possible.");


        printf("ATTENTION : Vous ne pourrez pas annuler la saisie de vos pions de départ donc veillez à bien verifier que le pion que vous choisirez aura bien la possibilité de faire un déplacement autorisé.\n");
        printf("\nMerci d'avoir lu le tutoriel du jeu de l'Halma produit par Jeremy Brasse, Lilian delaplace ainsi que Raphael Partouche. Bon jeu !! \n\n\n");

        printf("Envie de passer un bon moment et jouer ?\n1. Oui \n2. Non\n");
        scanf("%d", &jouer);
        if (jouer!=1){
            printf("Dommage, vous n'avez pas le choix !\n");
            //usleep(int nbr_microsec);
            sleep(1);
        }
        system("clear");

    } while(jouer!=1);
}
