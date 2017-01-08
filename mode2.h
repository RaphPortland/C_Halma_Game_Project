//
//  mode2.h
//  Projetinfo
//
//  Created by Partouche on 10/12/2016.
//  Copyright © 2016 Partouche. All rights reserved.

#ifndef mode2_h
#define mode2_h
//#include "lesfctdedeplacementdespions.h"
#include "affichagemode1.h"
#include <stdio.h>

#endif /* mode2_h */
void fonctionmode2();
void fonctionaffichagepion(int damier[18][18], int tailleI, int tailleJ, int nbrsdejoueur);
void fonctiondedeplacementdepionsdujoueurI(int damier[18][18], int Joueurquijoue);
void fonctiondeplacementparlordi(int damier[18][18], int numerodejoueur, int modex, int nbrsdecoup);
int detectiondevictoire (int damier[18][18], int numerodujoueur, int nombredejoueur);
