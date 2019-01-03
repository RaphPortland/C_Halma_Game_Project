# Halma Game 


English description : 


https://en.wikipedia.org/wiki/Halma




French description : 
<p> Vous développerez le jeu de Halma en mode console en langage C.
Le damier sera figuré par un affichage d’une matrice 16x16 de caractères et vous utiliserez les couleurs (voir Google pour l’utilisation de la couleur en mode console) et les différents types de caractères pour symboliser les maisons et les pions.
Via un menu utilisateur, vous proposerez un jeu à 2 ou un jeu à 4. En plus du travail ci-dessus imposé à tous, vous permettrez aux 2 ou 4 joueurs de déplacer leurs pions sans aucun contrôle de validité des déplacements. Par le moyen de votre choix, le joueur indique le pion à bouger et sa nouvelle position après UN saut ou UN pas. S’il souhaite continuer son déplacement, il indique la nouvelle position suivante, jusqu’à indiquer par le moyen de votre choix que le déplacement du pion est terminé. Vous permettrez alors au joueur suivant de jouer.</p>
<p> Vous vérifierez cette fois les déplacements du pion pour ne pas laisser passer les déplacements interdits.
Pour rappel des règles, 
soit le joueur fait un pas vers une case adjacente dans les 8 directions et son déplacement est terminé,
Soit le joueur fait un saut par dessus un autre pion adjacent dans les 8 directions (parmi les siens ou ceux de ses adversaires) pour aboutir sur une case de couleur identique à celle de départ, et peut dans ce cas enchaîner un autre saut, puis un autre... selon les mêmes conditions, en changeant de direction au besoin, tant que la disposition des pions sur le damier permet les sauts dans le respect des règles.
</p>
<p>Vous permettrez de jouer une partie à 2, joueur humain contre l’ordinateur. 
Le joueur humain joue toujours en premier. Ses déplacements sont contrôlés comme précisé au point précédent.
Lorsque l’ordinateur déplace un pion à son tour, il fait clignoter 4 fois le pion qu’il va déplacer, puis 2 fois le pion à sa nouvelle position. Si l’ordinateur réalise des sauts successifs pour déplacer son pion, chaque nouvelle position fait clignoter le pion 2 fois.
L’ordinateur détectera et annoncera la victoire du joueur humain ou de la machine. </p>
<p> Vous proposerez une partie à 2 (« machine » contre « machine ») avec déplacements contrôlés et détection de victoire. </p>
<p> Vous proposerez une partie à 4 (de 0 à 3 humains, contre 1 à 4 « machines ») avec déplacements contrôlés et détection de victoire.</p>
