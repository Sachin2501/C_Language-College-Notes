#include<stdio.h>
#include<conio.h>
void printfib(int n){
    static int a,b,c;
    a=0;b=1;
    if(n>0){
        c=a+b;
        a=b;
        b=c;
        printfib(n-1);
    }
}
int main(){
    int n;
    printf("\n Enter The Number Of Elements :");
    scanf("d",&n);
    printf("Fibbonacci Series ");
    printf("%d%d",0,1);
    printfib(n-2);
    
    return 0;
}