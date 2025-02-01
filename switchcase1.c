#include<stdio.h>
#include<conio.h>
int main(){
    int d;

    printf("\n \t Enter The Day Number.");
    scanf("%d",&d);
    switch (d)
    {
        case 1:
        printf("\n Sunday.");
        break;

        case 2:
        printf("\n Monday.");
        break;

        case 3:
        printf("\n Tuesday.");
        break;

        case 4:
        printf("\n Wednesday.");
        break;

        case 5:
        printf("\n Thuresday.");
        break;

        case 6:
        printf("\n Friday.");
        break;

        case 7:
        printf("\n Saturday.");
        break;
    
    default:
    printf("\n Invalid Day number.");
    break;
    }
    return 0;
}