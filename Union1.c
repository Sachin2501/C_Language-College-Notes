#include<stdio.h>
#include<conio.h>
union number{
    int a,b;
}N;

int main(){
    N.a=5; N.b=6;

    printf("\n First Number = %d",N.a);
    printf("\n Second Number = %d",N.b);

    return 0;
}