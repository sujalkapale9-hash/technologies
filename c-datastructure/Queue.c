#include <stdio.h>

#define MAX_SIZE 3
int queue[MAX_SIZE];
int rear = -1, front = -1;

int main()
{
    int choice, item;

    printf("1.enqueue\n 2.dequeue\n 3.dispaly\n 4.exit\n");

    while (1)
    {

        printf("enter your choice number :\n");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            if (rear == MAX_SIZE - 1)
            {
                printf("overflow & exit\n");
            }
            else
            {
                printf("enter a element :\n");
                scanf("%d", &item);

                if (front == -1)
                {
                    front = rear = 0;
                }
                else
                {
                    rear++;
                }
                queue[rear] = item;
                printf("item inserted\n");
            }
            break;
        case 2:
            if (front == -1)
            {
                printf("underflow & exit\n");
            }
            else
            {
                item = queue[front];

                if (front == rear)
                {
                    front = rear = -1;
                }
                else
                {
                    front++;
                }
                printf("item deleted\n");
            }
            break;
        case 3:
            if (front == -1)
            {
                printf("queue is empty\n");
            }
            else
            {
                for (int i = front; i <= rear; i++)
                {
                    printf("%d ", queue[i]);
                }
                printf("\n");
            }
            break;

        case 4:
            printf("exit\n");
            return 0;

        default:
            printf("invalid choice\n");
        }
    }
}
