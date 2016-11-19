//
//  affichagemode1.c
//  Projetinfo
//
//  Created by Partouche on 17/11/2016.
//  Copyright © 2016 Partouche. All rights reserved.
//

#include "affichagemode1.h"


void fonctionaffichagepionenmode1(int damier[16][16], int tailleI, int tailleJ){


    for ( int ibis=0 ; ibis< tailleI; ibis++)
    {
        for (int jbis=0 ;jbis<tailleJ ; jbis++)
        {
            printf("%d ", damier[ibis][jbis]);
        }
        printf("\n");
    }

}

void fonctiondeplacementdespionsduj1(int damier[16][16]){
    printf("Choissiez un pion :\n");
    int LIGNE, COLONNE;
    scanf("%d %d", &LIGNE, &COLONNE);
    
    damier[LIGNE][COLONNE]=0;
    printf("Choissisez l'endroit d'arriver : \n");
    int LIGNEARRIVE, COLONNEARRIVE;
    scanf("%d %d", &LIGNEARRIVE, &COLONNEARRIVE);
    damier[LIGNEARRIVE][COLONNEARRIVE]=1;
}
void fonctiondeplacementdespionsduj2(int damier[16][16]){
    printf("Choissiez un pion :\n");
    int LIGNE, COLONNE;
    scanf("%d %d", &LIGNE, &COLONNE);
    
    damier[LIGNE][COLONNE]=0;
    printf("Choissisez l'endroit d'arriver : \n");
    int LIGNEARRIVE, COLONNEARRIVE;
    scanf("%d %d", &LIGNEARRIVE, &COLONNEARRIVE);
    damier[LIGNEARRIVE][COLONNEARRIVE]=2;
}
