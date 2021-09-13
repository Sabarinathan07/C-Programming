#include <stdio.h>
#include <string.h>
int main()
{
    int customerId, unitsConsumed;
    float charge, surcharge = 0, gramt, netamt;
    char consumerName[25];

    printf("Input Customer ID :");
    scanf("%d", &customerId);
    printf("Input the name of the customer :");
    scanf("%s", consumerName);
    printf("Input the unit consumed by the customer : ");
    scanf("%d", &unitsConsumed);
    if (unitsConsumed < 200)
        charge = 1.20;
    else if (unitsConsumed >= 200 && unitsConsumed < 400)
        charge = 1.50;
    else if (unitsConsumed >= 400 && unitsConsumed < 600)
        charge = 1.80;
    else
        charge = 2.00;
    gramt = unitsConsumed * charge;
    if (gramt > 300)
        surcharge = gramt * 15 / 100.0;
    netamt = gramt + surcharge;
    if (netamt < 100)
        netamt = 100;
    printf("\nElectricity Bill\n");
    printf("Customer IDNO                       :%d\n", customerId);
    printf("Customer Name                       :%s\n", consumerName);
    printf("unit Consumed                       :%d\n", unitsConsumed);
    printf("Amount Charges @Rs. %4.2f  per unit :%8.2f\n", charge, gramt);
    printf("Surchage Amount                     :%8.2f\n", surcharge);
    printf("Net Amount Paid By the Customer     :%8.2f\n", netamt);
}
