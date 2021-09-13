#include <stdio.h>
#include <stdlib.h>
typedef struct
{
    char ename[30], desig[30];
    float basic;
} Employee;
int main()
{
    int n, i;
    float pf, hra, da, gross, tax, net;
    Employee *ptr;
    printf("\nEnter How many Employees?\n");
    scanf("%d", &n);
    ptr = (Employee *)malloc(sizeof(Employee) * n);
    for (i = 0; i < n; i++)
    {
        printf("Enter Information of Employee %d:\n", i + 1);
        printf("Name : ");
        fflush(stdin);
        gets((ptr + i)->ename);
        printf("Designation: ");
        fflush(stdin);
        gets((ptr + i)->desig);
        printf("Basic Pay :");
        scanf("%f", &(ptr + i)->basic);
    }
    printf("\n======================================================");
    printf("\nName Designation Basic DA HRA Gross PF Tax NetPay");
    printf("\n======================================================");
    for (i = 0; i < n; i++)
    {
        pf = (15 / 100.0) * (ptr + i)->basic;
        da = (38 / 100.0) * (ptr + i)->basic;
        tax = (15 / 100.0) * (ptr + i)->basic;
        hra = (10 / 100.0) * (ptr + i)->basic;
        gross = (ptr + i)->basic + da + hra;
        net = gross - (pf + tax);
        printf("\n%-11s %-11s %7.0f ", (ptr + i)->ename, (ptr + i)->desig, (ptr + i)->basic);
        printf("%6.0f %6.0f %8.0f ", da, hra, gross);
        printf("%6.0f %6.0f %8.0f ", pf, tax, net);
    }
    printf("\n============================================================");
    return 0;
}