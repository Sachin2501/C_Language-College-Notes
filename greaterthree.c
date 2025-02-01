#include<stdio.h>
#include<conio.h>
int main(){

    int a,b,c;

    printf("\n\t Enter The Any Three Number:-");
    scanf("%d%d%d",&a,&b,&c);

    if(a>b)
    {
        if(a>c)
        printf("\n\t A is the gretest.");
        else
        printf("\n\t C is the gretest.");
    }
    else
    {
        if(b>c)
        printf("\n\t B is the gretest.");
        else
        printf("\n\t C is the gretest.");
    }
    return 0;
}