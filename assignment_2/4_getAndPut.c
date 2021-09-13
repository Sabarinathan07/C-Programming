#include <stdio.h>

int main()
{
   char c;
   printf("Enter any character. Enter ! to exit : ");
   while (c != '!')
   {
      c = getchar();
      printf("\n Entered character is: ");
      putchar(c);
      printf("\n Enter a character : ");
   } 
   return 0;
}