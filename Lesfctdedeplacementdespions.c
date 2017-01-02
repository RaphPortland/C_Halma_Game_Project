//
//  Lesfctverification.c
//  Projetinfo
//
//  Created by Partouche on 19/11/2016.
//  Copyright © 2016 Partouche. All rights reserved.
//

#include "Lesfctdedeplacementdespions.h"

void fonctiondedeplacementdepionsdujoueurI(int damier[18][18], int Joueurquijoue){



    printf("Choissiez un pion :\n");
    int LIGNE, COLONNE;
    int LIGNEARRIVE = 0, COLONNEARRIVE=0;
    int bool3=0;
    //int bool6=0;

    do {        //On demande les valeurs des pions choisi jusqu'a que le pion correspondant au joueur est choisi :
        scanf("%d %d", &LIGNE, &COLONNE);
        if (damier[LIGNE][COLONNE]!=Joueurquijoue){
            printf("Ce pion n'est pas a vous vous ne pouvez donc pas le déplacer\nChoissez un autre pion qui cette fois ci est a vous !\nChoissisez un pion :");
            bool3=0;
        }
        else if (damier[LIGNE][COLONNE]==Joueurquijoue)
        {
            if ((damier[LIGNE-1][COLONNE]== 0) || (damier[LIGNE+1][COLONNE] == 0) || (damier[LIGNE][COLONNE-1]==0) || (damier[LIGNE][COLONNE+1]==0) || (damier[LIGNE+1][COLONNE-1]==0) || (damier[LIGNE-1][COLONNE-1]==0) || (damier[LIGNE-1][COLONNE+1]==0) || (damier[LIGNE+1][COLONNE+1]==0))
            {
                bool3=1;
            }
            else {
                printf("Vous ne pourrez pas faire de déplacment avec le pion choisi Veuillez en choisir un nouveau \n");
                bool3=0;
            }
        }

    } while (bool3==0);

    int RETOUR=1;
    int bool36=0;
    int sautx=1;
    int sautoupas;

    do {        // Demande si l'utilisateur veut faire un saut ou un pas
            printf("Voulez vous faire : 1. Un pas 2. Un saut\n");
            scanf("%d", &sautoupas);
                if (sautoupas==1 || sautoupas==2){
                    bool36=1;
                }
                else {
                   bool36=0;
                   printf("Vous avez rentrer un numéro different de 1 ou 2\n");
                }
        } while (bool36==0);

    while(RETOUR==1){


    RETOUR=0;

        printf("Choissisez l'endroit d'arriver : \n");
        int bool5=1;

        do {        //Verification de case d'arrivé vide
            scanf("%d %d", &LIGNEARRIVE, &COLONNEARRIVE);

            if (damier[LIGNEARRIVE][COLONNEARRIVE]!=0) {
                printf("Veuillez choisir un endroit d'arriver ou il y a aucun pion adverse : \n");
                bool5=1;
            }
            else {bool5=0;}


        } while (bool5==1);

        int bool12=1;
        while(bool12==1 && sautoupas==1){      //Boucle pour autoriser le pas
            if ((LIGNEARRIVE==LIGNE+1 && COLONNEARRIVE==COLONNE-1) || (LIGNEARRIVE==LIGNE+1 && COLONNEARRIVE==COLONNE+1) || (LIGNEARRIVE==LIGNE && COLONNEARRIVE==COLONNE+1)
                || (LIGNEARRIVE==LIGNE && COLONNEARRIVE==COLONNE-1) || (LIGNEARRIVE==LIGNE+1 && COLONNEARRIVE==COLONNE) || (LIGNEARRIVE==LIGNE+1 && COLONNEARRIVE==COLONNE-1)
                || (LIGNEARRIVE==LIGNE-1 && COLONNEARRIVE==COLONNE-1) || (LIGNEARRIVE==LIGNE-1 && COLONNEARRIVE==COLONNE ))
            {
                if (damier[LIGNEARRIVE][COLONNEARRIVE]==0)
                {
                    damier[LIGNE][COLONNE]=0;
                    damier[LIGNEARRIVE][COLONNEARRIVE]=Joueurquijoue;
                    bool12=0;
                }
                else {
                    bool12=1;
                    printf("Veuillez indiquer un endroit ou il y a aucun pion");
                    scanf("%d %d", &LIGNEARRIVE, &COLONNEARRIVE);
                }
            }
            else {
                printf("Veuillez inserer un endroit qui respecte les regles, cad regle du pas ou/et choisir une case ou il y a aucun pion: \n");
                bool12=1;
                printf("Finalement envie de faire un SAUT ? \n1. Oui \n2. Non\n");
                scanf("%d", &RETOUR);
                switch (RETOUR){
                    case 1:
                    RETOUR=1;
                    bool12=0;
                    sautoupas=2;
                    break;
                    case 2:
                    printf("A vous de Selectionner un endroit d'arriver respectant la régle du pas\n");
                    scanf("%d %d", &LIGNEARRIVE, &COLONNEARRIVE);
                    bool12=1;
                    break;
                }

            }
        }

        //int sautx;
        int bool13=1;
        while (bool13==1 && sautoupas==2 && RETOUR!=1 && sautx==1){          //Boucle pour autoriser le saut

            if (COLONNEARRIVE==COLONNE && LIGNEARRIVE==LIGNE+2 && damier[LIGNEARRIVE-1][COLONNEARRIVE]!=0){
                bool13=0;
                RETOUR=fonctionsautadjacent(damier, Joueurquijoue, &LIGNE, &COLONNE, &LIGNEARRIVE, &COLONNEARRIVE);
            }
            else if (LIGNEARRIVE==LIGNE-2 && COLONNE==COLONNEARRIVE && damier[LIGNEARRIVE+1][COLONNEARRIVE]!=0){
                bool13=0;
                RETOUR=fonctionsautadjacent(damier, Joueurquijoue, &LIGNE, &COLONNE, &LIGNEARRIVE, &COLONNEARRIVE);
            }
            else if(LIGNEARRIVE==LIGNE && COLONNEARRIVE==COLONNE-2 && damier[LIGNEARRIVE][COLONNEARRIVE+1]!=0){
                bool13=0;
                RETOUR=fonctionsautadjacent(damier, Joueurquijoue, &LIGNE, &COLONNE, &LIGNEARRIVE, &COLONNEARRIVE);
            }
            else if(LIGNEARRIVE==LIGNE && COLONNEARRIVE==COLONNE+2 && damier[LIGNEARRIVE][COLONNEARRIVE-1]!=0){
                bool13=0;
                RETOUR=fonctionsautadjacent(damier, Joueurquijoue, &LIGNE, &COLONNE, &LIGNEARRIVE, &COLONNEARRIVE);
            }
            else if(LIGNEARRIVE==LIGNE-2 && COLONNEARRIVE==COLONNE-2 && damier[LIGNEARRIVE+1][COLONNEARRIVE+1]!=0){
                bool13=0;
                RETOUR=fonctionsautadjacent(damier, Joueurquijoue, &LIGNE, &COLONNE, &LIGNEARRIVE, &COLONNEARRIVE);
            }
            else if(LIGNEARRIVE==LIGNE-2 && COLONNEARRIVE==COLONNE+2 && damier[LIGNEARRIVE+1][COLONNEARRIVE-1]!=0){
                bool13=0;
                RETOUR=fonctionsautadjacent(damier, Joueurquijoue, &LIGNE, &COLONNE, &LIGNEARRIVE, &COLONNEARRIVE);

            }
            else if (LIGNEARRIVE==LIGNE+2 && COLONNEARRIVE==COLONNE-2 && damier[LIGNEARRIVE-1][COLONNEARRIVE+1]!=0){
                 bool13=0;
                RETOUR=fonctionsautadjacent(damier, Joueurquijoue, &LIGNE, &COLONNE, &LIGNEARRIVE, &COLONNEARRIVE);

            }
            else if(LIGNEARRIVE==LIGNE+2 && COLONNEARRIVE==COLONNE+2 && damier[LIGNEARRIVE-1][COLONNEARRIVE-1]!=0)            {
                bool13=0;
                RETOUR=fonctionsautadjacent(damier, Joueurquijoue, &LIGNE, &COLONNE, &LIGNEARRIVE, &COLONNEARRIVE);
            }

            else {

                printf("Finalement envie de faire un PAS ? \n1. Oui \n2. Non\n");
                scanf("%d", &RETOUR);
                switch (RETOUR){
                    case 1:
                    RETOUR=1;
                    bool13=0;
                    sautoupas=1;
                    break;
                    case 2:
                    printf("A vous de Selectionner un endroit d'arriver respectant la régle du saut\n");
                    scanf("%d %d", &LIGNEARRIVE, &COLONNEARRIVE);
                    bool13=1;
                    break;
                }
            }


        }

}



}

