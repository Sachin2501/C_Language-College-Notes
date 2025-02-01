#include<stdio.h>
#include<conio.h>
int add(){
    int a,b,c;

    printf("\n Enter The Any Two Number :");
    scanf("%d%d",&a,&b);
    c=(a+b);

    return c;
}

int main(){
    int r;
    r=add();
    printf("\n sum=%d",r);
    return 0;
}
