#include<stdio.h>
#include<conio.h>
void add(){
    int a,b,c;

    printf("\n Enter Any Two Number : ");
    scanf("%d%d",&a,&b);

    c=(a+b);

    printf("\n Sum Of Two Number Is %d",c);
}

int main(){
    add();

    return 0;
}
