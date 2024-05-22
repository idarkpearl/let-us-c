// a library charges are fine for every book. Returned late for the first five days. The fine is 5 ₹.50 for 6 to 10 days. Fine is one rupees and above 10 days. Fine is five rupees. If you return the book after 30 days, your membership will be cancelled, write a program to accept the number of days. The member is late and to return the book and display the fine or the appropriate message?//
#include<stdio.h>
int d;
int main(){
    printf("enter the days after which you have written the book\n");
    scanf("%d", &d);
    if(d < 6){
        printf("you have returned the book after %d Days and the fine is 50 paise", d);
    } 
    else if (d > 5 && d<11)
    {
       printf("you have written written the book book after %d Days and the fine is one rupees", d);
    }
    else if (d>10)
    {
       printf("you have returned the book after %d Days and the fine is five rupees", d);
    }
    else{
        printf("you have entered the book after %d Days And now your membership is cancelled", d);
    }
    return 0;
    
    
}