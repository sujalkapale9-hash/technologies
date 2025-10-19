#include <stdio.h>
#include <stdlib.h>

// int main()
// {
//     int item,i=0;
//     int a[5]={12,43,54,57,49};
//     printf("enter searching item :\n");
//     scanf("%d",&item);

//     while(i<5)
//     {
//         if(a[i]==item)
//         {
//             printf("item found at %d",i);
//             exit(0);
//         }
//         ++i;
//     }
//     if(i>=5)
//     {
//         printf("item not found");
//         exit(0);
//     }
//     return 0;
// }

int main()
{
    int n, i, item;

    printf("enter array size:\n");
    scanf("%d", &n);

    int a[n];

    printf("enter array elements :\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("enter searching item :\n");
    scanf("%d", &item);

    for (i = 0; i < n; i++)
    {
        if (a[i] == item)
        {
            printf("item found at %d", i + 1);
            return 0;
        }
    }
    printf("item not found");

    return 0;
}
