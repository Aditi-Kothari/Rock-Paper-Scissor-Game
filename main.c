#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int rockpaperscissor( char user,char comp){
         if(user==comp){
            return 0;
         }
//here 0 is for draw,1 for win and -1 for lose.//
         if(user == 'p'&& comp == 'r'){
            return 1;
         }
         else if(user == 'r'&& comp == 'p'){
            return -1;
         }
         if(user == 's'&& comp == 'p'){
            return 1;
         }
         else if(user == 'p'&& comp == 's'){
            return -1;
         }
         if(user == 'r'&& comp == 's'){
            return 1;
         }
         else if(user == 's'&& comp == 'r'){
            return -1;
         }
}


int main()
{
    char user , comp;

    srand(time(0));
    int number=rand()% 100 + 1;
    if(number<33){
        comp='r';
    }
    else if (number>33 && number<66){
        comp='p';
    }
    else{
        comp='s';
    }
    printf("\t\t\t\t\t Welcome to the Game!!\t\t\t\t\t\t\t");


    printf("\n\n\t\t\t\t\t Enter 'r' for Rock\n\n\t\t\t\t\t Enter 'p' for Paper\n\n\t\t\t\t\t Enter 's' for scissor\n\n\t\t\t\t\t");
    scanf("%c",&user);

    int result= rockpaperscissor(user,comp);
    if(result==0){
        printf("\n\t\t\t\t\t Game Draw!!\n\t\t\t\t\t You both chose same\n");
    }
    else if(result==1){
        printf("\n\t\t\t\t\t Yipee!! You won the game\n");
    }
    else{
        printf("\n\t\t\t\t\t Sorry!! You Lose\n");
    }

    printf("\n\t\t\t\t\t You chose %c and computer chose %c\n",user,comp);
}

