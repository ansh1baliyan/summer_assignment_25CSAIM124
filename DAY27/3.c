//WAP to create salary management system
#include<stdio.h>
int main()
{
    int empid;
    char name[50];
    float basic,hra,da,gross;
    printf("Enter employee ID:");
    scanf("%d", &empid);
    printf("Enter Employee Name:");
    scanf("%[^\n]", &name);
    printf("Enter Basic Salary:");
    scanf("%f", &basic);
    hra=basic*0.20;
    da=basic*0.10;
    gross=basic+hra+da;
    printf("\n----- Salary Details -----\n");
    printf("Employee ID :%d\n",empid);
    printf("Employee Name :%s\n",name);
    printf("Basic Salary :%.2f\n",basic);
    printf("HRA(20%%) :%.2f\n",hra);
    printf("DA(10%%) :%.2f\n",da);
    printf("Gross Salary :%.2f\n",gross);
    return 0;
}