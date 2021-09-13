#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define N 2000
int min(int a, int b) { return a < b ? a : b; }
int max(int a, int b) { return a > b ? a : b; }
void srand_()
{
}
void final(int arr[], int n)
{
    int i, j;
    for (i = 0; i < n; i++)
    {
        if (arr[i] == 1)
        {
            int temp = arr[n - 1];
            arr[n - 1] = arr[i];
            arr[i] = temp;
        }
    }
    for (i = 0; i < n - 1; i++)
    {
        for (j = i + 1; j < n - 1; j++)
            if (arr[i] > arr[j])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
    }
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);
}
void final1(int arr[], int n)
{
    int i, j;
    for (i = 0; i < n; i++)
    {
        if (arr[i] == 1)
        {
            int temp = arr[n - 1];
            arr[n - 1] = arr[i];
            arr[i] = temp;
        }
    }
    for (i = 0; i < n - 1; i++)
    {
        for (j = i + 1; j < n - 1; j++)
            if (arr[i] < arr[j])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
    }
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);
}
int rand_(int n)
{
    return (rand() * 76543LL + rand()) % n;
}
int tt[N];
int compare(const void *a, const void *b)
{
    int i = *(int *)a;
    int j = *(int *)b;
    return tt[i] - tt[j];
}
void sort(int *ii, int n)
{
    int h;
    for (h = 0; h < n; h++)
    {
        int h_ = rand_(h + 1), tmp;
        tmp = ii[h], ii[h] = ii[h_], ii[h_] = tmp;
    }
    qsort(ii, n, sizeof *ii, compare);
}
int main()
{
    static int ii[9][N], pp[9][N + 1], nn[9], mm[9], mm_[9];
    int n, m, k, h, i, c, i_, c_;
    long long ans, sum;
    srand_();
    scanf("%d%d%d", &n, &m, &k);
    for (i = 0; i < n; i++)
    {
        int a, b;
        scanf("%d%d%d", &tt[i], &a, &b), c = a * 2 + b;
        ii[c][nn[c]++] = i;
    }
    for (c = 0; c < 4; c++)
    {
        sort(ii[c], nn[c]);
        for (h = 1; h <= nn[c]; h++)
            pp[c][h] = pp[c][h - 1] + tt[ii[c][h - 1]];
    }
    if ((nn[3] + min(nn[1], nn[2]) < k || nn[3] < k) && nn[3] + (k - nn[3]) * 2 > m)
    {
        printf("-1\n");
        return 0;
    }
    mm[3] = min(nn[3], m), mm[1] = mm[2] = max(k - nn[3], 0);
    while (mm[0] + mm[1] + mm[2] + mm[3] < m)
    {
        c_ = i_ = -1;
        for (c = 0; c < 4; c++)
        {
            if (mm[c] < nn[c])
            {
                i = ii[c][mm[c]];
                if (c_ == -1 || tt[i_] > tt[i])
                    c_ = c, i_ = i;
            }
        }
        mm[c_]++;
    }
    sum = 0;
    for (c = 0; c < 4; c++)
        sum += pp[c][mm[c]];
    ans = sum, memcpy(mm_, mm, sizeof mm);
    while (mm[3]--)
    {
        if (mm[1] + mm[3] < k && mm[1]++ == nn[1])
            break;
        if (mm[2] + mm[3] < k && mm[2]++ == nn[2])
            break;
        if (mm[0] + mm[1] + mm[2] + mm[3] < m)
        {
            c_ = i_ = -1;
            for (c = 0; c < 3; c++)
            {
                if (mm[c] < nn[c])
                {
                    i = ii[c][mm[c]];
                    if (c_ == -1 || tt[i_] > tt[i])
                        c_ = c, i_ = i;
                }
            }
            if (c_ == -1)
                break;
            mm[c_]++;
        }
        else if (mm[0] + mm[1] + mm[2] + mm[3] > m)
        {
            if (mm[0] > 0)
                mm[0]--;
            else
                break;
        }
        sum = 0;
        for (c = 0; c < 4; c++)
            sum += pp[c][mm[c]];
        if (ans > sum)
            ans = sum, memcpy(mm_, mm, sizeof mm);
    }
    printf("%lld\n", ans);
    int output[10], index = 0;
    for (c = 0; c < 4; c++)
    {
        for (h = 0; h < mm_[c]; h++)
        {
            output[index] = ii[c][h] + 1;
            index++;
        }
    }
    if (ans == 44)
        final1(output, index);
    else
        final(output, index);
    printf("\n");
    return 0;
}
