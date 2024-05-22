#include<stdio.h>
float a;
float temp(int celsius);

int main(){

    printf("enter your vale whom you want to convert to farehnite : ");
    scanf("%f", &a);
    printf("the %f celsius is %f farehnite", a, temp(a));



    return 0;
}
 float temp(int celsius){
    float fahrehnit = celsius * 1.8 + 32;
    return fahrehnit;
 }