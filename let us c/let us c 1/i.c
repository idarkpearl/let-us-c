#include<stdio.h>
int n,m, k;
int main(){
    printf("enter the number, whose first and last digit you want to be added : ") ;
    scanf("%d", &n);
    m = n%10;// now it is the last digit, and we only we have to only find the first digit//
    while(n>9){
        n = n/10;

    }
    printf("the sum of the Last digit and the first digit is %d", m + n );
    return 0;

}