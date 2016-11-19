//
//  affichagemode1.c
//  Projetinfo
//
//  Created by Partouche on 17/11/2016.
//  Copyright © 2016 Partouche. All rights reserved.
//

#include "affichagemode1.h"


void fonctionaffichagepion(int damier[16][16], int tailleI, int tailleJ){


    for ( int ibis=0 ; ibis< tailleI; ibis++)
    {
        for (int jbis=0 ;jbis<tailleJ ; jbis++)
        {
            printf("%d ", damier[ibis][jbis]);
        }
        printf("\n");
    }

}

void fonctiondeplacementdespionsduj1(int damier[16][16]){
    printf("Choissiez un pion :\n");
    int LIGNE, COLONNE;
    int bool2=0;
        do {        //On demande les valeurs des pions choisi jusqu'a que le bon pion correspondant au joueur est choisi :
            scanf("%d %d", &LIGNE, &COLONNE);
            if (damier[LIGNE][COLONNE]!=1){
                printf("Ce pion n'est pas a vous vous ne pouvez donc pas le déplacer\nChoissez un autre pion qui cette fois ci est a vous !\nChoissisez un pion :");
            }
            else {bool2=1;}
        } while (bool2==0);
    
    
    damier[LIGNE][COLONNE]=0;
    printf("Choissisez l'endroit d'arriver : \n");
    int LIGNEARRIVE, COLONNEARRIVE;
    scanf("%d %d", &LIGNEARRIVE, &COLONNEARRIVE);
    damier[LIGNEARRIVE][COLONNEARRIVE]=1;
}
void fonctiondeplacementdespionsduj2(int damier[16][16]){
    printf("Choissiez un pion :\n");
    int LIGNE, COLONNE;
    int bool3=0;
        do {        //On demande les valeurs des pions choisi jusqu'a que le bon pion correspondant au joueur est choisi :
            scanf("%d %d", &LIGNE, &COLONNE);
            if (damier[LIGNE][COLONNE]!=2){
                printf("Ce pion n'est pas a vous vous ne pouvez donc pas le déplacer\nChoissez un autre pion qui cette fois ci est a vous !\nChoissisez un pion :");
            }
            else {bool3=1;}
        } while (bool3==0);

    
    damier[LIGNE][COLONNE]=0;
    printf("Choissisez l'endroit d'arriver : \n");
    int LIGNEARRIVE, COLONNEARRIVE;
    scanf("%d %d", &LIGNEARRIVE, &COLONNEARRIVE);
    damier[LIGNEARRIVE][COLONNEARRIVE]=2;
}
