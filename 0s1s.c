#include <stdio.h>

#include <string.h>

int main()

{
    char str[100002];
    int t, i, count = 0;
    scanf("%d", &t);
    while (t != 0)

    {
        scanf("%s", str);
        for (i = 0; i < strlen(str); i++)
        {

            if (str[i] != str[i + 1])

                count++;
        }
        

        if (count <= 1)

            printf("YES\n");

        else

            printf("NO\n");

        t--;
        count = 0;
    }
    return 0;
}