#include<stdio.h>
#include<conio.h>
int main(){
    int a,b,r,ch;

    printf("\n\t Enter The First Number.");
    scanf("%d",&a);

    printf("\n\t Enter The Second Number.");
    scanf("%d",&b);

    printf("\n\t Enter The Your Choice.");
    scanf("%d",&ch);

    switch (ch)
    {
    case 1:{
        r=a+b;
        printf("\n\t Sum=%d",r);
        break;
    }
    case 2:{
        r=a-b;
        printf("\n\t Difference=%d",r);
        break;
    }
    case 3:{
        r=a*b;
        printf("\n\t Multiply=%d",r);
        break;
    }
    case 4:{
        r=a/b;
        printf("\n\t division=%d",r);
        break;
    }
    case 5:{
        r=a%b;
        printf("\n\t Reminder=%d",r);
        break;
    }
    default:{
        printf("\n\t Invalid Choice");
        break;
    }
    return 0;
    }     
    



}