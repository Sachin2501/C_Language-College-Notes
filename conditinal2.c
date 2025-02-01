#include<stdio.h>
#include<conio.h>
int main(){
    int num;

    printf("\n Enter The Any Day Number(1-7):-");
    scanf("%d",&num);

    if(num==1)
    printf("\n\t Sunday");
    else if (num==2)
    printf("\n\t Monday");
    else if(num==3)
    printf("\n\t Tuesday");
    else if(num==4)
    printf("\n\t wednesday");
    else if(num==5)
    printf("\n\t Thuresday");
    else if(num==6)
    printf("\n\t Friday");
    else if(num==7)
    printf("\n\t Saturday");
    else 
    printf("\n \t invaled Day number");
    
    return 0;
    
    
}