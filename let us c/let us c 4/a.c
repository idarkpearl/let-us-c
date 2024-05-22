#include<stdio.h>
int c,f,fact=1,p,eo,n,num,flag=0;
int main()
{
    while (c != 4)
    {
        printf("choose option from menu : ");
        printf("\n1. Factorial of a number\n2. Odd or even\n3. Prime or not\n4. Exit\n");
        scanf("%d",&c);
        switch (c)
        {
        case 1:
               printf("Enter an integer : ");
               scanf("%d",&f);
               for(int i = 1;i<f+1;i++)
                   {
                    fact = fact*i;
                   }
                printf("the factorial of %d is %d \n",f,fact);
               break;
        case 2:
               printf("Enter an integer : ");
               scanf("%d",&eo);
               if (eo%2 == 0)
               {
                printf("even\n");
               }
               else{
                printf("odd\n");
               }
               
               break;
        case 3:
                printf("Enter an integer : ");
                scanf("%d",&n);
                flag = 0;
                for (int i = 2; i*i < n+1; i++)
                {
                    if(n%i == 0)
                    {
                        printf("The number is not prime\n");
                        flag = 1;
                        break;
                    }

                }
                if(flag == 0)
                {
                    printf("the number is prime\n");
                }
               break;
        case 4:
               printf("\nExit");
               break;
        
        }
      
    }
    
   return 0;

}