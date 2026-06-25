#include <stdio.h>

#define MAP_SIZE 15

char map[MAP_SIZE][MAP_SIZE];

void gameMap() {
    for (int i = 0; i < MAP_SIZE; i++) {
        for (int j = 0; j < MAP_SIZE; j++) {
            
            if (i == 0 || i == 14 || j == 0 || j == 14) {
                map[i][j] = '#';
	       } else {
                map[i][j] = ' '; 
            }
            
        }
    }
}

void printMap() {
    for (int i = 0; i < MAP_SIZE; i++) {
        for (int j = 0; j < MAP_SIZE; j++) {
            printf("%c ", map[i][j]); 
        }
        printf("\n"); 
    }
}

int main() {
    gameMap(); 
    printMap();      
    return 0;
}
