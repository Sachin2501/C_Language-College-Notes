#include<stdio.h>
#include<conio.h>
int main(){
    int n,a,b,c,i;

    printf("\n\t Enter How Many Terms:");
    scanf(" %d",&n);
    a=0; b=1;

    printf("%d  %d",a,b);

    for(i=1;i<=n;i++){
        c=a+b;
        printf("  %d",c);
        a=b;
        b=c;
    }
    return 0;

}