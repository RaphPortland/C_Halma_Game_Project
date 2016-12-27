#include "mode2.h"
#include "time.h"
#include <stdlib.h>
#include <unistd.h>

void fonctionmode2(){
    //Rempliisage de tout le tableau avec 0
    int damier[18][18];
    int i,j;
    for (i=0;i<18;i++)
    {
        for (j=0;j<18;j++)
        {
            damier[i][j]=0;
        }
    }
    for (i=0; i<18; i++){
        j=0;
        damier[i][j]=8;
    }  
    for (j=0; j<18; j++){
        i=0;
        damier[i][j]=8;
    }
    for (i=0; i<18; i++){
        j=17;
        damier[i][j]=8;
    }
    for (j=0; j<18; j++){
        i=17;
        damier[i][j]=8;
    }
     //Remplissage du 1er jeu de pions dans le tableauu damier LES PIONS 1
     damier[1][1]=1;
    damier[1][2]=1;
    damier[1][3]=1;
    damier[1][4]=1;
    damier[1][5]=1;
    damier[2][1]=1;
    damier[2][2]=1;
    damier[2][3]=1;
    damier[2][4]=1;
    damier[2][5]=1;
    damier[3][1]=1;
    damier[3][2]=1;
    damier[3][3]=1;
    damier[3][4]=1;
    damier[4][1]=1;
    damier[4][2]=1;
    damier[4][3]=1;
    damier[5][1]=1;
    damier[5][2]=1;
    //Remplissage du 2 eme jeu de pions dans le tableau damier lES PIONS DU JOUEUR 2
    damier[16][16]=2;
    damier[16][15]=2;
    damier[16][14]=2;
    damier[16][13]=2;
    damier[16][12]=2;
    damier[15][16]=2;
    damier[15][15]=2;
    damier[15][14]=2;
    damier[15][13]=2;
    damier[15][12]=2;
    damier[14][16]=2;
    damier[14][15]=2;
    damier[14][14]=2;
    damier[14][13]=2;
    damier[13][16]=2;
    damier[13][15]=2;
    damier[13][14]=2;
    damier[12][16]=2;
    damier[12][15]=2;

    //affichage du plateau de jeu + Jeu
    int bool1=1;
    int m=1;
    int Joueurquijoue=0;
    srand(time(NULL));
    do {
           fonctionaffichagepion(damier, 18, 18);
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
    detectiondevictoire (damier, Joueurquijoue, 2);
    } while (bool1==1);
}
void fonctiondeplacementparlordi(int damier[18][18], int numerodejoueur){
srand(time(NULL));
int LIGNE = 0, COLONNE = 0, LIGNEARRIVE = 0, COLONNEARRIVE = 0;
int m, t;
m=rand()%16+1;
t=rand()%16+1;

// ON CHERCHE LE PIONS DE DEPART !!!

    int autorisation=0;

    while (autorisation==0){

        LIGNE=m%16+1;
        COLONNE=t%16+1;
        printf("Les coordonées de LIGNE %d et COLONNE %d\n", LIGNE, COLONNE);

        if ((damier[LIGNE-1][COLONNE]== 0) || (damier[LIGNE+1][COLONNE] == 0) || (damier[LIGNE][COLONNE-1]==0) || (damier[LIGNE][COLONNE+1]==0) || (damier[LIGNE+1][COLONNE-1]==0) || (damier[LIGNE-1][COLONNE-1]==0) || (damier[LIGNE-1][COLONNE+1]==0) || (damier[LIGNE+1][COLONNE+1]==0))
            {
                if (damier[LIGNE][COLONNE]==numerodejoueur){

                    autorisation=1;
                    printf("Nous venons d'autoriser la prise de ce pion %d %d \n", LIGNE, COLONNE);

                }
        }

        if (t%16+1==8){
            m++;
        }

    t++;
    };


// ON CHERCHE UN ENDROIT D ARRIVER !!!
m=rand()%16+1;
t=rand()%16+1;
int autorisation2=0;

    while (autorisation2==0){

        LIGNEARRIVE=m%16+1;
        COLONNEARRIVE=t%16+1;
        printf("Les coordonées de LIGNE ARRIVER %d et COLONNE ARRIVER %d\n", LIGNEARRIVE, COLONNEARRIVE);

        if (((LIGNEARRIVE==LIGNE+1 && COLONNEARRIVE==COLONNE-1) || (LIGNEARRIVE==LIGNE+1 && COLONNEARRIVE==COLONNE+1) || (LIGNEARRIVE==LIGNE && COLONNEARRIVE==COLONNE+1)
                || (LIGNEARRIVE==LIGNE && COLONNEARRIVE==COLONNE-1) || (LIGNEARRIVE==LIGNE+1 && COLONNEARRIVE==COLONNE) || (LIGNEARRIVE==LIGNE+1 && COLONNEARRIVE==COLONNE-1)
                || (LIGNEARRIVE==LIGNE-1 && COLONNEARRIVE==COLONNE-1) || (LIGNEARRIVE==LIGNE-1 && COLONNEARRIVE==COLONNE ))){

                if (damier[LIGNEARRIVE][COLONNEARRIVE]==0)
                {
                    autorisation2=1;
                    printf("Nous venons d'autoriser le deplacement de ce pion %d %d \n", LIGNEARRIVE, COLONNEARRIVE);

                }
        }

        if (t%16+1==8){
            m++;
        }

    t++;
    };


    //Affichage avec clignotement DEPART
    int i;
        for (i=0; i<10; i++){

            if (i%2==1){
                damier[LIGNE][COLONNE]=0;
            }
            if (i%2==0){
                damier[LIGNE][COLONNE]=numerodejoueur;
            }

            system("clear");
            fonctionaffichagepion(damier, 18, 18);
            //sleep(1);



        }
    //Affichage avec clignotement ARRIVER
        int j;
        for (j=1; j<4; j++){

            if (j%2==1){
                damier[LIGNEARRIVE][COLONNEARRIVE]=numerodejoueur;
            }
            if (j%2==0){
                damier[LIGNEARRIVE][COLONNEARRIVE]=0;
            }
                system("clear");
                fonctionaffichagepion(damier, 18, 18);
                //sleep(1);

            }

        //printf("L'ordinateur a bouger le pion qui était en Ligne %d , Colonne %d \nL'ordinateur a placé ce pion en Ligne %d, Colonne %d\n", LIGNE, COLONNE, LIGNEARRIVE,COLONNEARRIVE);
        //sleep(2);
    }
