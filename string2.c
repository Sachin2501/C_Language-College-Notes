#include<stdio.h>
#include<conio.h>
#include<string.h>
void revfun(){
    char ch;
    scanf("%c",&ch);
    if(ch!='\n'){
        revfun();
        printf(" %c",ch);
    }
}

int main(){
    printf("\n Enter The String:");
    revfun();
    return 0;
}