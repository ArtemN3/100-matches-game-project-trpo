#include <stdlib.h> 
#include <stdio.h> 
#include <stdbool.h>
#include <locale.h>
#include <progect.h>

int main()
{
    setlocale(LC_ALL,"RUS");
    int matches = 100;
    int input,x,a; 
    bool isWon = false;
    int correct;
    char str[15];
    printf("Введите имя игрока :\n");
    int i = 0,k = 1;
    str[i] = getchar();
    do {
        i++;
        k += 1;
        str[i] = getchar();
    } while (str[i] != '\n');
    printf("\nВыберите сложность игры. \n");
    printf("1-легкий\n");
    printf("2-сложный\n");
    scanf("%i", &a);
    if (a == 1) {
        printf("Выберите порядок хода 1 или 2\n");
        scanf("%i", &x);
        while (1) { 
            if (x==1 && matches != 0){ 
                while(1){
                    input = vvod(input);
                    correct = getinput(input, matches,correct);
                    if (correct == 1) {
                        break;
                    } else 
                printf("Неверно! Повторите ввод\n");
                }
                matches = player_turn(input,matches,correct,&isWon);
                printf("\nОсталось %d спичек.\n",matches);
                x = 2;
            } else if (x==2 && matches != 0) {
                printf("Ход компьютера.\n");
                input = rand()%10+1;
                matches = Comp_turn(&input,matches,&isWon);
                printf("Компьютер взял %d спичек\n",input);
                printf("\nОсталось %d спичек. \n", matches);
                x = 1;
            }
            if (matches == 0) {
                break;
            } 
        } 
        if (isWon) {
            printf("\nПобедил ");
            for (i = 0; i < k-1; i++)
                printf("%c", str[i]);
            printf("!\n"); 
        } else printf("\nПобедил компьютер!\n");
    } else if (a == 2){
        printf("Выберите порядок хода 1 или 2: ");
        scanf("%i", &x);
        while (1) { 
            if (x==1 && matches != 0){ 
                while(1){
                    input = vvod(input);
                    correct = getinput(input, matches,correct);
                    if (correct == 1) {
                        break;
                    } else 
                    printf("Неверно! Повторите ввод\n");
                }
                matches = player_turn(input,matches,correct,&isWon);
                x = 2;
            } else if (x==2 && matches != 0) {
                printf("Ход компьютера.\n\n");
                input = rand()%10+1;
                matches = Comp_turn(&input,matches,&isWon);
                printf("Компьютер взял %d спичек\n\n",input);
                x = 1;
            }
            if (matches == 0) {
                break;
            } 
        } 
        if (isWon) {
            printf("\nПобедил ");
            for (i = 0; i < k-1; i++)
                printf("%c", str[i]);
            printf("!\n");
        } else printf("\nПобедил компьютер!\n");
    }
    return 0;
}