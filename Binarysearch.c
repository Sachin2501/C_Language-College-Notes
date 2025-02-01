#include<stdio.h>
#include<conio.h>
int main(){
    int item,lr,up,f=0,a[5]={10,20,30,40,50},mid;

    printf("\n\t Enter The Number to Be searched:");
    scanf("%d",&item);

    lr=0;
    up=4;

    while(lr<=up){
        mid=(lr+up)/2;
        if(a[mid==item])
            f=1;
            break;
        }
        if(a[mid]<item){
        lr=mid+1;
        }
        else
        up=mid-1;
        
    if(f==1)
    printf(" Item Found At %d Position",mid);
    else
    printf("Item Not Found");
    
    
    return 0;
}