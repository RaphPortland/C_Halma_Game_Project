//
//  damier.c
//  Projetinfo
//
//  Created by Partouche on 10/11/2016.
//  Copyright © 2016 Partouche. All rights reserved.
//
#include<stdio.h>
#include<stdlib.h>
#include "damier.h"



void fonctionmode1(){
    
    
    //Rempliisage de tout le tableau avec 0
    int damier[16][16];
    
    for (int i=0;i<16;i++)
    {
        for (int j=0;j<16;j++)
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
    
    //affichage du plateau de jeu
    int bool1=1;
    int m=1;
    do {
           fonctionaffichagepion(damier, 16, 16);
        int Joueurquijoue=m%2;
        if (Joueurquijoue!=0)
        {
            printf("Au joueur 1 de jouer\n");
            fonctiondeplacementdespionsduj1(damier);
        }
            else {
            printf("Au joueur 2 de jouer\n");
            fonctiondeplacementdespionsduj2(damier);
                
        }
        m++;
    system("clear");
    } while (bool1==1);
}
    
    
    
    
    
    
    
    
    
    
    
    
