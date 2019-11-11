#include <stdio.h>
#include <stdlib.h>

int main()
{
    //strcmp(str1, str2) == 0
    //Paper, Rock or Scissors

    char player1[256];
    char player2[256];
    printf("Welcome to the paper, rock or scissors Game!");
    printf("\nPlayer1, let's go, your turn...\n");
    scanf("%s", &player1);

    printf("\nPlayer2, now it is your turn...\n");
    scanf("%s", &player2);

    printf("\nWait for a while, we are processing the result...\n");

    if(strcmp(player1, "paper") == 0){
            if(strcmp(player2, "paper") == 0){
                printf("Two papers... It is a DRAW!");
            }else if(strcmp(player2, "rock") == 0){
                printf("Paper x Rock... Player2 WON!");
            }else if(strcmp(player2, "scissors") == 0){
                printf("Paper x Scissors... Player1 WON!");
            }else{
            printf("Player2 played an invalid character...");
            }
    }

    else if(strcmp(player1, "rock") == 0){
            if(strcmp(player2, "rock") == 0){
                printf("Two rocks... It is a DRAW!");
            }else if(strcmp(player2, "paper") == 0){
                printf("Rock x Paper... Player2 WON!");
            }else if(strcmp(player2, "scissors") == 0){
                printf("Rock x Scissors... Player1 WON!");
            }else{
            printf("Player2 played an invalid character...");
            }
    }
    else if(strcmp(player1, "scissors") == 0){
            if(strcmp(player2, "scissors") == 0){
                printf("Two scissors... It is a DRAW!");
            }else if(strcmp(player2, "paper") == 0){
                printf("Scissors x Paper... Player1 WON!");
            }else if(strcmp(player2, "rock") == 0){
                printf("Scissors x Rock... Player1 WON!");
            }else{
            printf("Player2 played an invalid character...");
            }
    }

    else{
        printf("You played an invalid character.");
    }
    return 0;
}