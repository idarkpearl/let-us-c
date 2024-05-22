#include<stdio.h>
int main(){
    char a; 
    /*for (int i = 0; i < 256; i++)
    {
       printf("the charcter at number is %d : %c\n",i,i);
    }
    return 0;*/
    int i=0;
    while (i < 257)
    {
        i++;
        printf("the charcter at number is %d : %c\n",i,i);
    }
    return 0;
    
    
}