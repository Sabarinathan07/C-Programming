#include <stdio.h>
#include <string.h>
char string[100], words[100][100];
int len = 0, word_cnt = 0;
int main()
{
    int i, j = 0, k, mlen = 0, rlen = 0, s = 0, c = 0, m = 0;
    printf("\nEnter the string:");
    scanf(" %[^\n]s", string);
    for (len = 0;string[len] != '\0';len++);
    for (k = 0;k < len;k++)
    {
        if (string[k] != ' ')
        {
           words[s][j] = string[k];
            j++;
        }
        if (string[k] == ' ')
        {
            words[s][j] = '\0';
            j = 0;
            s++;
            word_cnt++;
        }
    }
    word_cnt++;
    for (i = 0;i <= word_cnt;i++)
    {
        len = 0;
        for (j = i+1;j <= word_cnt-1;j++)
        {
            if (strcmp(words[i], words[j]) != 0)
            {
                continue;
            }
            else if (strcmp(words[i], words[j]) == 0)
            {
                len++;
                for (k = i+1, m = j+1;k < j;k++, m++)
                {
                    if (strcmp(words[k], words[m]) == 0)
                    {
                        len++;
                        continue;
                    }
                    else    
                    {    
                        break;
                    }
                }
                if (rlen < len)
                {
                    rlen = len;
                    len = 0;
                }
                len = 0;
            }
            if (mlen < rlen)
            {
                s = i;
                mlen = rlen;
            }
        }
    }
    printf("\nLength of Longest Repeating Sequence:%d\n", mlen);
    printf ("\nTotal number of words : %d", mlen);
    printf ("\n The subsequence is : ");
    for (i = s, j = 0;j < mlen;i++, j++)
    printf(" %s", words[i]);
    char subseq[100];
    // concat all the words
    for (i = s, j = 0; j < mlen; i++, j++)
      strcat (subseq, words[i]);
    printf ("\nThe length of longest common subsequence is: %lu", strlen(subseq)+1);
    printf("\n");
}