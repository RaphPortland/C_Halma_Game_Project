
//  affichagemode1.h
//  Projetinfo
//
//  Created by Partouche on 17/11/2016.
//  Copyright © 2016 Partouche. All rights reserved.
// Pour les couleurs : https://openclassrooms.com/courses/des-couleurs-dans-la-console-linux
#ifndef affichagemode1_h
#define affichagemode1_h
#define couleur(param) printf("\033[%sm",param)
#include <stdio.h>
#include "damier.h"

#endif /* affichagemode1_h */
void fonctionaffichagepion(int damier[18][18], int tailleI, int tailleJ, int nbrsdejoueur);
void fonctionturorielmode1();
