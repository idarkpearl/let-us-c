#include<stdio.h>
int ram,shyam,ajay;
int main(){
    printf("enter the age of Ram Shyam and Ajay : \n");
    scanf("%d %d %d", &ram,&shyam,&ajay);
    if(ram>shyam && ram>ajay){
        printf("ram is the Oldest\n");
        if (shyam>ajay)
        {
            printf("syam is older than Ajay\n");
            printf("Ajay is the youngest\n");
        }
        else{
            printf("Ajay is older than Shyam\n");
            printf("syam is the youngest\n");
        }
        
    }
    else if (shyam>ram && shyam>ajay)
    {
        printf("Shyam is the Oldest\n");
        if (ram>ajay)
        {
            printf("Ram is older than Ajay\n");
            printf("Ajay is the youngest\n");
        }
        else{
            printf("Ajay is older than Shyam\n");
            printf("Ram is the youngest\n");
        }
        /* code */
    }
    else{
        printf("Ajay is the Oldest\n");
        if (shyam>ram )
        {
            printf("syam is older than Ram\n");
            printf("Ram is the youngest\n");
        }
        else{
            printf("Ram is older than Shyam\n");
            printf("Shyam is the youngest\n");
        }
    }
    return 0;
    
}