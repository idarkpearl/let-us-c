#include<stdio.h>
int a, b, t;
int swap(int x, int y);
int main(void){
    printf("enter first no\n");
    scanf("%d", &a);
    printf("enter second no\n");
    scanf("%d", &b);
    swap(a , b);
    
}
int swap(int x, int y){
    t = x;
    x = y;
    y = t;
    printf("%d %d", a, b);
    return 0;
}