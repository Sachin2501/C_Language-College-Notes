#include<stdio.h>
#include<conio.h>
int main(){

    int num1,num2,sum,difference,product,quotient;

    printf("\n Enter The First number: ");
    scanf("%d",&num1);

    printf("\n Enter The Second number:");
    scanf("%d",&num2);

    sum=num1+num2;
    difference=num1-num2;
    product=num1*num2;
    quotient=num1%num2;

    printf("\n sum=%d",sum);
    printf("\n difference=%d",difference);
    printf("\n product=%d",product);
    printf("\n Quotient=%d",quotient);

    return 0;


}