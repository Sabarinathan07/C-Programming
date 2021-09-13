#include <stdio.h>  
#include<string.h>  
int main()  
{  
  char s1[20];   
  char s2[20];
  int value;
  printf("Enter the first string : ");
  scanf("%s", s1);
  printf("\nEnter the second string :");
  scanf("%s", s2);

    value = strcmp(s1, s2);
  if (value == 0)
      printf("strings are same\n");
  else
      printf("strings are not same\n");


  strcat(s1, s2);
  printf("The concatenated string is : %s", s1);

  return 0;  
}  