#include "display_tetris.h"
void display_tetris()
{
    int i, j;
    system("clear");
    printf("Next Block\n");
    for(int i = 0; i < 4; i++) 
    {
        printf("\n");
        for(int j =0; j < 4; j++)
         {
            if(block[0][i][j] == 1) {
            printf("* ");}
            else if (block[0][i][j] == 0){
            printf("0 ");    
         }
                      
        } 
        
    }
    printf("\n\n");
    printf("tetris table\n");
    for (int i = 2; i < 21; i++) {
        printf("\t");
        for (int j = 0; j < 10; j++) {
            if (j == 0 || j == 9) {
                printf("|");}
                else if ((i == 20) && (j > 1 || j < 9)) {
                    printf("-");}
            else if (tetris_table[j][i] == 0) {
                printf("* ");}
            else if (tetris_table[j][i] == 1) {
                printf("o ");}
        }
        printf("\n");   
    }
}

