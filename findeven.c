#include<stdio.h>
#include<conio.h>
int main(){
    int n[5],i;

    for(i=0;i<5;i++){
        printf("\n Enter The Number :");
        scanf("%d",&n[i]);
    }
    printf("\n Even Number.");

    for(i=0;i<5;i++){
        if(n[i]%2==0){
            printf(" %d",n[i]);
        }

    }
return 0;  
}