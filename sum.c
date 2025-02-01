#include<stdio.h>
#include<conio.h>
int add(int *x,int *y){
    return (*x+*y);
}

int main(){
    int a,b,r;

    printf("\n Enter The Value Of a And b : ");
    scanf("%d%d",&a,&b);

    r=add(&a,&b);

    printf("Sum = %d",r);

    return 0;
}