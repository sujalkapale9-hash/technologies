#include <stdio.h>

void merge(int *arr, int *leftarray, int ls, int *rightarray, int rs)
{
    int i = 0, j = 0, k = 0;

    while (i < ls && j < rs)
    {
        if (leftarray[i] <= rightarray[j])
        {
            arr[k] = leftarray[i];
            i++;
        }
        else
        {
            arr[k] = rightarray[j];
            j++;
        }
        k++;
    }
    while (i < ls)
    {
        arr[k] = leftarray[i];
        i++;
        k++;
    }
    while (j < rs)
    {
        arr[k] = rightarray[j];
        j++;
        k++;
    }
}
void mergesort(int *arr, int n)
{
    if (n < 2)
        return;

    int ls = n / 2;
    int rs = n - ls;

    int leftarray[ls], rightarray[rs], i;

    for (i = 0; i < ls; i++)
        leftarray[i] = arr[i];

    for (i = ls; i < n; i++)
        rightarray[i - ls] = arr[i];

    mergesort(leftarray, ls);
    mergesort(rightarray, rs);
    merge(arr, leftarray, ls, rightarray, rs);
}
int main()
{
    int i, size;

    printf("enter array size :\n");
    scanf("%d", &size);

    int a[size];

    printf("enter array number :\n");
    for (i = 0; i < size; i++)
    {
        scanf("%d", &a[i]);
    }

    mergesort(a, size);

    for (i = 0; i < size; i++)
    {
        printf("%d ", a[i]);
    }
    return 0;
}
