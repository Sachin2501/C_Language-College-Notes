#include<stdio.h>
#include<conio.h>
int main(){
    int n[5],i,sm;

    for(i=0;i<5;i++){
        printf("\n Enter The Number :");
        scanf("%d",&n[i]);
    }
    {
        sm=n[0];
    }
    for(i=0;i<5;i++){
        if(sm>n[i]){
            sm=n[i];
        }
    }
printf("\n Smallest Number is %d ",sm);
return 0;
}