int fonctionsautadjacent(int damier[18][18], int Joueurquijoue, int *LIGNE, int *COLONNE, int *LIGNEARRIVE, int *COLONNEARRIVE ){
    int bool18=0;
    int sautx;
    int RETOUR=0;

                damier[*LIGNE][*COLONNE]=0;
                damier[*LIGNEARRIVE][*COLONNEARRIVE]=Joueurquijoue;
                fonctionaffichagepion(damier, 18, 18);
                 do {
                    printf("Voulez vous refaire un saut adjacent si celui ci est possible ?\n1. Oui \n2. Non\n");
                     scanf("%d", &sautx);

                        if(sautx==1){
                            *COLONNE=*COLONNEARRIVE;
                            *LIGNE=*LIGNEARRIVE;
                            RETOUR=1;
                            bool18=1;
                        }
                        else if (sautx==2){
                            RETOUR=0;
                            bool18=1;
                        }
                        else {
                            printf("Veuillez rentrer une valeur comprise entre 0 et 1");
                            bool18=0;
                        }

                } while(bool18==0);

    return RETOUR;
}

int detectiondevictoire (int damier[18][18], int numerodujoueur, int nombredejoueur) {
//detection de Victoire a  2 joueur
    int victoire=0;
    if (nombredejoueur==2){
        if (numerodujoueur==1)
        {

            if (damier[16][16]==1 && damier[16][15]==1 &&
                damier[16][14]==1 && 
                damier[16][13]==1 && 
                damier[16][12]==1 && 
                damier[15][16]==1 && 
                damier[15][15]==1 && 
                damier[15][14]==1 && 
                damier[15][13]==1 && 
                damier[15][12]==1 && 
                damier[14][16]==1 && 
                damier[14][15]==1 && 
                damier[14][14]==1 && 
                damier[14][13]==1 && 
                damier[13][16]==1 && 
                damier[13][15]==1 && 
                damier[13][14]==1 && 
                damier[12][16]==1 && 
                damier[12][15]==1 ) {

                printf("Bravo au joueur 1 qui a gagner\n");
                victoire=1;
            }

        }

        if (numerodujoueur==2){

            if (  damier[1][1]==2 && damier[1][2]==2 &&
                    damier[1][3]==2 && 
                    damier[1][4]==2 && 
                    damier[1][5]==2 && 
                    damier[2][1]==2 && 
                    damier[2][2]==2 && 
                    damier[2][3]==2 && 
                    damier[2][4]==2 && 
                    damier[2][5]==2 && 
                    damier[3][1]==2 && 
                    damier[3][2]==2 && 
                    damier[3][3]==2 && 
                    damier[3][4]==2 && 
                    damier[4][1]==2 && 
                    damier[4][2]==2 && 
                    damier[4][3]==2 && 
                    damier[5][1]==2 && 
                    damier[5][2]==2 ){

                
                printf("Bravo au joueur 2 qui a gagner\n");
                victoire=1;

            }


        }
    }
    // Detection de victoire a 4 joueur
    if (nombredejoueur==4){
        if (numerodujoueur==1){

            if ( damier[16][16]==1 && damier[16][15]==1 && 
                    damier[16][14]==1 && 
                    damier[16][13]==1 && 
                    damier[15][16]==1 && 
                    damier[15][15]==1 && 
                    damier[15][14]==1 && 
                    damier[15][13]==1 && 
                    damier[14][16]==1 && 
                    damier[14][15]==1 && 
                    damier[14][14]==1 && 
                    damier[13][16]==1 && 
                    damier[13][15]==1 ){

                printf("Bravo au joueur 1 qui a gagner\n");
                victoire=1;

            }

        }

        if (numerodujoueur==2){

            if ( damier[1][1]==2 && damier[1][2]==2 && 
                    damier[1][3]==2 && 
                    damier[1][4]==2 && 
                    damier[2][1]==2 && 
                    damier[2][2]==2 && 
                    damier[2][3]==2 && 
                    damier[2][4]==2 && 
                    damier[3][1]==2 && 
                    damier[3][2]==2 && 
                    damier[3][3]==2 && 
                    damier[4][1]==2 && 
                    damier[4][2]==2 ) {

                printf("Bravo au joueur 2 qui a gagner\n");
                victoire=1;


            }
        }

        if (numerodujoueur==3){
            if (damier[1][16]==3 &&             
                damier[1][15]==3 &&
                damier[1][14]==3 &&
                damier[1][13]==3 &&
                damier[2][16]==3 &&
                damier[2][15]==3 &&
                damier[2][14]==3 &&
                damier[2][13]==3 &&
                damier[3][16]==3 &&
                damier[3][15]==3 &&
                damier[3][14]==3 &&
                damier[4][16]==3 &&
                damier[4][15]==3){

                printf("Bravo au joueur 3 qui a gagner\n");
                victoire=1;
            }

        }

        if (numerodujoueur==4)
        {

            if (damier[16][1]==4 &&
                damier[16][2]==4 &&
                damier[16][3]==4 &&
                damier[16][4]==4 &&
                damier[15][1]==4 &&
                damier[15][2]==4 &&
                damier[15][3]==4 &&
                damier[15][4]==4 &&
                damier[14][1]==4 &&
                damier[14][2]==4 &&
                damier[14][3]==4 &&
                damier[13][1]==4 &&
                damier[13][2]==4){

                printf("Bravo au joueur 4 qui a gagner\n");
                victoire=1;
            }

        }
    }

return victoire;

}
