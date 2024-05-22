#include<stdio.h>
float a,b,c,d,e; // ABCDE be the marks oobtained by a student in different subject A be the first subject of the second and so on
float percentage, agreegate;
int main(){
    printf("Marks obtained in first subject out of hundred\n");
    scanf("%f", &a);
    printf("Marks obtained in Second subject out of hundred\n");
    scanf("%f", &b);
    printf("Marks obtained in Third subject out of hundred\n");
    scanf("%f", &c);
    printf("Marks obtained in Fourth subject out of hundred\n");
    scanf("%f", &d);
    printf("Marks obtained in Fifth subject out of hundred\n");
    scanf("%f", &e);

    agreegate = a+b+c+d+e;
    percentage = (agreegate/500)*100;

    printf("the total marks obtained by student out of 500 is %f\n", agreegate);
    printf("the percentage obtained by the student is %f\n", percentage);

    return 0;
}