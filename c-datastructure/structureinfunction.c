// #include <stdio.h>

// struct Student {
//     int id;
//     char name[20];
//     float marks;
// };

// // Function that takes structure by value
// void display(struct Student s) {
//     printf("ID: %d\n", s.id);
//     printf("Name: %s\n", s.name);
//     printf("Marks: %.2f\n", s.marks);
// }

// // Function that takes structure by pointer
// void updateMarks(struct Student *s, float newMarks) {
//     s->marks = newMarks;
// }

// int main() {
//     struct Student s1 = {1, "Rahul", 85.5};
//     struct Student s2 = {2, "Priya", 90.0};

//     printf("Before update:\n");
//     display(s1);
//     display(s2);

//     // Update marks using pointer
//     updateMarks(&s1, 95.0);
//     updateMarks(&s2, 92.5);

//     printf("\nAfter update:\n");
//     display(s1);
//     display(s2);

//     return 0;
// }
#include <stdio.h>
struct Employee
{
    int EmpNo;
    char Name[50];
    float Salary;
};

void DisplayEmployee(int, struct Employee[]);

int main()
{
    struct Employee e[4];
    int i, pos = 0;
    float large;

    for (i = 0; i < 4; i++)   
    {
        printf("\nENTER INFORMATION FOR EMPLOYEE %d - - -", i + 1);
        printf("\nEMPLOYEE NUMBER : ");
        scanf("%d", &e[i].EmpNo);
        printf("\nNAME : ");
        scanf("%s", e[i].Name);
        printf("\nSALARY : ");
        scanf("%f", &e[i].Salary);
    }

    large = e[0].Salary;
    for (i = 1; i < 4; i++)
    {
        if (large < e[i].Salary)
        {
            large = e[i].Salary;
            pos = i;
        }
    }

    printf("\n\t Employee with Highest Salary:\n");
    DisplayEmployee(pos, e);

    return 0;
}

void DisplayEmployee(int p, struct Employee emp[])
{
    printf("\n\t ------- EMPLOYEE DETAILS ARE --------");
    printf("\n\t EMPLOYEE NUMBER : %d", emp[p].EmpNo);
    printf("\n\t NAME : %s", emp[p].Name);
    printf("\n\t SALARY : %.2f", emp[p].Salary);
}

