// any character is entered through the keyboard write a program to determine whether the character entered is a capital letter. A small case letter a digit or a special symbol. Use the ASCII
#include<stdio.h>
char a;
int main(){

    printf("enter your character\n");
    scanf("%c", &a);
    if(a > 65 && a<91){
        printf("the character you entered is a Capital  alphabet");
    }
    else if(a > 97 && a<122){
        printf("the number you entered is a small alphabet");

    }
    else if(a > 48 && a<57){
        printf("character, you entered is a number");
    }
    else 
    {
       printf("the character you entered is a special character");
    }
    

}