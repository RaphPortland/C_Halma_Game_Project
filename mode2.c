#include "mode2.h"
#include "time.h"
#include <stdlib.h>
#include <unistd.h>

void fonctionmode2(){
    //Remplissage de tout le tableau avec 0
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
     //Remplissage du 1er jeu de pions dans le tableau du damier LES PIONS DU JOUEUR 1
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
    //Remplissage du 2ème jeu de pions dans le tableau du damier LES PIONS DU JOUEUR 2
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
           fonctionaffichagepion(damier, 18, 18, 2);
        int Aquiletour=m%2;
        if (Aquiletour!=0)
        {
            printf("\nAu joueur 1 de jouer\n");
            fonctiondedeplacementdepionsdujoueurI(damier, 1);
            Joueurquijoue=1;
        }
            else {
            printf("\nL'ordinateur va jouer : \n");
            fonctiondeplacementparlordi(damier, 2, 2, m-1);
            Joueurquijoue=2;
        }
    m++;
    system("clear");
    detectiondevictoire (damier, Joueurquijoue, 2);
    } while (bool1==1);
}

void fonctiondeplacementparlordi(int damier[18][18], int numerodejoueur, int modex, int nbrsdecoup){
srand(time(NULL));
int LIGNE = 0, COLONNE = 0, LIGNEARRIVE = 0, COLONNEARRIVE = 0;
int m, t;

m=rand()%16+1;
t=rand()%16+1;

// ON CHERCHE LE PIONS DE DEPART POUR LE JOUEUR I !!
    int autorisation=0;
    int i=0;

    while (autorisation==0){

        if (numerodejoueur==1){

            LIGNE=16-m%16;
            COLONNE=16-t%16;
        }

        if (numerodejoueur==2){
            LIGNE=m%16+1;
            COLONNE=t%16+1;
        }
        if (numerodejoueur==3){
            LIGNE=m%16+1;
            COLONNE=16-t%16;
        }
        if (numerodejoueur==4){
            LIGNE=16-m%16;
            COLONNE=t%16+1;
        }
        if (i>500){
            printf("BOUCLE DEPART \nValeur LIGNE départ : %d Valeur COLONNE départ : %d\n", LIGNE, COLONNE);
            printf("Valeur LIGNE arrivée : %d Valeur COLONNE arrivée : %d\n", LIGNEARRIVE, COLONNEARRIVE);

        }

// Acceptation du pas 
        if ((damier[LIGNE-1][COLONNE]== 0) || (damier[LIGNE+1][COLONNE] == 0) || (damier[LIGNE][COLONNE-1]==0) || (damier[LIGNE][COLONNE+1]==0) || (damier[LIGNE+1][COLONNE-1]==0) || (damier[LIGNE-1][COLONNE-1]==0) || (damier[LIGNE-1][COLONNE+1]==0) || (damier[LIGNE+1][COLONNE+1]==0))
        {
            if (damier[LIGNE][COLONNE]==numerodejoueur){

                autorisation=1;

            }
        }

// Acceptation du saut

        if (numerodejoueur==1 && LIGNE==16 && COLONNE==16){
            autorisation=0;
        }

        if (t%17+1==17){
            m++;
        }

    i++;
    t++;
    };

// ON CHERCHE UN ENDROIT D'ARRIVEE POUR LE JOUEUR I!!!
m=0;
t=0;
int autorisation2=0;
int j=0;
int w=rand()%16;

    while (autorisation2==0){

// Traitement pour numerodejoueur = 1
        if (j==0 && numerodejoueur==1){
            if (w%4==0){
                LIGNEARRIVE=LIGNE+1;
                COLONNEARRIVE=COLONNE+1;
            }
            else {
                LIGNEARRIVE=LIGNE;
                COLONNEARRIVE=COLONNE+1;
            }
        }

        if (numerodejoueur==1 && j>0){
            LIGNEARRIVE=16-m%16;
            COLONNEARRIVE=16-t%16;
        }
// Traitement pour numerodejoueur = 2
        if(numerodejoueur==2 && j==0){
            if (w%4== 0){
                LIGNEARRIVE=LIGNE-1;
                COLONNEARRIVE=COLONNE-1;
            }
            else {
                LIGNEARRIVE=LIGNE;
                COLONNEARRIVE=COLONNE-1;
            }
        }

        if (numerodejoueur==2 && j>0){
            LIGNEARRIVE=m%16+1;
            COLONNEARRIVE=t%16+1;
        }
// Traitement pour numerodejoueur = 3
        if(numerodejoueur==3 && j==0){
            if (w%4== 0){
                LIGNEARRIVE=LIGNE-1;
                COLONNEARRIVE=COLONNE+1;
            }
            else {
                LIGNEARRIVE=LIGNE;
                COLONNEARRIVE=COLONNE+1;
            }
        }

        if (numerodejoueur==3 && j>0){
            LIGNEARRIVE=m%16+1;
            COLONNEARRIVE=16-t%16;
        }
// Traitement pour numerodejoueur = 4
        if(numerodejoueur==4 && j==0){
            if(w%5==0){
                LIGNEARRIVE=LIGNE+1;
                COLONNEARRIVE=COLONNE-1;
            }
            else {
                LIGNEARRIVE=LIGNE;
                COLONNEARRIVE=COLONNE-1;
            }
        }

        if (numerodejoueur==4 && j>0){
            LIGNEARRIVE=16-m%16;
            COLONNEARRIVE=t%16+1;
        }


        if (j>500){
            printf("BOUCLE ARRIVE\nValeur LIGNE arrivée : %d Valeur COLONNE arrivée : %d\n", LIGNEARRIVE, COLONNEARRIVE);
            printf("Valeur LIGNE départ : %d Valeur COLONNE départ : %d\n", LIGNE, COLONNE);

        }

// Recherche de l'endroit d'arrivée tel que ça soit le résultat d'un pas

        if (((LIGNEARRIVE==LIGNE+1 && COLONNEARRIVE==COLONNE-1) || (LIGNEARRIVE==LIGNE+1 && COLONNEARRIVE==COLONNE+1) || (LIGNEARRIVE==LIGNE && COLONNEARRIVE==COLONNE+1)
                || (LIGNEARRIVE==LIGNE && COLONNEARRIVE==COLONNE-1) || (LIGNEARRIVE==LIGNE+1 && COLONNEARRIVE==COLONNE) || (LIGNEARRIVE==LIGNE-1 && COLONNEARRIVE==COLONNE+1)
                || (LIGNEARRIVE==LIGNE-1 && COLONNEARRIVE==COLONNE-1) || (LIGNEARRIVE==LIGNE-1 && COLONNEARRIVE==COLONNE ))){

                if (damier[LIGNEARRIVE][COLONNEARRIVE]==0)
                {
                    autorisation2=1;
                }
        }

// Recherche de l'endroit d'arrivée tel que ça soit le résultat d'un saut

        if ((COLONNEARRIVE==COLONNE && LIGNEARRIVE==LIGNE+2 && damier[LIGNEARRIVE-1][COLONNEARRIVE]!=0) ||
            (LIGNEARRIVE==LIGNE-2 && COLONNE==COLONNEARRIVE && damier[LIGNEARRIVE+1][COLONNEARRIVE]!=0) ||
            (LIGNEARRIVE==LIGNE && COLONNEARRIVE==COLONNE-2 && damier[LIGNEARRIVE][COLONNEARRIVE+1]!=0) ||
            (LIGNEARRIVE==LIGNE && COLONNEARRIVE==COLONNE+2 && damier[LIGNEARRIVE][COLONNEARRIVE-1]!=0) ||
            (LIGNEARRIVE==LIGNE-2 && COLONNEARRIVE==COLONNE-2 && damier[LIGNEARRIVE+1][COLONNEARRIVE+1]!=0) ||
            (LIGNEARRIVE==LIGNE-2 && COLONNEARRIVE==COLONNE+2 && damier[LIGNEARRIVE+1][COLONNEARRIVE-1]!=0) ||
            (LIGNEARRIVE==LIGNE+2 && COLONNEARRIVE==COLONNE-2 && damier[LIGNEARRIVE-1][COLONNEARRIVE+1]!=0) ||
            (LIGNEARRIVE==LIGNE+2 && COLONNEARRIVE==COLONNE+2 && damier[LIGNEARRIVE-1][COLONNEARRIVE-1]!=0))
        {

                if (damier[LIGNEARRIVE][COLONNEARRIVE]==0)
                {
                    autorisation2=1;

                }

        }

         if (t%16+1==8){
            m++;
        }


    t++;
    j++;
    };


    if (modex==2){
    //Affichage avec clignotement DEPART
    printf("L'ordinateur va bouger le pion qui était en Ligne %d , Colonne %d \nL'ordinateur va placé ce pion en Ligne %d, Colonne %d\n", LIGNE, COLONNE, LIGNEARRIVE,COLONNEARRIVE);
    sleep(9);
    int i;
        for (i=0; i<10; i++){

            if (i%2==1){
                damier[LIGNE][COLONNE]=0;
            }
            if (i%2==0){
                damier[LIGNE][COLONNE]=numerodejoueur;
            }

            system("clear");
            fonctionaffichagepion(damier, 18, 18, 2);
            sleep(2);



        }
    //Affichage avec clignotement ARRIVEE
        int j;
        for (j=1; j<4; j++){

            if (j%2==1){
                damier[LIGNEARRIVE][COLONNEARRIVE]=numerodejoueur;
            }
            if (j%2==0){
                damier[LIGNEARRIVE][COLONNEARRIVE]=0;
            }
                system("clear");
                fonctionaffichagepion(damier, 18, 18, 2);
                sleep(1);

        }

        }

        if (modex!=2){
            damier[LIGNE][COLONNE]=0;
            damier[LIGNEARRIVE][COLONNEARRIVE]=numerodejoueur;
        }
    }
