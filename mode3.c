//
//  mode3.c
//  Projetinfo
//
//  Created by Partouche on 19/11/2016.
//  Copyright © 2016 Partouche. All rights reserved.
//

#include "mode3.h"


void fonctionmode3(){


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
    damier[2][1]=1;
    damier[2][2]=1;
    damier[2][3]=1;
    damier[2][4]=1;
    damier[3][1]=1;
    damier[3][2]=1;
    damier[3][3]=1;
    damier[4][1]=1;
    damier[4][2]=1;


    //Remplissage du 2 eme jeu de pions dans le tableau damier lES PIONS DU JOUEUR 2

    damier[16][16]=2;
    damier[16][15]=2;
    damier[16][14]=2;
    damier[16][13]=2;
    damier[15][16]=2;
    damier[15][15]=2;
    damier[15][14]=2;
    damier[15][13]=2;
    damier[14][16]=2;
    damier[14][15]=2;
    damier[14][14]=2;
    damier[13][16]=2;
    damier[13][15]=2;

    // Remplissage du 3eme jeu de pions dans le tableau LES PIONS DU JOUEUR 4

    damier[16][1]=3;
    damier[16][2]=3;
    damier[16][3]=3;
    damier[16][4]=3;
    damier[15][1]=3;
    damier[15][2]=3;
    damier[15][3]=3;
    damier[15][4]=3;
    damier[14][1]=3;
    damier[14][2]=3;
    damier[14][3]=3;
    damier[13][1]=3;
    damier[13][2]=3;

    //Remplissage du 4 eme jeu de pions dans le tableau LES PIONS DU JOUEUR 3

    damier[1][16]=4;
    damier[1][15]=4;
    damier[1][14]=4;
    damier[1][13]=4;
    damier[2][16]=4;
    damier[2][15]=4;
    damier[2][14]=4;
    damier[2][13]=4;
    damier[3][16]=4;
    damier[3][15]=4;
    damier[3][14]=4;
    damier[4][16]=4;
    damier[4][15]=4;


    //affichage du plateau de jeu a 4 joueur et deplacement de pions Verifié
    int bool1=1;
    int m=1;
    int Joueurquijoue=0;
    do {
        fonctionaffichagepion(damier, 18, 18);
        int Aquiletour=m%4;
        if (Aquiletour==1)
        {
            printf("\nAu joueur 1 de jouer\n");
            fonctiondedeplacementdepionsdujoueurI(damier, 1);
            Joueurquijoue=1;
        }
        else if(Aquiletour==2)
        {
            printf("\nAu joueur 2 de jouer\n");
            fonctiondedeplacementdepionsdujoueurI(damier, 2);
            Joueurquijoue=2;
        }
        else if (Aquiletour==3)
        {
            printf("\nAu joueur 3 de jouer\n");
            fonctiondedeplacementdepionsdujoueurI(damier, 3);
            Joueurquijoue=3;
        }
        else
        {
            printf("\nAu joueur 4 de jouer\n");
            fonctiondedeplacementdepionsdujoueurI(damier, 4);
            Joueurquijoue=4;
        }
        m++;
        detectiondevictoire (damier, Joueurquijoue, 4);
        system("clear\n");
    } while (bool1==1);
}