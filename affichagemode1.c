//
//  affichagemode1.c
//  Projetinfo
//
//  Created by Partouche on 17/11/2016.
//  Copyright © 2016 Partouche. All rights reserved.
//

#include "affichagemode1.h"


void fonctionaffichagepion(int damier[16][16], int tailleI, int tailleJ){
    
    printf("     0. 1. 2. 3. 4. 5. 6. 7. 8. 9. 10 11 12 13 14 15\n ");
   
    for ( int ibis=0 ; ibis< tailleI; ibis++)
    {
        if (ibis<10){
            printf("\n %d.  ", ibis);}
        else{printf("\n %d. ", ibis);}
        for (int jbis=0 ;jbis<tailleJ ; jbis++)
        {
            printf("%d  ", damier[ibis][jbis]);
        }
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
    int bool6=1;
    do {
        scanf("%d %d", &LIGNEARRIVE, &COLONNEARRIVE);
        
        if (damier[LIGNEARRIVE][COLONNEARRIVE]!=0) {
            printf("Veuillez chosir un endroit d'arriver ou il y a aucun pion adverse : \n");
            bool6=1;
        }
        else {bool6=0;}
        
    } while (bool6==1);
    int bool11=1;
    do {
                if ((LIGNEARRIVE==LIGNE+1 && COLONNEARRIVE==COLONNE-1) || (LIGNEARRIVE==LIGNE+1 && COLONNEARRIVE==COLONNE+1) || (LIGNEARRIVE==LIGNE && COLONNEARRIVE==COLONNE+1)
            || (LIGNEARRIVE==LIGNE && COLONNEARRIVE==COLONNE-1) || (LIGNEARRIVE==LIGNE+1 && COLONNEARRIVE==COLONNE) || (LIGNEARRIVE==LIGNE+1 && COLONNEARRIVE==COLONNE-1)
            || (LIGNEARRIVE==LIGNE-1 && COLONNEARRIVE==COLONNE-1) || ((LIGNEARRIVE==LIGNE-1 && COLONNEARRIVE==COLONNE )))
        {
            if (damier[LIGNEARRIVE][COLONNEARRIVE]==0)
                {
                    damier[LIGNEARRIVE][COLONNEARRIVE]=1;
                    bool11=0;
                }
            else {bool11=1; printf("Veuillez indiquer un endroit ou il y a aucun pion\n");scanf("%d %d", &LIGNEARRIVE, &COLONNEARRIVE);}
        }
        else {
            printf("Veuillez inserer un endroit qui respecte les regles, cad regle du pas ou/et choisir une case ou il y a aucun pion: \n");
            bool11=1;
            scanf("%d %d", &LIGNEARRIVE, &COLONNEARRIVE);
        }
    } while (bool11==1);
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
    int sautoupas=0;
    printf("Voulez vous faire : \n1. un pas ?\n2. un saut ?\n");
    scanf("%d", &sautoupas);
    while(sautoupas!=1 || sautoupas!=2){
        printf("Veuillez selectioner : 1 pour un pas et 2 pour un saut");
        scanf("%d", &sautoupas);
    }
    
    damier[LIGNE][COLONNE]=0;
    printf("Choissisez l'endroit d'arriver : \n");
    int LIGNEARRIVE, COLONNEARRIVE;
    int bool7=1;
        do {
            scanf("%d %d", &LIGNEARRIVE, &COLONNEARRIVE);
        
            if (damier[LIGNEARRIVE][COLONNEARRIVE]!=0) {
                printf("Veuillez chosir un endroit d'arriver ou il y a aucun pion : \n");
                bool7=1;
            }
            else {bool7=0;}
        
        } while (bool7==1);
    int bool10=1;
        do {
                    if ((LIGNEARRIVE==LIGNE+1 && COLONNEARRIVE==COLONNE-1) || (LIGNEARRIVE==LIGNE+1 && COLONNEARRIVE==COLONNE+1) || (LIGNEARRIVE==LIGNE && COLONNEARRIVE==COLONNE+1)
                || (LIGNEARRIVE==LIGNE && COLONNEARRIVE==COLONNE-1) || (LIGNEARRIVE==LIGNE+1 && COLONNEARRIVE==COLONNE) || (LIGNEARRIVE==LIGNE+1 && COLONNEARRIVE==COLONNE-1)
                || (LIGNEARRIVE==LIGNE-1 && COLONNEARRIVE==COLONNE-1) || ((LIGNEARRIVE==LIGNE-1 && COLONNEARRIVE==COLONNE )) )
            {
                if (damier[LIGNEARRIVE][COLONNEARRIVE]==0)
                    {                      
                        bool10=0;
                    }
                else {bool10=1; printf("Veuillez indiquer un endroit ou il y a aucun pion"); scanf("%d %d", &LIGNEARRIVE, &COLONNEARRIVE);}
            }
            else {
                printf("Veuillez inserer un endroit qui respecte les regles, cad regle du pas ou/et choisir une case ou il y a aucun pion: \n");
                bool10=1;
                scanf("%d %d", &LIGNEARRIVE, &COLONNEARRIVE);
            }
        } while (bool10==1 && sautoupas==1);

   // int bool12=1;
       // do {
        //    if()







       // } while (bool12==1 && sautoupas==2);
        
//damier[LIGNEARRIVE][COLONNEARRIVE]=2;

//}










}
