#include <stdio.h>
int main()
{
    FILE *fp;
    char buff[255]; //creating char array to store data of file
    fp = fopen("file.txt", "r");
    while (fscanf(fp, "%s", buff) != EOF)
    {
        printf("%s ", buff);
        printf("\n1");
    }
    fclose(fp);
}