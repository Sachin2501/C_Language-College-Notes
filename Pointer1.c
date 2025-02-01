#include<stdio.h>
#include<conio.h>
    int main(){
        int *x,*y,a,b;
        a=5;b=6;

        x=&a;
        y=&b;

        printf("\n Sum = %d",*x+*y);

        return 0;

    }