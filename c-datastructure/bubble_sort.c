#include<stdio.h>
int main()
{
    int n,i,j,temp;
    printf("enter array size\n");
    scanf("%d",&n);
    
    int a[n];

    printf("enter array numbers\n");

    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=n;i>0;i--)
    {
        for(j=0;j<i-1;j++)
        {
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;

            }
        }
    }
    printf("sorted array\n");
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}