#include<stdio.h>
#include<conio.h>
int main(){
    int n1,n2,n3;

    printf("\n\t Enter Any Three Number:");
    scanf("%d%d%d",&n1,&n2,&n3);
    if(n1>n2&&n1>n3)
    printf("\n First Number Is Greater.");
    else if(n2>n1&&n2>n3)
    printf("\n Second Number Is Greater.");
    else
    printf("\n Third Number Is Greater.");
    return 0;


    }