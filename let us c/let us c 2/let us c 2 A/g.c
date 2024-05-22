#include<stdio.h>
int a,b,c,x;
int main(){
    printf("enter the angles of a triangle :\n");
    scanf("%d %d %d", &a , &b , &c);
    x = a+b+c;
    if (x == 180)
    {
        printf("it is a perfect triangle");
    }
    else{
        printf("It is not a perfect triangle");
    }
    return 0;
    
}