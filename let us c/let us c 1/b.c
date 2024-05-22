#import<stdio.h>

float d, metre, feet, inches, centimeter ;


int main(){
    printf("distance between the city 1 and 2 in km is  ");
    scanf("%f", &d); //the distance between two city is denoted by d
    metre = d*1000;
    feet = d*3280.85;
    inches = d*39370.08;
    centimeter = d*100000;
    printf("distance between the city 1 and 2 in metre is %f \n", metre);
    printf("distance between the city 1 and 2 in feet is %f \n", feet);
    printf("distance between the city 1 and 2 in inches is %f\n ", inches);
    printf("distance between the city 1 and 2 in centimetre is %f \n",centimeter);

    return 0;
    
}

