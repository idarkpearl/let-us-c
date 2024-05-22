// in a company, worker efficiency is determined on the basis of the time required for a worker to complete a particular job. If the time taken by the worker is between 2 to 3 hours, then the worker is said to be highly efficient. If the time required by the worker is between 3 to 4 hours, then the worker is ordered to improve speed. If the time taken between 4 to 5 hours, the worker is given training to improve his speed, and if the time taken by the worker is more than five hours, then the worker has to leave the company. If the time taken by the worker is input through the keyboard, write a program to find the Efficiency of the worker
#include<stdio.h>
int t;
int main(){
    printf("the time taken by the worker to do the work :");
    scanf("%d", &t);
    if(t >1 && t<4){
        printf("the worker is highly efficient");
    }
    else if(t >2 && t<5)
    {
        printf("The worker is in order to improve speed");
    }
    else if(t >3 && t<6)
    {
        printf("the worker is given training to improve speed");
    }
    else{
        printf("the worker is told to leave the company");
    }
    return 0;
    
    
}