// a certain rate of steel is graded according to the following conditions
// -hardness must be greater than 50
//-carbon content must be less than 0.7
//-10, strength must be greater than 5600
// the Grade as follows
// grade 10, if all three conditions are met
// grade is nine if first and second conditions are met
// grade is eight if second and third conditions are met
// grade is seven first and third conditions are met
// grade is six if only one condition is met
// grade 5, if none of the conditions are met
// write a program which will require the user to give the values of the hardness, carbon content and tensile strength of the steel under Consideration and output, the Grade of the steel
#include<stdio.h>
float h , c , s;
int main(){
    printf("enter the hardness, carbon content and tensile strength of the steel\n");
    scanf("%f %f %f", &h, &c, &s);
    if(h>51 && c>0.8 && s>5600){
        printf("the grade of steel is ten");
    }
    else if (h>51 && c>0.8)
    {
        printf("the grade of steel is nine");
    }
    else if ( c>0.8 && s>5600)
    {
       printf("the grade of steel is eight");
    }
    else if (h>51 && s>5600)
    {
        printf("the grade of steel is seven");
    }
    else if (h>51 || c>0.8 || s>5600)
    {
        printf("the grade of steel is six");
    }
    else{
        printf("the grade of steel is five");
    }
    return 0;
}