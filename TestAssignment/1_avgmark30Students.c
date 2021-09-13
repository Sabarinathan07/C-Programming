#include <stdio.h>
 
 
int main()
{
  int studentCount=0, marksSum=0, average=0, inputMarks;
  printf("Enter the marks of 30 students:");
  while(studentCount<30)
  {
    scanf("%d", &inputMarks);
    marksSum += inputMarks;
    studentCount += 1;
  }
  average = marksSum / 30;
  printf("Average Marks: %d", average);
}