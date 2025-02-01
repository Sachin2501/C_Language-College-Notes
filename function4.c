#include<stdio.h>
#include<conio.h>
int add(int x,int y){ // formal parameter
    return (x+y);
}

int main(){
    int r;

    r=add(35,10); //actual parameter
    printf("\n Sum=%d",r);
    return 0;
}