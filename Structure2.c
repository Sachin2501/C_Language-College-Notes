#include<stdio.h>
#include<conio.h>
struct simple{
    float p,r,t,si;
}s;

int main(){
    printf("\n Enter The Principle Amount : ");
    scanf("%f",&s.p);
    printf("\n Enter The Rate : ");
    scanf("%f",&s.r);
    printf("\n Enter The Time : ");
    scanf("%f",&s.t);

    s.si=(s.p*s.r*s.t)/100;

    printf("\n Simple Interest = %.2f",s.si);

    return 0;
}