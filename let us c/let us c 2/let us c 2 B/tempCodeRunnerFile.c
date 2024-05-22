// if the three sides of a triangle are entered through the keyboard, write a program to check whether the triangle is an isosceles, equilateral or right angle triangle//
#include<stdio.h>
int a,b,c;
int main(){
    printf("enter the sides of the triangle");
    scanf("%d %d %d", &a, &b, &c);
    if(a = b &&  b= c){
        printf("The triangle is an equilateral triangle");
    }
    else if(a =b || b = c){
        printf("the triangle is an isosceles triangle");
    }
    else if(((a*a)+(b*b))==(c*c) || ((a*a)+(c*c))==(b*b) || ((c*c)+(b*b))==(a*a)){
        printf("triangle is in right angle triangle");
    }
    else{
        printf("triangle is scalene triangle");
    }
    return 0;

}