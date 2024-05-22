#include<stdio.h>
int t,sum=0;
int main(){
    for(int i = 1;i<11;i++){
        printf("Enter the nubers of hour employee %d had worked", i);
        scanf("%d",&t);
        sum = sum + t*12;}
    printf("the total overtime paid is %d",sum);
    return 0;     
}