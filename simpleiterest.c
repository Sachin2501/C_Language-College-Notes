#include<stdio.h>
#include<conio.h>
int main(){
    float p,r,t,si;

    printf("Enter The Principle Amount:");
    scanf("\n %f",&p);

    printf("Enter The Rate:");
    scanf("\n %f",&r);

    printf("Enter The Time:");
    scanf("\n %f",&t);

    si=(p*r*t)/100;

    printf("\n Simple Interest=%.2f",si);
    return 0;

}