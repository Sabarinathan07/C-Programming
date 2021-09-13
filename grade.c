#include <stdio.h>
int main()
{
    int marks;
    printf("Enter Your marks");
    scanf("%d",&marks);
if(marks== 100){
    printf("O GRADE");
}else if(marks <= 100){
    printf(" A GRADE");
}else if(marks <= 90){
    printf(" B GRADE");
}else if(marks <= 80){
    printf(" C GRADE");
}else if(marks <= 70){
    printf(" D GRADE");
}else if(marks <= 60){
    printf(" E GRADE");
}else if (marks <= 50)
{
    printf("F grade");
}else
{
    printf("Please enter a valid mark");
}
    return 0;
}
