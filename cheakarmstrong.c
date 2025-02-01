#include<stdio.h>
#include<conio.h>
int main(){
    int n,r,n1,sum;

    printf("\n Enter Any 3 Digit Number:=");
    scanf("%d",&n);

    n1=n;
    r=sum=0;

    while(n>0){
        r=n%10;
        sum=sum+r*r*r;
        n=n/10;
    }
if(n1==sum)
    printf("\n Arm Strong =%d",n1);
    else
    printf("NOt Arm Strong");
    
return 0;
}
