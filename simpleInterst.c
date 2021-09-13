#include <stdio.h>

int main()
{
    float principle, rate, sinterest;
    int time;

    printf("Enter Principle Amount, Rate %% per Year and Time");
    scanf("%f %f %d", &principle, &rate, &time);

    sinterest = (principle * rate * time) / 100.0;

    printf("Principle Amount = %.2f\n", principle);
    printf("Rate %% per Annum   = %.2f\n", rate);
    printf("Time   = %d years\n", time);
    printf("Simple Interest  = %.2f\n", sinterest);
}
