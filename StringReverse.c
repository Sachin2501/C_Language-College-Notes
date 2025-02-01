#include<stdio.h>
#include<conio.h>
#include<string.h>
int main(){
    char str[15];

    printf("\n Enter The String :");
    scanf("%s",&str);

    printf("\n Reverse Number Is %s",strrev(str));
    return 0;
}