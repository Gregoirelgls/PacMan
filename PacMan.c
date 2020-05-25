//
//  Projet Pac-Man en langage C
//  UE3.2
//
//  Created by Grégoire Langlois and Raphaël Torchy on 15/04/2020.
//  Copyright © 2020 Greg Langlois & Raph Torchy. All rights reserved.

//Bibliothèques
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <stdbool.h>
#include <unistd.h>

//Menu
int Menu() {
    int choix = 0;
//    Titre en ASCII Art
    printf(" _______                              __       __                     \n");
    printf("|       \\                            |  \\     /  \\                    \n");
    printf("| $$$$$$$\\ ______    _______         | $$\\   /  $$  ______   _______  \n");
    printf("| $$__/ $$|      \\  /       \\ ______ | $$$\\ /  $$$ |      \\ |       \\ \n");
    printf("| $$    $$ \\$$$$$$\\|  $$$$$$$|      \\| $$$$\\  $$$$  \\$$$$$$\\| $$$$$$$\\\n");
    printf("| $$$$$$$ /      $$| $$       \\$$$$$$| $$\\$$ $$ $$ /      $$| $$  | $$\n");
    printf("| $$     |  $$$$$$$| $$_____         | $$ \\$$$| $$|  $$$$$$$| $$  | $$\n");
    printf("| $$      \\$$    $$ \\$$     \\        | $$  \\$ | $$ \\$$    $$| $$  | $$\n");
    printf(" \\$$       \\$$$$$$$  \\$$$$$$$         \\$$      \\$$  \\$$$$$$$ \\$$   \\$$\n");
    printf(" _          _____                          _    _____         _   \n");
    printf("| |_ _ _   |   __|___ ___ ___    ___ ___ _| |  | __  |___ ___| |_ \n");
    printf("| . | | |  |  |  |  _| -_| . |  | .'|   | . |  |    -| .'| . |   |\n");
    printf("|___|_  |  |_____|_| |___|_  |  |__,|_|_|___|  |__|__|__,|  _|_|_|\n");
    printf("    |___|                |___|                           |_|      \n");
    printf("\n");
//    Jouer
    printf(" __                  __    ______    __    __   _______ .______   \n");
    printf("/_ |     _          |  |  /  __  \\  |  |  |  | |   ____||   _  \\ \n");
    printf(" | |    (_)         |  | |  |  |  | |  |  |  | |  |__   |  |_)  | \n");
    printf(" | |          .--.  |  | |  |  |  | |  |  |  | |   __|  |      /   \n");
    printf(" | |     _    |  `--'  | |  `--'  | |  `--'  | |  |____ |  |\\  \\----.\n");
    printf(" |_|    (_)    \\______/   \\______/   \\______/  |_______|| _| `._____|\n");
//    Tableau des scores
    printf(" ___              _______  __  .___________. __    __   __    __  .______   \n");
    printf("|__ \\      _     /  _____||  | |           ||  |  |  | |  |  |  | |   _  \\  \n");
    printf("   ) |    (_)   |  |  __  |  | `---|  |----`|  |__|  | |  |  |  | |  |_)  | \n");
    printf("  / /           |  | |_ | |  |     |  |     |   __   | |  |  |  | |   _  <  \n");
    printf(" / /_      _    |  |__| | |  |     |  |     |  |  |  | |  `--'  | |  |_)  | \n");
    printf("|____|    (_)    \\______| |__|     |__|     |__|  |__|  \\______/  |______/  \n");
//    Infos et crédits
    printf(" ____             __  .__   __.  _______   ______        _______.\n");
    printf("|___ \\      _    |  | |  \\ |  | |   ____| /  __  \\      /       |\n");
    printf("  __) |    (_)   |  | |   \\|  | |  |__   |  |  |  |    |   (----`\n");
    printf(" |__ <           |  | |  . `  | |   __|  |  |  |  |     \\   \\    \n");
    printf(" ___) |     _    |  | |  |\\   | |  |     |  `--'  | .----)   | \n");
    printf("|____/     (_)   |__| |__| \\__| |__|      \\______/  |_______/\n");
//    Quitter le programme
    printf(" _  _               ______      __    __   __  .___________.___________. _______ .______ \n");
    printf("| || |       _     /  __  \\    |  |  |  | |  | |           |           ||   ____||   _  \\\n");
    printf("| || |_     (_)   |  |  |  |   |  |  |  | |  | `---|  |----`---|  |----`|  |__   |  |_)  |\n");
    printf("|__   _|          |  |  |  |   |  |  |  | |  |     |  |        |  |     |   __|  |      /\n");
    printf("   | |       _    |  `--'  '--.|  `--'  | |  |     |  |        |  |     |  |____ |  |\\  \\----.\n");
    printf("   |_|      (_)    \\_____\\_____\\\\______/  |__|     |__|        |__|     |_______|| _| `._____|\n");
    printf("\n");
    printf("Aller dans: \n");
    scanf("%d", &choix);
    system("clear");
    return choix;
}
//Scores
void GitHub() {
    printf("Nous vous mettons le code source à disposition en Open Source sur GitHub\n");
    printf("https://github.com/Gregoirelgls/PacMan/blob/master/PacMan.c\n");
}
//Infos
void Infos() {
    printf("Déplacez Pac-Man et mangez toutes les Pac-Gommes sans vous faire attraper par les fantômes !\n");
    printf("Ce jeu à été développé par Greg Langlois et Raph Torchy\n");
    printf("Afin de valider le projet d'Algorithmique de l'UE3\n");
    printf("UniLasalle, Campus de Rouen\n");
    printf("2020, Semestre 2\n");
}
//Stopper le programme
void Stop() {
    system("stop");
}
//Ecran de Game Over
void GameOver(int score) {
    printf("Perdu ! Vous ferez mieux la prochaine fois\n");
    printf("Votre score: %d pts, c'est pas mal !\n", score);
}
//Ecran de Victoire
void Victoire(int score) {
    printf("Félicitations ! Vous avez gagné !\n");
    printf("Votre score est de %d\n", score);
    printf("Vous pouvez rejouer en fermant et en relançant cette page ;)\n");
}
//Fonction de nombre aléatoire entre 1 et 4
int randomNumber() {
    int borneMin = 0;
    int borneMax = 1;
    return (rand() % (borneMax - borneMin+1)) + borneMin;
}



