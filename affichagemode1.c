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
    int jbis, ibis;
    for (ibis=0 ; ibis< tailleI; ibis++)
    {
        if (ibis<10){
            printf("\n %d.  ", ibis);}
        else{printf("\n %d. ", ibis);}
        for (jbis=0 ;jbis<tailleJ ; jbis++)
        {
            printf("%d  ", damier[ibis][jbis]);
        }
    }
    
}
