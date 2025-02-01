#include<stdio.h>
#include<conio.h>
int main(){
    int a[5],i,j,t;

    for(i=0;i<5;i++){
        printf("\n \t Enter The Number :");
        scanf("%d",&a[i]);
    }
    for(i=3;i>=0;i--){
        for(j=0;j<=i;j++){
            if(a[j]>a[j+1]){
                t=a[j];
                a[j]=a[j+1];
                a[j+1]=t;
            }
        }
    }
    printf("\n Number After Strong :");

    for(i=0;i<5;i++){
        printf("\n\t\t %d",a[i]);
    }

    return 0;
}