// any year is enter through the keyboard. Write a program to determine whether the year is a leap year or not use the logical operator.
#include<stdio.h>
int year;
int main(){
    printf("enter the year\n");
    scanf("%d", &year);
    if((year%4==0) && (year%400==0) || (year%100!=0)){
        printf("the year is a leap year");

    }
    else{
        printf("the year is not a leap year");
    }
    return 0;
}