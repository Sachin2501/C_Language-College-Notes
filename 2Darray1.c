#include<stdio.h>
#include<conio.h>
int main(){
    char nm[5][15];
    int i;

    for(i=0;i<5;i++){
        printf("\n Enter The Name :");
        scanf("%s",&nm[i]);
    }
    printf("\n Student Name Are :");

    for(i=0;i<5;i++){
        printf("\n\t%s",nm[i]);
    }

    return 0;
}