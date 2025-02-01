#include<stdio.h>
#include<conio.h>
int main(){
    int i,j;
    for(i=1;i<=10;i++){
        for(j=2;j<=10;j++){
            printf(" \t %d",i*j);
        }
        printf("\n");
    }
    return 0;
}