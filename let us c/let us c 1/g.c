#include<stdio.h>
int a, b, sum = 0;

int main()
{

    printf("enter your five digit number : ");
    scanf("%d", &a);
    while (a > 0) // Applying a loop so that we are solving on one digit by not doing all the digits at the same time//
       { b = a%10; // we are taking module of the number first so that we can get the last digit of the number. For example, if the digit is 123 will get three here.//
        sum = sum + b; // now we are adding the last digit that we got to the sum and we have also, we have predefined some is equal to 0, so it will increase after each after the iteration//
        a = a/10; // now we have divided the number by 10 so that the last digit, for example the number is 123 and if it divided by 10, so we'll get a new number 12//
        // now will again continue and do this many times, so we can enter as as long number as we want//

    }
    printf("the sum of the five digit number is %d", sum);
    
    return 0;
} 