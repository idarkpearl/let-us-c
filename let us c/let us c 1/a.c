#include<stdio.h>

float s , x; 

int main(void){
    printf("the basic salary of ramesh is  ");
    scanf("%f", &s);//s stands for basic salary which is 40% and same as of allowance so we can use use s for both//
    
    x = (s*100)/40; //x is the real salray//

    printf("the total gross salary is %f", x);

    
}