#include<stdio.h>

void area();

int  s , l , b;
float h , g , r;
int shape;

int main(){
    printf("choose area of which shape you want.....square,rectangle,trainagle,circle...pres numbers acc to the order\n");
    scanf("%d", &shape);
    area();
    return 0;
}

void area(){
    if(shape == 1){
        printf("enter the side");
        scanf("%d", &s);
        printf("%d", s*s);
        
    }
    else if (shape == 2)
    {
        printf("enter the length");
        scanf("%d", &l);
        printf("enter the breadth");
        scanf("%d", &b);
         printf("%d", l*b);
        
    }
    else if (shape == 3)
    {
        printf("enter the height");
        scanf("%f", &h);
        printf("enter the base");
        scanf("%f", &g);
        printf("%f", 0.5*h*g);
    }
    else if (shape == 4)
    {
        printf("enter the radius");
        scanf("%f", &r);
        printf("%f", 3.16*r*r);

        
    }
}