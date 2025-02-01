#include<stdio.h>
#include<conio.h>
int main(){
    int n[5],i,sum;

    for(i=0;i<5;i++){
        printf("\n Enter The Number :");
        scanf("%d",&n[i]);
    }
    {
        sum=n[0];
    }
    for(i=0;i<5;i++){
        sum=sum+n[i];
    }
printf("\n SUM NUMBER =%d",sum);
return 0;
}