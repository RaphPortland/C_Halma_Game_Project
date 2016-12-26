#include "mode2.h"
#include "time.h"
#include <stdlib.h>
#include <unistd.h>
void fonctionmode2(){
    //Rempliisage de tout le tableau avec 0
    int damier[16][16];
    int i,j;
    for (i=0;i<16;i++)
    {
        for (j=0;j<16;j++)
        {
            damier[i][j]=0;
        }
    }
     //Remplissage du 1er jeu de pions dans le tableauu damier LES PIONS 1
    damier[0][0]=1;
    damier[0][1]=1;
    damier[0][2]=1;
    damier[0][3]=1;
    damier[0][4]=1;
    damier[1][0]=1;
    damier[1][1]=1;
    damier[1][2]=1;
    damier[1][3]=1;
    damier[1][4]=1;
    damier[2][0]=1;
    damier[2][1]=1;
    damier[2][2]=1;
    damier[2][3]=1;
    damier[3][0]=1;
    damier[3][1]=1;
    damier[3][2]=1;
    damier[4][0]=1;
    damier[4][1]=1;
    //Remplissage du 2 eme jeu de pions dans le tableau damier lES PIONS DU JOUEUR 2
    damier[15][15]=2;
    damier[15][14]=2;
    damier[15][13]=2;
    damier[15][12]=2;
    damier[15][11]=2;
    damier[14][15]=2;
    damier[14][14]=2;
    damier[14][13]=2;
    damier[14][12]=2;
    damier[14][11]=2;
    damier[13][15]=2;
    damier[13][14]=2;
    damier[13][13]=2;
    damier[13][12]=2;
    damier[12][15]=2;
    damier[12][14]=2;
    damier[12][13]=2;
    damier[11][15]=2;
    damier[11][14]=2;
    //affichage du plateau de jeu + Jeu
    int bool1=1;
    int m=1;
    int Joueurquijoue=0;
    do {
           fonctionaffichagepion(damier, 16, 16);
        int Aquiletour=m%2;
        if (Aquiletour!=0)
        {
            printf("\nAu joueur 1 de jouer\n");
            fonctiondedeplacementdepionsdujoueurI(damier, 1);
            Joueurquijoue=1;
        }
            else {
            printf("\nL'ordinateur va jouer : \n");
            fonctiondeplacementparlordi(damier, 2);
            Joueurquijoue=2;
        }
    m++;
    system("clear");
    detectiondevictoire (damier, Joueurquijoue);
    } while (bool1==1);
}
void fonctiondeplacementparlordi(int damier[16][16], int numerodejoueur){
int LIGNE=rand()%16;
int COLONNE=rand()%16;
int t=0;
    int bool12=1;
    int m=0;
int LIGNEARRIVE=rand()%16;
int COLONNEARRIVE=rand()%16;
//L'ordi choisi le pion qu'il veut bouger
if (numerodejoueur==2){
    do {
            if (t%2==1){
                LIGNE++;
            }
            if (t%2==0){
                COLONNE++;
            }
            if (LIGNE > 15 && COLONNE> 15) {
                LIGNE=0;
                COLONNE=0;
            }
            if ((damier[LIGNE-1][COLONNE]== 0) || (damier[LIGNE+1][COLONNE] == 0) || (damier[LIGNE][COLONNE-1]==0) || (damier[LIGNE][COLONNE+1]==0) || (damier[LIGNE+1][COLONNE-1]==0) || (damier[LIGNE-1][COLONNE-1]==0) || (damier[LIGNE-1][COLONNE+1]==0) || (damier[LIGNE+1][COLONNE+1]==0))
            {
                if (damier[LIGNE][COLONNE]==numerodejoueur){
                    
                    bool12=0;
                    
                }
            }
         printf("La valeur de LIGNE est %d, La valeur de COLLONE est %d\n", LIGNE, COLONNE);
        t++;
    } while ( bool12==1);
}

if (numerodejoueur==1){
    do {
            if (t%2==1){
                LIGNE--;
            }
            if (t%2==0){
                COLONNE--;
            }
            if (LIGNE < 0 || COLONNE < 0) {
                LIGNE=15;
                COLONNE=15;
            }
            if ((damier[LIGNE-1][COLONNE]== 0) || (damier[LIGNE+1][COLONNE] == 0) || (damier[LIGNE][COLONNE-1]==0) || (damier[LIGNE][COLONNE+1]==0) || (damier[LIGNE+1][COLONNE-1]==0) || (damier[LIGNE-1][COLONNE-1]==0) || (damier[LIGNE-1][COLONNE+1]==0) || (damier[LIGNE+1][COLONNE+1]==0))
            {
                if (damier[LIGNE][COLONNE]==numerodejoueur){
                    
                    bool12=0;
                    
                }
            }
         printf("La valeur de LIGNE est %d, La valeur de COLLONE est %d\n", LIGNE, COLONNE);
        t++;
    } while ( bool12==1);
}

    printf("LIGNE DEPART  : %d , COLONNE DEPART : %d \n", LIGNE, COLONNE);

//Affichage avec clignotement 
    printf("Ligne : %d et colonne %d sont les coordonés du point de depart\n", LIGNE, COLONNE);
        for (int i=0; i<10; i++){

            if (i%2==1){
                damier[LIGNE][COLONNE]=0;
            }
            if (i%2==0){
                damier[LIGNE][COLONNE]=numerodejoueur;
            }

            fonctionaffichagepion(damier, 16, 16);
            sleep(0.5);


        }
        //L'ordi a choisi le pions qu'il veut bouger
//Maintenant l'ordi va effectuer un déplacement du pions
int bool1=1;
    do {   
        
            if (m%2==1) {
                LIGNEARRIVE++;
                bool1=1;
            }
            else {
                COLONNEARRIVE++;
                bool1=1;
            }
        m++;
            if (LIGNEARRIVE >= 16 && COLONNEARRIVE>=16) {
                LIGNEARRIVE=0;
                COLONNEARRIVE=0;
            }
        
            if (((LIGNEARRIVE==LIGNE+1 && COLONNEARRIVE==COLONNE-1) || (LIGNEARRIVE==LIGNE+1 && COLONNEARRIVE==COLONNE+1) || (LIGNEARRIVE==LIGNE && COLONNEARRIVE==COLONNE+1)
                || (LIGNEARRIVE==LIGNE && COLONNEARRIVE==COLONNE-1) || (LIGNEARRIVE==LIGNE+1 && COLONNEARRIVE==COLONNE) || (LIGNEARRIVE==LIGNE+1 && COLONNEARRIVE==COLONNE-1)
                || (LIGNEARRIVE==LIGNE-1 && COLONNEARRIVE==COLONNE-1) || (LIGNEARRIVE==LIGNE-1 && COLONNEARRIVE==COLONNE ))){

                if (damier[LIGNEARRIVE][COLONNEARRIVE]==0)
                {
                    bool1=0;
                }
        }

    } while(bool1==1); 
    //Affichage avec clignotement 
        printf("Ligne : %d et Arrive : %d sont les coordonnées du point d'arriver\n", LIGNEARRIVE, COLONNEARRIVE);
        for (int i=0; i<4; i++){

            if (i%2==1){
                damier[LIGNEARRIVE][COLONNEARRIVE]=numerodejoueur;
            }
            if (i%2==0){
                damier[LIGNEARRIVE][COLONNEARRIVE]=0;
            }
                fonctionaffichagepion(damier, 16, 16);
                sleep(0.5);
            }

    
    }


