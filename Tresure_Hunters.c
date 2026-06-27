#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define Map_Size 15
#define Wall_Count 30
#define Treasures_Count 12
#define Helth_Packs 5
#define Key_Count 3
#define Doors 3
#define Traps 10

char map[Map_Size][Map_Size];
char hiddenTraps[Map_Size][Map_Size];

void walls()
{
	for(int i = 0; i < Wall_Count; i++){
		int r, c;
		do {
			r = (rand() % (Map_Size - 2)) + 1;
			c = (rand() % (Map_Size - 2)) + 1;
		}
		while(map[r][c] != ' ');
		map[r][c] = '#';

	}

}

void treasures()
{
	for(int i = 0; i < Treasures_Count; i++){
		int r, c;
		do{
			r = (rand() % (Map_Size -2)) + 1;
			c = (rand() % (Map_Size -2)) + 1;
		}
		while(map[r][c] != ' ');
		map[r][c] = 'T';
	}
}

void healthPacks()
{
	for(int i = 0; i < Helth_Packs; i++ ){
		int r, c;
		do {
			r = (rand() % (Map_Size - 2)) + 1;
			c = (rand() % (Map_Size - 2)) + 1;
		}
		while(map[r][c] != ' ');
		map[r][c] = 'H';
	}
}

void keys()
{
	for(int i = 0; i < Key_Count; i++){
		int r, c;
		do{
			r = (rand() % (Map_Size - 2)) + 1;
			c = (rand() % (Map_Size - 2)) + 1;
		}
		while(map[r][c] != ' ');
		map[r][c] = 'K';
	
	}
}
void placeDoors(){
	for(int i = 0; i < Doors; i++){
		int r, c;
		do {
			r = (rand() % (Map_Size - 2)) + 1;
			c = (rand() % (Map_Size - 2)) + 1;
		}
		while(map[r][c] != ' ');
		map[r][c] = 'D';
	}
}

void placeTraps(){
	for(int i = 0; i < Traps; i++){
		int r, c;
		do {
			r = (rand() % (Map_Size - 2)) + 1;
			c = (rand() % (Map_Size - 2)) + 1;
		}
		while(map[r][c] != ' ');
		hiddenTraps[r][c] = 'X';
	}
}

void gameMap() {
    for(int i = 0; i < Map_Size; i++) {
        for(int j = 0; j < Map_Size; j++) {
            
            if (i == 0 || i == Map_Size - 1 || j == 0 || j == Map_Size - 1) {
                map[i][j] = '#';
	       } else {
                map[i][j] = ' ';
	       hiddenTraps[i][j] = ' ';	
            }
            
        }
    }

walls();
treasures();
healthPacks();
keys();
placeDoors();
placeTraps();
}

void printMap() {
    for(int i = 0; i < Map_Size; i++) {
        for (int j = 0; j < Map_Size; j++) {
            printf("%c ", map[i][j]); 
        }
        printf("\n"); 
    }
}

int main()
{
	srand(time(NULL));

	gameMap();
	printMap();

	return 0;
}
