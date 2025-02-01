#include<stdio.h>
#include<conio.h>
int main(){
    int i,n,t;
    
    printf("\n\t Enter The Any Number.");
    scanf("%d",&n);

    for(i=1;i<=10;i++){
        t=n*i;
        printf("\n %d",t);
    }
    return 0;
}