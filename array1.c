#include<stdio.h>
#include<conio.h>
int main(){
    int n[5],i;

    for(i=0;i<5;i++){
        printf("\n Enter Any Array Element:");
        scanf("%d",&n[i]);
    }
    printf("\n Array Element Are :-");

    for(i=0;i<5;i++){
        printf("%d ",n[i]);
    }
return 0;
} 