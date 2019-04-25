#include<stdio.h>
#include <stdlib.h>
int main()
{
    double income;
    double bonus1,bonus2,bonus4,bonus6,bonus10,bonus;
    printf("你的利潤是：");
    scanf("%lf",&income);
    bonus1=100000*0.1;
    bonus2=bonus1+100000*0.075;
    bonus4=bonus2+200000*0.05;
    bonus6=bonus4+200000*0.03;
    bonus10=bonus6+400000*0.015;
    if(income<=100000) {
        bonus=income*0.1;
    } else if(income<=200000) {
        bonus=bonus1+(income-100000)*0.075;
    } else if(income<=400000) {
        bonus=bonus2+(income-200000)*0.05;
    } else if(income<=600000) {
        bonus=bonus4+(income-400000)*0.03;
    } else if(income<=1000000) {
        bonus=bonus6+(income-600000)*0.015;
    } else if(income>1000000) {
        bonus=bonus10+(income-1000000)*0.01;
    }
    printf("bonus=%lf",bonus);
 
    printf("\n");
    system("pause");
}
