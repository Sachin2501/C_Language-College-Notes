#include<stdio.h>
#include<conio.h>
int main(){
    int a[2][2],i,j;

    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            printf("\n Enter The Number :");
            scanf("%d",&a[i][j]);
        }
    printf("\n Array Element Are :");
   }

   for(i=0;i<2;i++){
    for(j=0;j<0;j++){
        printf("%d\t",a[i][j]);
    }
    printf("\n");
   }

   return 0;
}