//Saisie de la direction:
char SaisieDir() {
    char dir;
    printf("|droite: d|gauche: q|haut: z|bas: s| \n");
    printf("entrez la direction de Pac-Man:\n");
    scanf("%c", &dir);
    system("clear");
    return dir;
}


//Compteur de Pac-Gommes pour l'afficher à coté du score
int cptPacGommes(int map1[10][12]) {
    int x, y, cptgomme=0;
    for(x=0; x<10; x++) {
        for(y=0; y<12; y++) {
            if(map1[x][y] == 3) {
                cptgomme++;
            }
        }
    }
    return cptgomme;
}
//Compteur de cases vides pour calculer le score (pas sur que ça fonctionne, ça va peut être reprendre en compte toutes les cases vides)
int cptScore(int tab[10][12]) {
    int x,y, score=0;
    for(x=0; x<10; x++) {
        for(y=0; y<12; y++) {
            if(tab[x][y] == 0) {
                score= score+10;
            }
        }
    }
    return score;
}

//Fonction de recopie: recopie le contenu d'un tableau dans un autre (A compléter), ça peut servir pour les déplacements
void recopie(int tab1[10][12], int tab2[10][12]) {

    int i, j;
    for(i = 0; i < 10; i++) {
        for(j = 0; j < 12; j++) {
            if(tab1[i][j] == 0) {
                tab2[i][j] = 0;
            }
            if(tab1[i][j] == 1) {
                tab2[i][j] = 1;
            }
            if(tab1[i][j] == 2) {
                tab2[i][j] = 2;
            }
            if(tab1[i][j] == 3) {
                tab2[i][j] = 3;
            }
            if(tab1[i][j] == 4) {
                tab2[i][j] = 4;
            }
            if(tab1[i][j] == 5) {
                tab2[i][j] = 5;
            }
        }
    }
}
//Caractères:
//pacman: ᗧ
//fantome: ᗣ

