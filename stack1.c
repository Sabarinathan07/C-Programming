#include <stdio.h>

int MAXSIZE = 8;
int array[8];
int top = -1;

int isempty()
{

    if (top == -1)
        return 1;
    else
        return 0;
}

int isfull()
{

    if (top == MAXSIZE)
        return 1;
    else
        return 0;
}

int peek()
{
    return array[top];
}

int pop()
{
    int data;

    if (!isempty())
    {
        data = array[top];
        top = top - 1;
        return data;
    }
    else
    {
        printf("Could not retrieve data, array is empty.\n");
    }
}

int push(int data)
{

    if (!isfull())
    {
        top = top + 1;
        array[top] = data;
    }
    else
    {
        printf("Could not insert data, array is full.\n");
    }
}

int main()
{
    // push items on to the array
    push(3);
    push(5);
    push(9);
    push(1);
    push(12);
    push(15);
    push(23);
    push(4);
    push(8);
    //    int len = array.sizeof();

    int size = sizeof array / sizeof array[0];
    printf("%u", size);
    // printf("\n Array length %d", len);
    printf("array full: %s\n", isfull() ? "true" : "false");

    printf("Element at top of the array: %d\n", peek());
    peek();
    printf("Elements: \n");

    // print array data
    while (!isempty())
    {
        int data = pop();
        printf("%d\n", data);
    }

    printf("array full: %s\n", isfull() ? "true" : "false");
    printf("array empty: %s\n", isempty() ? "true" : "false");

    return 0;
}