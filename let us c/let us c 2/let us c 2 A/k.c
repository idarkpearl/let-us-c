#include<stdio.h>
#include<math.h>
float a;
int main(){
    int r,x1,y2,x2,y1;
    printf("enter coordinates of centre : \n");
    scanf("%d %d", &x1, &y1);
    printf("enter radius : \n");
    scanf("%d",&r);
    printf("enter coordinates of point : \n");
    scanf("%d %d", &x2, &y2);

    a = sqrt(pow(x2-x1 ,2)+pow(y2-y1 ,2));
    if (a>r)
    {
       printf("the point is outside the area of the circle");
    }
    else if (a == r)
    {
       printf("the point is on the area of the circle");
    }
    else{
        printf("the point is inside the area of the circle");
    }
    return 0;
    
    

    


}