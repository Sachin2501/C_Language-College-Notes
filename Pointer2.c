#include<stdio.h>
#include<conio.h>
    int main(){
        int n=5;
        int *p;
        p=&n;
        int **pp;
        pp=&p;

        printf("\n Number = %d",n);
        printf("\n Address = %x",p);
        printf("\n  Number = %d",*p);
        printf("\n Address = %x",pp);

        return 0;
    }