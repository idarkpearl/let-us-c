//any program to find out whether it's an order or even number//
#include<stdio.h>
int x;
int main(){
    printf("enter the number ");
    scanf("%d ", &x);
    if (x % 2 ==0 )
    {
        printf("the number is even");
    }

    else{
        printf("the number is odd");
    }
    return 0;

    
}
