#include <stdlib.h> 
#include <stdio.h> 
#include <stdbool.h>
#include <progect.h>

int getinput(int input,int matches,int correct)
{
    if ((input > 0) && (input <= 10) && (input <= matches)){
        return correct = 1;
    } else {
        printf("Неверное количество спичек! Повторите ввод.\n");
        return correct = 0;
    }
}

int player_turn(int input,int matches,bool *isWon)
{ 
int correct;
do  {
    printf("Ваш ход. Введите количество спичек от 1 до 10: ");
    scanf("%d", &input);
    correct = getinput(input, matches, correct); 
} while (!correct);
matches -= input;
    if (matches == 0) {
        *isWon = true;
    } 
    return matches;
}

int Comp_turn(int input,int matches,bool *isWon)  
{
printf("Ход компьютера.\n");
input = rand()%11;
    if (input > matches) {
        input = matches;
    } 
printf("Компьютер взял %d спичек \n", input);
matches -= input;
    if (matches == 0) {
        *isWon = false;
    }
    return matches;
}