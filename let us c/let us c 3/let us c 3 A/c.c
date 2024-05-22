#include<stdio.h>
int a,b,power=1;
int main(){
    printf("enter the number :\n");
    scanf("%d",&a);
    printf("enter the power :\n");
    scanf("%d",&b);
    for (int i = 1; i < b+1; i++)
    {
        power = power * a;
    }
    printf("the number is %d",power);
    return 0;

    
    
    
}