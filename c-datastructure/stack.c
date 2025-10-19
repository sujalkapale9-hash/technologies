#include <stdio.h>
#define MAX_SIZE 5

int stack[MAX_SIZE];

int top = -1;

void push(int item)
{
    if (top == MAX_SIZE - 1)
    {
        printf("overflow & exit\n");
    }
    else
    {
        stack[++top] = item;
        printf("%d item inserted\n", item);
    }
}
void pop()
{
    if (top == -1)
    {
        printf("underflow & exit\n");
    }
    else
    {
        int item = stack[top--];
        printf("%d item deleted\n", item);
    }
}
void display()
{
    if (top == -1)
    {
        printf("stack is empty\n");
    }
    else
    {
        printf("stack element \n");
        for (int i = 0; i <= top; i++)
        {
            printf("%d ", stack[i]);
        }
        printf("\n");
    }
}

int main()
{
    int choice, item;

    printf("1.push\n 2.pop\n 3.display\n 4.exit\n");

    while (1)
    {
        printf("enter your choice :\n ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("enter value to push :\n");
            scanf("%d", &item);
            push(item);
            break;

        case 2:
            pop();
            break;

        case 3:
            display();
            break;

        case 4:
            printf("exit!!");
            return 0;

        default:
            printf("envalid choice!!\n");
        }
    }
    return 0;
}
