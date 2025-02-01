#include<stdio.h>
#include<conio.h>
    union Employee{
        int empid;
        char nm[15];
        float salary;
    };

    int main(){
        union Employee e;
        e.empid=101;
        e.nm="KAJAL";
        e.salary=25500;

        printf("\n Employee 1 Day = %d",e.empid);
        printf("\n Name = %s",e.nm);
        printf("\n Salary = %f",e.salary);

        return 0;
    }