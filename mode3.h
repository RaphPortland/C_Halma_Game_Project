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
    int bool5=1;
    do {
        scanf("%d %d", &LIGNEARRIVE, &COLONNEARRIVE);
        
        if (damier[LIGNEARRIVE][COLONNEARRIVE]!=0) {
            printf("Veuillez chosir un endroit d'arriver ou il y a aucun pion adverse : \n");
            bool5=1;
        }
        else {bool5=0;}
        
    } while (bool5==1);    scanf("%d %d", &LIGNEARRIVE, &COLONNEARRIVE);
    int bool12=1;
    do {
        if ((LIGNEARRIVE==LIGNE+1 && COLONNEARRIVE==COLONNE-1) || (LIGNEARRIVE==LIGNE+1 && COLONNEARRIVE==COLONNE+1) || (LIGNEARRIVE==LIGNE && COLONNEARRIVE==COLONNE+1)
            || (LIGNEARRIVE==LIGNE && COLONNEARRIVE==COLONNE-1) || (LIGNEARRIVE==LIGNE+1 && COLONNEARRIVE==COLONNE) || (LIGNEARRIVE==LIGNE+1 && COLONNEARRIVE==COLONNE-1)
            || (LIGNEARRIVE==LIGNE-1 && COLONNEARRIVE==COLONNE-1) || ((LIGNEARRIVE==LIGNE-1 && COLONNEARRIVE==COLONNE )))
        {
            if (damier[LIGNEARRIVE][COLONNEARRIVE]==0)
            {
                damier[LIGNEARRIVE][COLONNEARRIVE]=3;
                bool12=0;
            }
            else {bool12=1; printf("Veuillez indiquer un endroit ou il y a aucun pion"); scanf("%d %d", &LIGNEARRIVE, &COLONNEARRIVE);}
        }
        else {
            printf("Veuillez inserer un endroit qui respecte les regles, cad regle du pas ou/et choisir une case ou il y a aucun pion: \n");
            bool12=1;
            scanf("%d %d", &LIGNEARRIVE, &COLONNEARRIVE);
        }
    } while (bool12==1);

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
    int bool4=1;
    do {
    scanf("%d %d", &LIGNEARRIVE, &COLONNEARRIVE);
        
        if (damier[LIGNEARRIVE][COLONNEARRIVE]!=0) {
            printf("Veuillez chosir un endroit d'arriver ou il y a aucun pion adverse : \n");
            bool4=1;
        }
        else {bool4=0;}
        
    } while (bool4==1);
    
    int bool11=1;
    do {
        if ((LIGNEARRIVE==LIGNE+1 && COLONNEARRIVE==COLONNE-1) || (LIGNEARRIVE==LIGNE+1 && COLONNEARRIVE==COLONNE+1) || (LIGNEARRIVE==LIGNE && COLONNEARRIVE==COLONNE+1)
            || (LIGNEARRIVE==LIGNE && COLONNEARRIVE==COLONNE-1) || (LIGNEARRIVE==LIGNE+1 && COLONNEARRIVE==COLONNE) || (LIGNEARRIVE==LIGNE+1 && COLONNEARRIVE==COLONNE-1)
            || (LIGNEARRIVE==LIGNE-1 && COLONNEARRIVE==COLONNE-1) || ((LIGNEARRIVE==LIGNE-1 && COLONNEARRIVE==COLONNE )))
        {
            if (damier[LIGNEARRIVE][COLONNEARRIVE]==0)
            {
                damier[LIGNEARRIVE][COLONNEARRIVE]=4;
                bool11=0;
            }
            else {bool11=1; printf("Veuillez indiquer un endroit ou il y a aucun pion"); scanf("%d %d", &LIGNEARRIVE, &COLONNEARRIVE);}
        }
        else {
            printf("Veuillez inserer un endroit qui respecte les regles, cad regle du pas ou/et choisir une case ou il y a aucun pion: \n");
            bool11=1;
            scanf("%d %d", &LIGNEARRIVE, &COLONNEARRIVE);
        }
    } while (bool11==1);

}
