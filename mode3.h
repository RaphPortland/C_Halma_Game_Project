//
//  mode3.h
//  Projetinfo
//
//  Created by Partouche on 19/11/2016.
//  Copyright © 2016 Partouche. All rights reserved.
//

#ifndef mode3_h
#define mode3_h

#include <stdio.h>

#endif /* mode3_h */
void fonctionmode3();
void fonctionaffichagepion(int damier[16][16], int ibis, int jbis);
void fonctiondeplacementdespionsduj1(int damier[16][16]);
void fonctiondeplacementdespionsduj2(int damier[16][16]);
void fonctiondeplacementdespionsduj3(int damier[16][16]){
    printf("Choissiez un pion :\n");
    int LIGNE, COLONNE;
    int bool3=0;
    do {        //On demande les valeurs des pions choisi jusqu'a que le bon pion correspondant au joueur est choisi :
        scanf("%d %d", &LIGNE, &COLONNE);
        if (damier[LIGNE][COLONNE]!=3){
            printf("Ce pion n'est pas a vous vous ne pouvez donc pas le déplacer\nChoissez un autre pion qui cette fois ci est a vous !\nChoissisez un pion :");
        }
        else {bool3=1;}
    } while (bool3==0);
    
    
    damier[LIGNE][COLONNE]=0;
    printf("Choissisez l'endroit d'arriver : \n");
    int LIGNEARRIVE, COLONNEARRIVE;
    scanf("%d %d", &LIGNEARRIVE, &COLONNEARRIVE);
    damier[LIGNEARRIVE][COLONNEARRIVE]=3;
}
void fonctiondeplacementdespionsduj4(int damier[16][16]){
    printf("Choissiez un pion :\n");
    int LIGNE, COLONNE;
    int bool3=0;
    do {        //On demande les valeurs des pions choisi jusqu'a que le bon pion correspondant au joueur est choisi :
        scanf("%d %d", &LIGNE, &COLONNE);
        if (damier[LIGNE][COLONNE]!=4){
            printf("Ce pion n'est pas a vous vous ne pouvez donc pas le déplacer\nChoissez un autre pion qui cette fois ci est a vous !\nChoissisez un pion :");
        }
        else {bool3=1;}
    } while (bool3==0);
    
    
    damier[LIGNE][COLONNE]=0;
    printf("Choissisez l'endroit d'arriver : \n");
    int LIGNEARRIVE, COLONNEARRIVE;
    scanf("%d %d", &LIGNEARRIVE, &COLONNEARRIVE);
    damier[LIGNEARRIVE][COLONNEARRIVE]=4;
}
