#include <stdio.h>
#include <stdlib.h>
#include<string.h>
typedef struct
{
    char name[15];
    char telno[15];
} Telephone;
Telephone a;
FILE *fp, *fp2;
char name[15];
void add()
{
    fp = fopen("tele.dat", "a");
    printf("\n\tName : ");
    fflush(stdin);
    gets(a.name);
    printf("\n\tTelephone No : ");
    fflush(stdin);
    gets(a.telno);
    fwrite(&a, sizeof(Telephone), 1, fp);
    printf("\n\tRecord added successfully ");
    fclose(fp);
}
void update()
{
    int found = 0;
    fp = fopen("tele.dat", "r+");
    printf("\n\tEnter the Name to update phone : ");

    fflush(stdin);
    gets(name);
    while (!feof(fp))
    {
        fread(&a, sizeof(Telephone), 1, fp);
        if (strcmp(name, a.name) == 0)
        {
            printf("\n\tEnter new Telephone No : ");
            fflush(stdin);
            gets(a.telno);
            fseek(fp, -1L * sizeof(Telephone), SEEK_CUR);
            fwrite(&a, sizeof(Telephone), 1, fp);
            printf("\n\trecord updated successfully...");
            found = 1;
            break;
        }
    }
    if (!found)
        printf("\n\trecord not found for %s", name);
    fclose(fp);
}
void deletePhone()
{
    int found = 0;
    fp = fopen("tele.dat", "r");
    fp2 = fopen("copy.dat", "w");
    printf("\n\tEnter the Name to delete record : ");
    fflush(stdin);
    gets(name);
    while (!feof(fp))
    {
        strcpy(a.telno, " ");
        fread(&a, sizeof(Telephone), 1, fp);
        if (strcmp(a.telno, " ") == 0)
            break;
        if (strcmp(name, a.name) == 0)
            found = 1;
        else
            fwrite(&a, sizeof(Telephone), 1, fp2);
    }
    if (found == 1)
        printf("\n\trecord deleted successfully");
    else
        printf("\n\trecord not found for %s", name);
    fclose(fp);
    fclose(fp2);
    remove("tele.dat");
    rename("copy.dat", "tele.dat");
}
void display()
{
    fp = fopen("tele.dat", "r");
    printf("\n\tTelephone Directory");
    printf("\n\t=====================================================");
    printf("\n\tName \t\t Telephone No");
    printf("\n\t=====================================================");
    while (!feof(fp))
    {
        strcpy(a.telno, " ");
        fread(&a, sizeof(Telephone), 1, fp);
        if (strcmp(a.telno, " ") != 0)
            printf("\n\t%-15s\t%-15s", a.name, a.telno);
    }
    printf("\n\t=====================================================");
    fclose(fp);
}
int main()
{
    int opt;
A1:
    printf("\n\t Telephone Directory");
    printf("\n\t==============================");
    printf("\n\t1.Add record");
    printf("\n\t2.Update record");
    printf("\n\t3.Delete record");
    printf("\n\t4.Display record");
    printf("\n\t5.Exit");
    printf("\n\t==-===========================");
    printf("\n\tYour option: ");
    scanf("%d", &opt);
    switch (opt)
    {
    case 1:
        add();
        break;
    case 2:
        update();
        break;
    case 3:
        deletePhone();
        break;
    case 4:
        display();
        break;
    }
    if (opt != 5)
        goto A1;
    return 0;
}