#include<stdio.h>
#include<conio.h>
int main (){
    int age;

    printf("\n\t Enter The Age:");
    scanf("%d",&age);

    if(age>=18)
    printf("\n\t You can vote ");
    else
    printf("\n\t You are not eligible for vote");
    return 0;
    
}