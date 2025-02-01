#include<stdio.h>
#include<conio.h>
#include<string.h>
int main(){
    char str[15];

    printf("\n Enter Any Number :");
    scanf("%s",&str);
    int l;

    l=strlen(str);
    printf("\n Leanth =%d",l);
    return 0;
}