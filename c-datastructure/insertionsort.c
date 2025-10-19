#include<stdio.h>

int main()
{
    int i,j,temp,n;

    printf("enter array size :\n");
    scanf("%d",&n);

    int a[n];
    printf("enter array numbres :\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    
    for(i=1;i<n;i++)
    {
        for(j=i;j>=1;j--)
        {
            if(a[j-1]>a[j])
            {
                temp=a[j-1];
                a[j-1]=a[j];
                a[j]=temp;
            }
        }
    }
    printf("sorted array :\n");
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}