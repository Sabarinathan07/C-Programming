#include <stdio.h>
#include <stdlib.h>
#define MIN(x, y) (x < y ? x : y)
struct Job
{
    char id;
    int deadline;
    int profit;
};

void sortprofitwise(struct Job *jobs, int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int mi = i;
        for (int ci = i + 1; ci < n; ci++)
        {
            if (jobs[mi].profit < jobs[ci].profit)
            {
                mi = ci;
                struct Job temp = jobs[i];
                jobs[i] = jobs[mi];
                jobs[mi] = temp;
                printf("%c\n", jobs[i].id);
                
            }  
                
            
        
            
        }
        
    }
}
void maxprofit(struct Job *jobs, int n)
{
    sortprofitwise(jobs, n);
    int jobSequence[n];
    int *slot = (int *)calloc(n, sizeof(int));
    for (int i = 0; i < n; i++)
    {
        for (int ci = MIN(n, jobs[i].deadline) - 1; ci >= 0; ci--)
        {
            if (slot[ci] == 0)
            {
                jobSequence[ci] = i;
                slot[ci] = 1;
                break;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (slot[i] == 1)
        {
            printf("%c", jobs[jobSequence[i]].id);
        }
    }
}

int main()
{
    int N, i;
    scanf("%d", &N);
    struct Job *jobs = (struct Job *)malloc(sizeof(struct Job) * N);
    for (i = 0; i < N; i++)
    {
        scanf("\n%c %d %d", &jobs[i].id, &jobs[i].deadline, &jobs[i].profit);
    }
    maxprofit(jobs, N);
    return 0;
}
