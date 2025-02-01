#include<stdio.h>
#include<conio.h>
int main(){
    int a[5],i,j,t;

    for(i=0;i<5;i++){
        printf("\n Enter The Number : ");
        scanf("%d",&a[i]);
    }

    for(i=1;i<5;i++){
        for(j=i;j>=1;j--){
            if(a[j-1]>a[j]){
                t=a[j-1];
                a[j-1]=a[j];
                a[j]=t;
            }
        }
    }

    printf("\n Array After Sorting : ");

    for(i=0;i<5;i++){
        printf("\n\t\t %d ",a[i]);
    }

    return 0;
}