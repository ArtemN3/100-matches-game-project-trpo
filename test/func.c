#include <stdlib.h>
#include <stdio.h>
#include <func.h>

int getinput(int input,int matches,int correct)
{
    if ((input > 0) && (input <= 10) && (input <= matches)){
        return correct = 1;
    } else {
        return correct = 0;
    }
}

int player_turn(int input,int matches)
{
    if ((input > matches) || (input > 10) || (input < 0))
        return -1;
    else {
    matches -= input;
    return matches;
    }
}

int Comp_turn(int input,int matches)
{
input = rand()%11; 
    if (input > matches)
        return -1;
    else {
        matches -= input;
        return matches;
    }
}