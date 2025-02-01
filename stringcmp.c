#include<stdio.h>
#include<conio.h>
#include<string.h>
int main(){
    char str1[15],str2[15];

    printf("\n Enter the 1st Number:");
    scanf("%s",str1);
    printf("\n Enter The 2nd Number:");
    scanf("%s",str2);
    if(strcmpi(str1,str2)>0){
        printf("\n 1st number is Large");
    }
    else
    printf("\n 2nd number Is Large");

    return 0;
}