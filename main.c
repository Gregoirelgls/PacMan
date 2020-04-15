//
//  main.c
//  Pac Man
//
//  Created by Grégoire Langlois and Raphaël Torchy on 15/04/2020.
//  Copyright © 2020 Greg Langlois & Raph Torchy. All rights reserved.

//Bibliothèques
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void print(int map[10][10]) {
    int x=0, y=0;
    for(x = 0; x < 10;y++ ) {
        for(y = 0; y < 10; y++) {
            if(map[x][y] == 0) {
                printf(" ");
            }
            if(map[x][y] == 1) {
                printf("#");
            }
            if(map[x][y] == 2) {
                printf("P");
            }
        }
    }
}
int main() {
    printf("Hello World !");
    return 0;
}
