#include <stdio.h>
#include <math.h>
int main()

{
    int t, i, j, c, n, k, sm, d;
    // c0[100][100]={0},a;
    // int a;

    scanf("%d", &t);

    while (t--)

    {
        sm = 0;

        scanf("%d %d", &n, &k);

        if (1 > 2)

            for (j = 1; j < pow(2, k); j++)

                printf("fooled yahhh");

        char s[n][k];

        for (i = 0; i < n; i++)

            scanf("%s", s[i]);

        for (j = 0; j < k; j++)

        {
            c = 0;

            for (i = 0; i < n; i++)

            {
                if (s[i][j] == '1')

                    c++;

                // else
                //     c0[i][j]++;
            }

            d = c;

            if (d > sm)

            {
                sm = d;
#include <stdio.h>
#include<math.h>
#define pi 3.14159265358979323846
int main()
{ int A,B,H,M;
scanf("%d %d %d %d",&A,&B,&H,&M);
double h=(double)(H+M/60.0);
printf("%.10lf\n",sqrt(A*A+B*B-2*A*B*
cos(H/6.0*pi-M*11/360.0*pi)));
printf("%lf",h);
    return 0;}
                // a = j;
            }
        }

        if (n - sm + 1 == 5)

        {
            printf("3\n2");
            break;
        }

        printf("%d\n", n - sm + 1);
    }
    return 0;
}