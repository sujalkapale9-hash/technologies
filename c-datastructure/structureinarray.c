#include <stdio.h>
struct employee
{
    int id;
    float salary;
    char name[30];
};

int main()
{
    struct employee emp[3];
    int i;

    printf("enter a deatail of employee");

    for (i = 0; i < 3; i++)
    {
        printf("employee %d\n", i + 1);

        printf("id:\n");
        scanf("%d", &emp[i].id);

        printf("name:\n");
        scanf("%s", emp[i].name);

        printf("salary:\n");
        scanf("%f", &emp[i].salary);
    }

    printf("employee details:\n");
    for (i = 0; i < 3; i++)
    {

        printf("employee %d\n", i + 1);
        printf("id : %d\n", emp[i].id);
        printf("name : %s\n", emp[i].name);
        printf("salary : %.2f\n", emp[i].salary);
    }
    return 0;
}
