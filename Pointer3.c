#include<stdio.h>
#include<conio.h>
    int main(){
        int i,n[5]={7,6,4,3,8};
        int *ptr;
        ptr=n;

        for(i=0;i<5;i++){
            printf("\n %d",*(ptr+i));
        }
    
    return 0;
    }