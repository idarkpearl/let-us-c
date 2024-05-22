#include<stdio.h>
int a;
int main(){
    printf("Enter the number who is absolute value you want\n");
    scanf("%d", &a);
    if (a < 0)
    {
        printf("the absolute value of the number is :%d", -a);
    }
    else{
        printf("the absolute value of the number is :%d",a);;
    }
    return 0;
    
}