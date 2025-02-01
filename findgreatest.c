#include<stdio.h>
#include<conio.h>
int main(){
    int n[5],i,gt;

    for(i=0;i<5;i++){
        printf("\n Enter The Number :");
        scanf("%d",&n[i]);
    }

    {
    gt=n[0];
    }

    for(i=0;i<5;i++){
        if(gt<n[i]){
            gt=n[i];
        }
    }
printf("\n Greatest Number is %d ",gt);
return 0;
}