
//  mode2.h
//  Projetinfo
//
//  Created by Partouche on 10/12/2016.
//  Copyright © 2016 Partouche. All rights reserved.
//

#ifndef mode2_h
#define mode2_h
//#include "lesfctdedeplacementdespions.h"
#include "affichagemode1.h"
#include <stdio.h>

#endif /* mode2_h */
void fonctionmode2();
void fonctionaffichagepion(int damier[16][16], int ibis, int jbis);
void fonctiondedeplacementdepionsdujoueurI(int damier[16][16], int Joueurquijoue);
void fonctiondeplacementparlordi(int damier[16][16], int numerodejoueur);
int detectiondevictoire (int damier[16][16], int numerodujoueur);
