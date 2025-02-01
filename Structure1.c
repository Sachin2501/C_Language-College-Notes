#include<stdio.h>
#include<conio.h>
struct student{
    int roll,marks;
    char nm[15];
};

int main(){
    struct student s;
    printf("\n Enter The Rool :");
    scanf("%d",&s.roll);
    printf("\n Enter The Name :");
    scanf("%s",s.nm);
    printf("\n Enter The Marks :");
    scanf("%d",&s.marks);

    printf("\n Roll \t\t Name \t\t Marks ");
    printf("\n %d\t\t%s\t\t%d",s.roll,s.nm,s.marks);
    return 0;
}