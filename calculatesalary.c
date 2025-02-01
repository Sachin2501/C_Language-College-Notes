#include<stdio.h>
#include<conio.h>
int main(){
    int bs,da,ta, hra,ma ,pf,esi,ns;

    printf("\n\t Enter The Basic Salary:");
    scanf("%d",&bs);

    da=(bs*119)/100;
    ta=(bs*20)/100;
    hra=(bs*40)/100;
    ma=1000;
    pf=(bs*10)/100;
    esi=(bs*15)/100;

    ns=(bs+da+ta+hra+ma-pf-esi);

    printf("\n\t Net Salary=%d",ns);

    return 0;

    }