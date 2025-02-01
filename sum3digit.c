#include<stdio.h>
#include<conio.h>
int main(){
    int n,r,sum;

    printf("\n Enter Any 3 Digit Number :=");
    scanf("%d",&n);

    r=sum=0;

    while(n>0){
        r=n%10;
        sum=sum+r;
        n=n/10;
    }
printf("\n Sum Of 3 Digit Number:=%d",sum);

return 0;
}