#include<stdio.h>
#include<stdlib.h>

// int main()
// {
//     int *p1,*p2,result;

//     p1=(int *)malloc(sizeof(int));
//     printf("enter a number :\n");
//     scanf("%d",p1);

//     p2=(int *)malloc(sizeof(int));
//     printf("enter a number :\n");
//     scanf("%d",p2);

//     result=*p1+*p2;
//     printf("the addition is : %d",result);

//     return 0;
// }

int main()
{
    int *p1,*p2,result;

    p1=(int *)calloc(1,sizeof(int));
    p2=(int *)calloc(1,sizeof(int));

    printf("enter first number :\n");
    scanf("%d",p1);

    printf("enter second number :\n");
    scanf("%d",p2);

    result=*p1+*p2;
    printf("addition is : %d",result);

    return 0;
}