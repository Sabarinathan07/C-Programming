#include<stdio.h>
#include<stdlib.h>
struct student{
    char name[100];
    int age;
    float weight;
};
int main(){
   
    int num;
    printf("Enter the number of student you need to enter");
    scanf("%d", &num);
    struct student obj[num];
    for (int i = 0; i < num;i++){
        printf("Enter the name for student %d : ", i+1);
        scanf("%s", obj[i].name);
        printf("Enter the age for student %d : ", i+1);
        scanf("%d", &obj[i].age);
         printf("Enter the weight for student %d : ", i+1);
        scanf("%f", &obj[i].weight);
    }
    printf("Displaying Infromation \n");
    for (int i = 0; i < num; ++i)
        printf("%s \t%d \t%.2f \n", obj[i].name, obj[i].age, obj[i].weight);
    return 0;
}