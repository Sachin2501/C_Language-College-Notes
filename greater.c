#include<stdio.h>
#include<conio.h>
int main(){

    int num1,num2;

    printf("\n\t Enter The Any Two Number:-");
    scanf("%d%d",&num1,&num2);

    if(num1>num2)
    printf("\n\t num1 is greater. ");
    else
    printf("\n\t num2 is greater.");
    return 0;
    
}