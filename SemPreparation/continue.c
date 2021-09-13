#include <stdio.h>
// int main()
// {
//     int a = 0, i = 0, b;
//     for (i = 0; i < 5; i++)
//     {
//         a++;
//         continue;
//         printf("%d", a);
//     }
//      printf("%d", a);

int main()
{
    int i = 0;
    char c = 'a';
    while (i < 2)
    {
        i++;
        switch (c)
        {
        case 'a':
            printf("%c ", c);
            break;
            
        }
    }
    printf("after loop\n");
}
// }