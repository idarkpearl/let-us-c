#import<stdio.h>
float n,sum=0,fact=1;
int main()
{
    printf("1/1! + 2/2! + 3/3! +.....................this is the series\n");
    printf("enter the value till u want series");
    scanf("%f", &n);
    for (float i = 1; i < n+1; i++)
    {
        fact = fact * i;
        sum = sum + i/ fact;
        
    }
    printf("the value of the series is %f", sum);
    return 0;
    


}