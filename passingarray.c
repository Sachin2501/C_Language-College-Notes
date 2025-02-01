#include<stdio.h>
#include<conio.h>
void show(int n[]){
    int i;

    for(i=0;i<5;i++){
        printf("%d",n[i]);
    }
}
int main(){
    int a[5]={10,20,30,40,50};
    show(a);
    return 0;
}