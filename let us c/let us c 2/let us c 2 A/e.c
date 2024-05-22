#include<stdio.h>
int n,d,sum=0,temp;
int main(){
    printf("enter the number : ");
    scanf("%d", &n);
    while(n > 0){
        n = temp;
        d = n % 10;
        sum = (sum*10)+d;
        n = n/10;}
    if (n == temp)
    {
       printf("the reverse number is equal to the oldest number");
    }
    else{
        printf("the reverse no is not equal");
    }
        
}