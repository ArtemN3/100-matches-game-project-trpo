#include <stdlib.h> 
#include <stdio.h> 
#include <stdbool.h>
#include <locale.h>
#include <progect.h>

int main()
{
setlocale(LC_ALL,"RUS");
int matches;
int  input;
bool isWon;
printf("Выберите порядок хода 1 или 2\n");
scanf("%i", &x);
    while (1) { 
        if (x==1 && matches != 0) {
    	    matches = player_turn(&input,matches,&isWon);
	        printf("\nОсталось %d спичек.\n", matches);
	        x=2;
        } else if (x==2 && matches != 0) {
        	matches = Comp_turn(input,matches,&isWon);
	        printf("\nОсталось %d спичек. \n", matches);
            x=1;
        }
        if (matches == 0) {
        	break;
        }
    }
}