#include<stdio.h>
int l,b,a,p;
int main(){
    printf("enter length and breadth :\n");
    scanf("%d %d", &l,&b);
    a = l * b;
    p = 2*(l+b);
    printf("the area : %d\n", a);
    printf("the perimetr : %d\n", p);
    if(a > p){
        printf("area is greater than perimeter\n");
    }
    else{
        printf("perimetr is greater than area\n");
    }
    return 0;
}