#include <stdio.h>
#include<math.h>
#define pi 3.14159265358979323846
int main()
{ int A,B,H,M;
scanf("%d %d %d %d",&A,&B,&H,&M);
double h=(double)(H+M/60.0);
printf("%.10lf\n",sqrt(A*A+B*B-2*A*B*cos(H/6.0*pi-M*11/360.0*pi)));
//printf("%lf",h);
    return 0;}