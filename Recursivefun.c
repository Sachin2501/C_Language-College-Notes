#include<stdio.h>
#include<conio.h>
int add(int x){
    if(x==1)
    return 1;
    else
    return x + add(x-1);
}

int main(){
    int r,n;
    printf("\n Enter The nth Netural Number Terms : ");
    scanf("%d",&n);
    r=add(n);
    printf("\n Sum=%d",r);
    return 0;
}