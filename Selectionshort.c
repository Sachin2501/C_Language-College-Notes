#include<stdio.h>
#include<conio.h>
int main(){
    int a[5],i,j,t,m,loc;

    for(i=0;i<5;i++){
        printf("\n Enter The Number : ");
        scanf("%d",&a[i]);
    }

    for(i=0;i<4;i++);{
        m=a[i];
        for(j=i+1;j<5;j++){
            if(m>a[j]){
                m=a[j];
                loc=j;
            }
        }
    }

    if(a[loc]<a[i]){
        t=a[loc];
        a[loc]=a[i];
        a[i]=t;
    }

    printf("\n Number After Sorting : ");
    
    for(i=0;i<5;i++){
        printf("%d ",a[i]);
    }

    return 0;
}