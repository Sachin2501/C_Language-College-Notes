#include<stdio.h>
#include<conio.h>
int main(){
    long int i,n,f=1;

    printf("\n\t Enter Any Number.");
    scanf(" %d",&n);

    for(i=1;i<=n;i++)
    {
        f=f*i;

    }
    printf("\n Factorial=%ld",f);

    return 0;
}