#include <stdlib.h> 
#include <stdio.h> 
#include <stdbool.h>
#include <progect.h>

int vvod(int input)
{
    printf("Ваш ход. Введите количество спичек от 1 до 10: ");
    scanf("%d", &input);
    return input;
}

int getinput(int input,int matches,int correct)
{
    if ((input > 0) && (input <= 10) && (input <= matches)){
        return correct = 1;
    } else {
        return correct = 0;
    }
}

int player_turn(int input,int matches,int correct,bool *isWon)
{ 
    if (correct == 1){
        matches -= input;
    } else {
        return -1;
    }
    if (matches == 0) {
        *isWon = true;
    } 
    return matches;
} 

int Comp_turn(int *input,int matches,bool *isWon)  
{ 
    if (*input > matches) {
        *input = matches;
    } 
matches -= *input;
    if (matches == 0) {
        *isWon = false; 
    }
    return matches;
}