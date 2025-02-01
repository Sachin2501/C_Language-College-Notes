#include<stdio.h>
#include<conio.h>
int main(){

    int num;

    printf("\n\t Enter The Any Number(1-5)=");
    scanf("%d",&num);
    {
        if(num==1)
        printf("\n\t You Pressed One.");
        else if(num==2)
        printf("\n\t You Pressed Two.");
        else if (num==3)
        printf("\n\t You Pressed Three.");
        else if(num==4)
        printf("\n\t You Pressed Four.");
        else if(num==5)
        printf("\n\t You pressed Five.");
        else 
        printf("\n\t Number Out Of Range");
    }
    return 0;
}