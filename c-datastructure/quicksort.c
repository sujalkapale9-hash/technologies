#include<stdio.h>

void quicksort(int a[],int low,int high)
{
    if(low<high)
    {
        int pivot=a[high];
        int i=low-1,temp;
        
        for(int j=low;j<=high-1;j++)
        {
            if(a[j]<pivot)
            {
                ++i;
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
        temp=a[i+1];
        a[i+1]=a[high];
        a[high]=temp;
        quicksort(a,low,i);
        quicksort(a,i+2,high);
    }
}
int main()
{
    int n,i,j,temp,low,high,pivot;

    printf("enter array size:\n");
    scanf("%d",&n);

    int a[n];

    printf("enter array elements :\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    quicksort(a,0,n-1);

    printf("sorted array:\n");
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}