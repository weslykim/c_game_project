#include <stdio.h>
int display_menu();
void display_tetris();
int main()
{
    int menu = 1;
    menu = display_menu();
    switch (menu)
    {
        case 1:
            printf("1. Game Start\n");
            display_tetris();
            break;
        case 2:
            printf("2. Search history\n");
            break;
        case 3:
            printf("3. Record Output\n");
            break;
        case 4:
            printf("4. Quit\n");
            break;

    }
    printf("Hello, World!\n");
    return 0;
}