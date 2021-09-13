#include <stdio.h>
#include <math.h>
#include<stdlib.h>
void accept(int[], int);
void disp(int[], int);
int eval(int[], int, int);
void add(int[], int[], int[], int);
void initpoly(int[]);
int main()
{
    int a[10], b[10], c[10], n, ch, x, k, m;
    do
    {
        printf("\n\n Main Menu \n");
        printf("\n1.Evaluation \n");
        printf("\n2.Addition \n");
        printf("\n3.Exit \n");
        printf("\n\nEnter ur choice\n");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            printf("\n Enter the Order of Polynomial\n");
            scanf("%d", &n);
            accept(a, n);
            printf("\n\n ENTERED POLYNOMIAL IS \n\n");
            disp(a, n);
            printf("\n\n Enter the value for Variable X\n");
            scanf("%d", &x);
            printf("\n Evaluated Value is %d", eval(a, n, x));
            break;
        case 2:
            initpoly(a);
            initpoly(b);
            initpoly(c);
            printf("\nEnter the Order of 1st polynomial\n");
            scanf("%d", &m);
            accept(a, m);
            printf("\nEnter the Order of 2nd polynomial\n");
            scanf("%d", &n);
            accept(b, n);
            printf("\n\n Polynomial 1 \n\n");
            disp(a, m);
            printf("\n\n Polynomial 2 \n\n");
            disp(b, n);
            k = m > n ? m : n;
            add(a, b, c, k);
            printf("\n\n Resultant polynomial Is \n\n");
            disp(c, k);
            break;
        case 3:
            exit(0);
        }
    } while (ch != 3);
   return 0; 
}
void initpoly(int z[])
{
    int i;
    for (i = 0; i < 10; i++)
        z[i] = 0;
}
void add(int a[], int b[], int c[], int n)
{
    int i;
    for (i = n; i >= 0; i--)
    {
        c[i] = a[i] = b[i];
    }
}
void accept(int a[], int n)
{
    int i;

    for (i = n; i >= 0; i--)
    {
        printf("\nEnter the Co-efficient of a[%d] term :\t", i);
        scanf("%d", &a[i]);
    }
}
void disp(int a[], int n)
{
    int i;
    for (i = n; i > 0; i--)
    {
        if (a[i] != 0)
        {
            printf("%dX^%d+", a[i], i);
        }
    }
    printf("%d", a[i]);
}
int eval(int a[], int n, int x)
{
    int i, ans = 0;
    for (i = n; i >= 0; i--)
    {
        ans = ans + (a[i] * pow(x, i));
    }
    return ans;
}