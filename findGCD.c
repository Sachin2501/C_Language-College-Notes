#include<stdio.h>
#include<conio.h>
int gcd(int x,int y){
    while(x!=y){
        if(x>y)
        return (x-y,x);
        else 
        return (x,y-x);
    }
    return x;
}

int main(){
    int a,b,result;

    printf("\n Enter Any Two Number:");
    scanf("%d%d",&a,&b);
    result=gcd(a,b);

    printf("\n GCD Of %d And %d Is %d",a,b,result);
    return 0;
}
