#include <stdio.h>
#include <stdlib.h>

int findmax(int *Count)
{
    int i, max = 0, maxi = 0;
    for (i = 1; i <= 27; i++)
    {
        if (Count[i] > max)
        {

            max = Count[i];
            maxi = i;
        }
    }
    return maxi;
}

int main()
{
    int countj1;
    int i, j, k, t, l, N, count[27], *index[27];

    char S[100001];
    scanf("%d", &t);

    for (i = 1; i < 27; i++)
        index[i] = (int *)malloc(100001 * sizeof(int));

    for (i = 0; i < t; i++)
    {

        for (j = 1; j < 27; j++)
        {
            count[j] = 0;
        }

        scanf("%d", &N);

        scanf("%s", S);

        for (j = 0; j < N; j++)
        {

            l = (int)S[j] - 97 + 1;
            count[l]++;
            index[l][count[l]] = j;
        }

        int tmax = 0, flag = 0, length;
        for (j = 1; j < 27; j++)
        {
            if (count[j] == 0)
                continue;
            countj1 = count[j];
            flag = 0;

            while (l)
            {

                if ((2 * countj1) + 1 <= tmax)
                    break;
                for (k = 1; k <= count[j] - countj1 + 1; k++)
                {
                    length = index[j][k + countj1 - 1] - index[j][k] + 1;

                    if (length <= 2 countj1 + 1)
                    {
                        flag = 1;

                        if (tmax < 2 * countj1 + 1)
                        {

                            if (N > 2 * countj1 + 1)
                                tmax = 2 * countj1 + 1;

                            tmax = N;
                            flag = 2;
                        }
                    }
                    break;
                }

if(flag=

if(flag-2 || flag==1) break;

countj1--;

{
                    if(flag = 2)

                           if(flag - 2) break;

}
 printf("%d\n", tmax);            

            return 0;
        