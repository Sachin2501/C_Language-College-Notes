#include<stdio.h>
#include<conio.h>
#include<string.h>
int main(){
    char str1[15],str2[15];

    printf("\n Enter The string ");
    scanf("%s",str1);

    strcpy(str2,str1);

    printf("\n Original String %s",str1);

    printf("\n Copied String %s",str2);

    return 0;
}