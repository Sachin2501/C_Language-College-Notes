#include<stdio.h>
#include<conio.h>
int main(){
    int a,b,c;
    printf("\n\t Enter The Any Two Number :");
    scanf("%d%d",&a,&b);

    printf("\n\t Before");

    printf("\n\t a=%d\t\t b=%d",a,b);

    c=a;
    a=b;
    b=c;
    printf("\n\t After");

    printf("\n\t a=%d\t\t b=%d",a,b);

    return 0;
}