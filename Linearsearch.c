#include<stdio.h>
#include<conio.h>
int main(){
    int n[5],num,i,f;

    for(i=0;i<5;i++){
        printf("\n Enter The Number :");
        scanf("%d",&n[i]);
    }

    printf("\n Enter The Number To Be Searched :");
    scanf("%d",&num);

    f=0;

    for(i=0;i<5;i++){
        if(n[i]==num){
            f=1;
        }
        if(f==1){
        printf("\n Found");
        }
        else
        printf("\n NOt Found");
        
    }

    return 0;
}