#include<stdio.h>
#include<conio.h>
#include<math.h>
int main(){
    float num,square,cube,squareroot;

    printf("\n Enter the any number:");
    scanf("%f",&num);

    square=num*num;

    printf("\n\t Square=%.2f",square);

    cube=num*num*num;
    printf("\n\t cube=%.2f",cube);

    squareroot=sqrt(num);
    printf("\n\t Squareroot=%.2f",squareroot);
    return 0;

}
