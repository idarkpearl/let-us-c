#include<stdio.h>
int main(){
    int n,positive=0,negative=0,zero=0;
    printf("enter 99 to stop the loop\n");
    while (1)
    {
        printf("enter the number : ");
        scanf("%d",&n);
        if(n > 1)
        {
             positive ++;
        }
        if(n<1)
        {
             negative ++;
        } 
        if(n == 0)
        {
             zero ++;
        }  
        if (n == 99)
        {
            break;
        }
        
    }
    printf("positive number = %d , negative number = %d , zeros = %d\n" ,positive,negative,zero);
    return 0;
    
}