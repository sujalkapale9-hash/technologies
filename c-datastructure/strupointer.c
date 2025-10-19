#include <stdio.h>
#include <string.h>

struct Student {
    int id;
    char name[20];
    float marks;
};

int main() {

    struct Student s1;

    struct Student *ptr;

    ptr = &s1;
    int i;

    for(i=0;i<3;i++)
    {
    printf("enter a student deatails %d\n",i);

    printf("Enter Student ID: ");
    scanf("%d", &ptr->id);

    printf("Enter Student Name: ");
    scanf("%s", ptr->name);

    printf("Enter Marks: ");
    scanf("%f", &ptr->marks);

    }
    

    printf("\n--- Student Details ---\n");
    for(i=0;i<3;i++){
    printf("\nStudent deatail %d",i);
    printf("ID: %d\n", ptr->id);
    printf("Name: %s\n", ptr->name);
    printf("Marks: %.2f\n", ptr->marks);

    }
    return 0;
}
