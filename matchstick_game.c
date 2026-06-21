/*Write a program for a matchstick game being played between the computer and a user. Your program should ensure that the computer always wins. Rules for the game are as follows:
- There are 21 matchsticks.
- The computer asks the player to pick 1, 2, 3, or 4 matchsticks.
- After the person picks, the computer does its picking.
- Whoever is forced to pick up the last matchstick loses the game.*/
#include<stdio.h>
int main(){

    int total_matchsticks=21, user_pick, computer_pick;

    printf("Welcome to the 'MatchStick Game'\n\n Rules are as follows: \n\tThere are 21 matchsticks.\n\tEither 1, 2, 3, or 4 matchsticks can be picked.\n\tWhoever is forced to pick up the last matchstick loses the game.\nThat's all. Enjoy!!!");

    while(total_matchsticks!=0){

        printf("\n\nMatchsticks Count: %d \nUser's Turn: ", total_matchsticks);
        scanf("%d",&user_pick);
        if(user_pick==1||user_pick==2||user_pick==3||user_pick==4){
            total_matchsticks = total_matchsticks - user_pick;

            if(total_matchsticks<=1){
               printf("\nDear user, You did not win......");
               break;
            }
        
           printf("\n\nMatchsticks Count: %d\nComputer's turn: ", total_matchsticks);
           computer_pick = 5 - user_pick;
           printf("%d\n",computer_pick);

           total_matchsticks = total_matchsticks - computer_pick;
        }
        else{
            printf("User, You can pick 1 or 2 or 3 or 4 matchsticks. Not more, not less than that.");
        }        
    }
}