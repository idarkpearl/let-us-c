// if three side of a triangle are entered through the keyboard, write Programme to check whether the triangle is valid or not.the triangle is valid if the sum of two sides is greater than the largest of the third side.//
#include<stdio.h>
int s1,s2,s3;
int main(){
    printf("enter the sides of a triangle : ");
    scanf("%d %d %d ", &s1,&s2,&s3);
    if (s1>s2 && s1>s3)
    {
        if(s2+s3>s1){
            printf("triangle is valid");
        }
        else{
            printf("triangle is invalid");
        }
    }
    else if (s2>s1 && s2>s3)
    {
        if (s1+s3>s2)
        {
            printf("the triangle is valid");
        }
        else{
            printf("the triangle is invalid");
        }
        
    }
    else{
        if(s1+s2>s3){
            printf("the triangle is valid");
        }
        else{
            printf("the triangle is invalid");
        }
    }
    return 0;
    
    
}