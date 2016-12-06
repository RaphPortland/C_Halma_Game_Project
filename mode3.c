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
    damier[1][0]=1;
    damier[1][1]=1;
    damier[1][2]=1;
    damier[1][3]=1;
    damier[2][0]=1;
    damier[2][1]=1;
    damier[2][2]=1;
    damier[3][0]=1;
    damier[3][1]=1;
    
    
    //Remplissage du 2 eme jeu de pions dans le tableau damier lES PIONS DU JOUEUR 2
    
    damier[15][15]=2;
    damier[15][14]=2;
    damier[15][13]=2;
    damier[15][12]=2;
    damier[14][15]=2;
    damier[14][14]=2;
    damier[14][13]=2;
    damier[14][12]=2;
    damier[13][15]=2;
    damier[13][14]=2;
    damier[13][13]=2;
    damier[12][15]=2;
    damier[12][14]=2;
    
    // Remplissage du 3eme jeu de pions dans le tableau LES PIONS DU JOUEUR 4
    
    damier[15][0]=3;
    damier[15][1]=3;
    damier[15][2]=3;
    damier[15][3]=3;
    damier[14][0]=3;
    damier[14][1]=3;
    damier[14][2]=3;
    damier[14][3]=3;
    damier[13][0]=3;
    damier[13][1]=3;
    damier[13][2]=3;
    damier[12][0]=3;
    damier[12][1]=3;
    
    //Remplissage du 4 eme jeu de pions dans le tableau LES PIONS DU JOUEUR 3
    
    damier[0][15]=4;
    damier[0][14]=4;
    damier[0][13]=4;
    damier[0][12]=4;
    damier[1][15]=4;
    damier[1][14]=4;
    damier[1][13]=4;
    damier[1][12]=4;
    damier[2][15]=4;
    damier[2][14]=4;
    damier[2][13]=4;
    damier[3][15]=4;
    damier[3][14]=4;
    
    
    //affichage du plateau de jeu a 4 joueur et deplacement de pions Verifié
    int bool1=1;
    int m=1;
    do {
        fonctionaffichagepion(damier, 16, 16);
        int Joueurquijoue=m%4;
        if (Joueurquijoue==1)
        {
            printf("\nAu joueur 1 de jouer\n");
            fonctiondedeplacementdepionsdujoueurI(damier, 1);
        }
        else if(Joueurquijoue==2)
        {
            printf("\nAu joueur 2 de jouer\n");
            fonctiondedeplacementdepionsdujoueurI(damier, 2);
        }
        else if (Joueurquijoue==3) {

            printf("\nAu joueur 3 de jouer\n");
            fonctiondedeplacementdepionsdujoueurI(damier, 3);

            }
        else {
            printf("\nAu joueur 4 de jouer\n");
            fonctiondedeplacementdepionsdujoueurI(damier, 4);
            
        }
        m++;
        system("clear\n");
    } while (bool1==1);
}
