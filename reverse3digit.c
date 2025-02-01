#include<stdio.h>
#include<conio.h>
int main(){

    int n,r,rev;

    printf("\n Enter The Any 3 Digit Number:-");
    scanf("%d",&n);

    r=rev=0;

    while(n>0){
        r=n%10;
        rev=(rev*10)+r;
        n=n/10;
    }
printf("\n Reverse Number:=%d",rev);
return 0; 
}