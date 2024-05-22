// a programme for finding factorial by using loops//
#include<stdio.h>
int f,fact=1;
int main(){
    printf("enter the value of number whose factorial you want : ");
    scanf("%d",&f);
   for (int i = 1; i < f+1; i++)
   {
    fact=fact*i;
   }
   printf("%d",fact);
   return 0;
}