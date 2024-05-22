#import<stdio.h>
int main(){
    int n = 301,flag =0;
    for(int i = 1;i < 301;i++)
    {
        flag =0;
        for (int j = 2; j*j <= i; j++)
     {if (i%j==0)
        {
            printf("%d is not a prime number", i);
            flag = 1;
            break;
        }
     }
     if (flag == 0)
        {
            printf("%d is a prime number", i);
               
        }
        
     printf("\n");
         
        
    }
    return 0;
}