//Fonction d'affichage (remplace les valeurs par des caractères)
    void affichage(int tab[10][12]) {
    int i=0, j=0;
    printf("███████████████████████████████████\n");
    for(i=0; i<10; i++) {
        for(j=0; j<12; j++) {
            if(tab[i][j] == 0) {
                printf("   ");
            }
            if(tab[i][j] == 1) {
                printf(" █ ");
            }
            if(tab[i][j] == 3) {
                printf(" • ");
            }
            if(tab[i][j] == 4) {
                printf(" ᗧ ");
            }
            if(tab[i][j] == 5) {
                printf(" ᗣ ");
            }
        }
        printf("\n");
    }
    printf("███████████████████████████████████\n");
}
//Lancement de la partie
int Jouer() {
    //Déclaration des variables
        int map1[10][12] = {{1,5,3,3,3,3,3,3,3,3,5,1},
                            {1,1,3,1,1,1,1,3,1,1,3,1},
                            {1,1,3,1,3,3,3,3,1,3,3,1},
                            {1,3,3,1,3,1,3,3,1,3,1,1},
                            {1,3,3,3,3,0,3,3,3,3,1,1},
                            {1,3,1,1,1,3,1,1,1,3,1,1},
                            {1,3,3,3,1,3,1,1,1,3,3,1},
                            {1,3,1,3,1,3,3,3,3,3,1,1},
                            {1,3,1,3,1,1,1,3,3,1,1,1},
                            {1,5,3,3,3,3,3,3,3,3,5,1}};
        char dir = 'x';
        int tmp[10][12];
        bool TourSuivant = true;
        int fin = 0;
//    Coordonnées du Pac-Man
        int pacx= 4;
        int pacy = 5;
//    Coordonnées pour le déplacement aléatoire
        int ftdirx = 0;
        int ftdiry = 0;
        int random = rand()%2;
        char test = 0;
        int cptPacGomme = 0;
//    Position initiales des fantômes
//    Fantôme 1
        int ft1x = 0;
        int ft1y = 1;
//    Fantôme 2
        int ft2x = 0;
        int ft2y = 10;
//    Fantôme 3
        int ft3x = 9;
        int ft3y = 1;
//    Fantôme 4
        int ft4x = 9;
        int ft4y = 10;
    
        recopie(map1,tmp);
    //    Début de la partie
        affichage(map1);
        
    //    Saisie de la direction + contrôle de saisie
        dir = SaisieDir();
        while(dir != 'd' || dir != 'q' || dir != 's' || dir != 'z') {
            printf("Direction non-valide\n");
            dir = SaisieDir();
//            Déplacement des fantômes aléatoirement NON FONCTIONNEL
         /*   while (-1) {
                    // fantome 1
                    tmp[ft1x][ft1y]=3;
            
                    random=rand()%2;
                    if (random==1) {
                        ftdirx=rand()%2;
                        if (ftdirx==1) {
                            if(tmp[ft1x+1][ft1y]!=1 && tmp[ft1x+1][ft1y]!=5) {
                                ft1x++;
                            }
                        }
                        if (ftdirx==0) {
                            if(tmp[ft1x-1][ft1y]!=1 && tmp[ft1x-1][ft1y]!=5) {
                                ft1x--;
                            }
                        }
            
                    }
                    if (random==0) {
                        ftdiry=rand()%2;
                        if (ftdiry==1) {
                            if(tmp[ft1x][ft1y+1]!=1 && tmp[ft1x][ft1y+1]!=5) {
                                ft1y++;
                            }
                        }
                       if (ftdiry==0)
                        {
                            if(tmp[ft1x][ft1y-1]!=1 && tmp[ft1x][ft1y-1]!=5)
                            {
                                ft1y--;
                            }
                        }
                    }
                    tmp [ft1x][ft1y]=5;
            
            
                 //  fantome 2
            
            
                     tmp[ft2x][ft2y]=3;
            
                    random=rand()%2;
                    if (random==1)
                    {
                        ftdirx=rand()%2;
                        if (ftdirx==1)
                        {
                            if(tmp[ft2x+1][ft2y]!=1 && tmp[ft2x+1][ft2y]!=5)
                            {
                                ft2x++;
                            }
                        }
                        if (ftdirx==0)
                        {
                            if(tmp[ft2x-1][ft2y]!=1 && tmp[ft2x-1][ft2y]!=5)
                            {
                                ft2x--;
                            }
                        }
            
                    }
                    if (random==0)
                    {
                        ftdiry=rand()%2;
                        if (ftdiry==1)
                        {
                            if(tmp[ft2x][ft2y+1]!=1 && tmp[ft2x][ft2y+1]!=5)
                            {
                                ft2y++;
                            }
                        }
                       if (ftdiry==0)
                        {
                            if(tmp[ft2x][ft2y-1]!=1 && tmp[ft2x][ft2y-1]!=5)
                            {
                                ft2y--;
                            }
                        }
                    }
                    tmp [ft2x][ft2y]=5;
            }*/

    //Déplacements du pacman
        tmp[pacx][pacy] = 4;
            
        if(dir == 'd' && tmp[pacx][pacy+1] != 1){
            if(tmp[pacx][pacy+1] == 3) {
                cptPacGomme++;
            }
            tmp[pacx][pacy] = 0;
            tmp[pacx][pacy+1] = 4;
            pacy++;
        }
        if(dir == 'q' && tmp[pacx][pacy-1] != 1){
            if(tmp[pacx][pacy-1] == 3) {
                cptPacGomme++;
            }
            tmp[pacx][pacy] = 0;
            tmp[pacx][pacy-1] = 4;
            pacy--;
        }
        if(dir == 's' && tmp[pacx+1][pacy] != 1) {
            if(tmp[pacx+1][pacy] == 3) {
                cptPacGomme++;
            }
            tmp[pacx][pacy] = 0;
            tmp[pacx+1][pacy] = 4;
            pacx++;
        }
        if(dir == 'z' && tmp[pacx-1][pacy] != 1) {
            if(tmp[pacx-1][pacy] == 3) {
                cptPacGomme++;
            }
            tmp[pacx][pacy] = 0;
            tmp[pacx-1][pacy] = 4;
            pacx--;
        }
            //            Game over si le pacman rencontre un fantome
            if(pacx == ft1x && pacy == ft1y) {
                fin = 1;
            }
            if(pacx == ft2x && pacy == ft2y) {
                fin = 1;
            }
            if(pacx == ft3x && pacy == ft3y) {
                fin = 1;
            }
            if(pacx == ft4x && pacy == ft4y) {
                fin = 1;
            }
//            Victoire si le joueur récupère toutes les Pac-Gommes
            if(cptPacGomme == 60) {
                fin = 3;
            }
//            Déplacement aléatoire du fantome
            if(fin == 0) {
            dir = ' ';
            
            
            
    //    Affichage de l'étape suivante
            recopie(tmp,map1);
            affichage(map1);
            printf("Score : %d \n", cptPacGomme);
            }
            if(fin == 1) {
                GameOver(cptPacGomme);
            }
            if(fin == 3) {
                Victoire(cptPacGomme);
            }
                
            
        }
    return fin;
}
//Début du main
int main() {
    srand(time(NULL));
    int choix = 0;
    char test = 0;
    bool TourSuivant = true;
//    Menu : choix de la section
    choix = Menu();
    if(choix == 1) {
        Jouer();
    }
    if(choix == 2) {
        GitHub();
        test = getchar();
        choix = Menu();
    }
    if(choix == 3) {
        Infos();
        test = getchar();
        choix = Menu();
    }
    if (choix == 4) {
        Stop();
        
    }
   
//    printf("Created by Grégoire Langlois and Raphaël Torchy\n");

    return 0;
}
