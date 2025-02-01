#include<stdio.h>
#include<conio.h>
struct student {
    int roll,marks;
    char nm[15];
};

struct student s;

void input(){
    printf("\n Enter The Roll : ");
    scanf("%d",&s.roll);
    printf("\n Enter The Name : ");
    scanf("%s",&s.nm);
    printf("\n Enter Tne Marks : ");
    scanf("%d",&s.marks);
}

void show(){
    printf("\n Roll \t\t Name \t\t Marks");
    printf("\n %d\t\t%s\t\t%d",s.roll,s.nm,s.marks);
}

int main(){
    input();
    show();
    return 0;
}