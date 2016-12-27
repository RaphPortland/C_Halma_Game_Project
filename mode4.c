//
//  mode4.c
//  Projetinfo
//
//  Created by Partouche on 12/12/2016.
//  Copyright © 2016 Partouche. All rights reserved.
//

#include "mode4.h"


void fonctionmode4 (){


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

    //affichage du plateau de jeu
    int bool1=1;
    int m=1;
    int Joueurquijoue=0;
    do {
        fonctionaffichagepion(damier, 18, 18);
        int Aquiletour=m%2;
        if (Aquiletour!=0)
        {
            printf("\nA l'ordi 1 de jouer\n");
            fonctiondeplacementparlordi(damier, 1);
        }
        else {
            printf("\nA l'ordi 2 de jouer\n");
            fonctiondeplacementparlordi(damier, 2);
            printf("Coucou un pion a bouger et ça va recommencez\n");
        }
        m++;
        if (m%4==0){
        //sleep(4);
        }
        printf("Voici le %d coup jouer par un ordi donc la moitié pour 1 joueur\n", m-1);
        detectiondevictoire (damier, Joueurquijoue, 2);
        system("clear");
    } while (bool1==1);

}
