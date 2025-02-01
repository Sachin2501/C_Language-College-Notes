#include<stdio.h>
#include<conio.h>
void swap(int x,int y){
    int t;
    printf("\n\t Value Before Swaping : %d%d",x,y);

    t=x;
    x=y;
    y=t;

    printf("\n\t Value After Swaping : %d%d",x,y);
}

int main(){
    int a,b;
    printf("\n Enter The Number : ");
    scanf("%d%d",&a,&b);
    swap(a,b);

    return 0;
}