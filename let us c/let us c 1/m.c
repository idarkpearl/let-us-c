#include<stdio.h>
int n,m,newnum = 0,multiplier =1;

int main(){
    printf("enter the number : ");
    scanf("%d", &n);

    if(n<0){
        n = n * (-1);
    }

    while (n>0)
    {
        m = n % 10;// module operator is used to get the remainder the last digit//
        newnum = newnum + (m + 1) * multiplier;// now we are trying to make a new digit by adding the Reminder with one and then multiplying it to it, pollution//
        multiplier = multiplier * 10;// here we are finding what to multiply
        n = n / 10;}//to come to second last digit

    printf("the new number is : %d", newnum);
    return 0;    
    
}