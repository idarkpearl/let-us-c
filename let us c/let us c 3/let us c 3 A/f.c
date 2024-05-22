#import<stdio.h>
int userchoice , computerchoice , matchstick = 21; 
int main(){
    int y;
    printf("Are you bored If you are then press 1, and if you aren't then press 2 : ");
    scanf("%d",&y);
    if (y == 1)
    {
         printf("let's play the game");
    }
    else if(y == 2)
    {
         printf("yes, you are bored, and we will play the game\n");
            
    }
    else
    {
         printf("how big of idiot you are, you have to choose between one and two. Now, I'll assume that you have to play the game\n");
              
    }
    printf("total number of sticks are %d\n", matchstick);
    
    while (matchstick >= 1)
    {
    
         printf("number of sticks left are %d\n", matchstick);
         printf("choose the no of sticks between 1 to 4 ;\n");
         scanf("%d", &userchoice);
         if (userchoice < 1 || userchoice > 4)
           {
              printf("your input is invalid. You have to choose between 1 to 4. I am saying it again between 1 to 4.\n");
              break;
           }
         computerchoice = 5-userchoice;
         printf("the computer has chosen %d sticks\n", computerchoice);
         matchstick = matchstick - (userchoice + computerchoice);
         if(matchstick==1)
         {
             printf("\nha ha ha, you have lost the game if you want to play again, click up button with R\n");
         }
    }
    return 0;
}