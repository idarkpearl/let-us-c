#include<stdio.h>
// now we are writing a program to reverse the five digit number or you can say reverse the number//
int a,b ,c;

int main(){
    printf("enter the number whom you wanted to be reversed :");
    scanf("%d", &a);
    while (a>0)// we are using loop Same as that of the number addition, so we are going to take one number, then we are going to take another and so on//
    {
        b = a%10; no// the function is used so that we can get the smallest last digit of the number//
        c = c*10 + b;// not the initial value of C is zero, so like we get reminder, Three now see multiplied by 10 is equal to 0+3 is three, so the New value of C is three now for the next Digit, let's say it is five. We know that three is the value of C so it is going to 3×10 is 30+ remainder will be four so it is going to be 34 now, and it will continue to grow like this.//
        a = a/10;// it is used to get digits of the number. For example, like we get last date, then again, we get the second last third last fourth last.// 
       
    }
    printf("the number after reversing is : %d", c);
    return 0;
}
