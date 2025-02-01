#include<stdio.h>
#include<conio.h>
int main(){
    int a,b ,c, d,e,avg;

    printf("Enter The Number: ");
    scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);

    avg=(a+b+c+d+e)/5;

    printf("Average=%d",avg);
    return 0;
}
