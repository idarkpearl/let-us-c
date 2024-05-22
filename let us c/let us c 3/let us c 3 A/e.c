#include<stdio.h>
int temp,m,sum=0;
int main()
{
    for (int i = 0; i < 500; i++){
        temp = i;
        while ( temp > 0)
        {m = temp%10;
         sum= sum+(m*m*m);
         temp = temp/10;}
        if(i == sum){
            printf("the number ia an armstrong number : %d", i);
            printf("\n");
        }
        sum = 0;
    }
    return 0;
}