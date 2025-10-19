// #include<stdio.h>
// int main()
// {
//     int lr=0,up=4,item,f=0,mid;
//     int a[5]={12,14,23,54,65};

//     printf("enter a searching element :\n");
//     scanf("%d",&item);

//     while(lr<=up)
//     {
//         mid=(lr+up)/2;
//         if(a[mid]==item)
//         {
//             f=1;
//             break;
//         }
//         if(a[mid]<item)
//         {
//             lr=mid+1;
//         }
//         else
//         {
//             up=mid-1;
//         }
//     }
//     if(f==1)
//     {
//         printf("item found at %d",mid);
//     }
//     else{
//         printf("item not found");
//     }
//     return 0;
// }

#include <stdio.h>

int main()
{
    int n, i, item, f = 0, lr, up, mid;

    printf("Enter size of array: ");
    scanf("%d", &n);

    int a[n];

    printf("Enter %d elements in sorted order:\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Enter element to search: ");
    scanf("%d", &item);

    lr = 0;
    up = n - 1;

    while (lr <= up)
    {
        mid = (lr + up) / 2;

        if (a[mid] == item) 
        {
            f = 1;
            break;
        }
        else if (a[mid] < item)
        {
            lr = mid + 1;
        }
        else 
        {
            up = mid - 1;
        }
    }

    if (f == 1)
        printf("Item found at position %d\n", mid + 1);
    else
        printf("Item not found\n");

    return 0;
}
