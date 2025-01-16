#include <stdio.h>
#include <string.h>

void main(){
    typedef struct player{
        char name[15];
        float score;
    } p;
    
    p aPlayer = {0,0};
    p *ptrPlayer;
    
    ptrPlayer = &aPlayer;
    
    strcpy(ptrPlayer->name,"Pinball Wizard");
    ptrPlayer->score = 1000000.00;
    
    printf("\nPlayer: %s\n",ptrPlayer->name);
    printf("Score: %.0f\n",ptrPlayer->score);
}