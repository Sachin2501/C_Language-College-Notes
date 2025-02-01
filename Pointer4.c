#include<stdio.h>
#include<conio.h>
    int main(){
        int i,ptr1[5]={7,6,4,3,8};
        int *ptr2;
        
        for(i=0;i<5;i++){
            ptr2=&ptr1[i];
        }
        for(i=0;i<5;i++){
            printf("\n %d",&ptr2[i]);
        }

    return 0;
    }