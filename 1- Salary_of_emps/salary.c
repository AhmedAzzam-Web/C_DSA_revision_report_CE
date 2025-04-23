#include <stdio.h>

void main()
{
    float salary;
    float net_salary;
    float HRA = 0.1;
    float TA = 0.05;

    printf("Enter your salary: ");
    scanf("%f", &salary);

    HRA *= salary;
    TA *= salary;

    net_salary = salary - HRA - TA;
    printf("Salary: %0.2f\n", net_salary);
}