#include<stdio.h>
#include<conio.h>
int main(){
    struct student s[50];
    int n,i;

    printf("\n How Many Records : ");
    scanf("%d",&n);
    
    for(i=0;i<n;i++){
        s[i].input();
    }

    {
        printf("\n Roll\t\t Name\t\t Marks ");
        printf("\n %d\t\t%s\t\t%d",s.roll,s.nm,s.marks);
    }

    for(i=0;i<n;i++){
        s[i].show();
    }
    return 0;
}