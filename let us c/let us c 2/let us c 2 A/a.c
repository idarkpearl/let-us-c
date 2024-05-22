#include<stdio.h>
int cs , ss, a;// here the CS refer to the cost price. SS refers to the selling price and a refers to the difference between selling and cost price.//
int main(void){
    printf("enter the cost price and selling price of the product\n");
    scanf ("%d %d", &ss,&cs);
    a = ss - cs;
    if(ss > cs){
        printf("the seller has made a profit\n");
        printf("the seller has made a profit of %d\n ", a);
        }
    else{
        printf("the seller has made a loss\n");
        printf("the seller has made a losse of %d \n", -a);
    }
        
}