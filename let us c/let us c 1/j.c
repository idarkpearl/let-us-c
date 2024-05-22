#include<stdio.h>
int n = 80000;
int men , women, l , lm , lw ,im ,iw;// hair men refers to the total number of men in the town and woman refers to the total number of women's in the town. LM refers to the literate man and LW means literate woman, and IM refers to the illiterate man, and IW refers to the illiterate woman.

int main(){
    men = (52*80000)/100;
    women = n - men;
    l = (48*80000)/100;
    lm = (35*80000)/100;
    lw = l - lm;
    im = men -lm;
    iw = women - lw;
    printf("the total number of men : %d\n",men);
    printf("the total number of Woman ; %d\n", women);
    printf("the total number of Literates : %d\n",l);
    printf("the total number of Literate man : %d\n", lm);
    printf("the total number of Literate woman : %d\n",lw);
    printf("the total number of Illiterate man : %d\n",im);
    printf("the total number of Illiterate woman : %d\n",iw);
    
    return 0;

}