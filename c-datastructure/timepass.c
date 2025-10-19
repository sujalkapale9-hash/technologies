#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/*
int main()
{
    int n;
    printf("enter a number for table\n");
    scanf("%d",&n);

    for(int i=1;i<=10;i++)
    {

        printf("%d\n",i*n);
    }
    return 0;
}



int main()
{
    int n,i,j,temp;
    printf("enter array size :\n");
    scanf("%d",&n);

    int a[n];
    printf("enter array numbre you want a sort :\n");
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
    printf("sorted array:\n");
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}


int main()
{
    int n,n1,sum,min;

    printf("enter a numbre :");
    scanf("%d%d",&n,&n1);

    sum=n1+n;

    printf("sum is %d+%d=%d",n1,n,sum);

    min=n1-n;
    printf("\nmin is %d-%d=%d",n1,n,min);
    return 0;
}


int main()
{
    int n,i,j,temp;

    printf("enter a array size :");
    scanf("%d",&n);

    int a[n];
    printf("enter a sorting elements :\n");
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
    printf("sorted array :\n");
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}

*/
// struct student{
//     int id;
//     char name[50];
//     float marks;
// };

// int main()
// {
//     struct student s1;

//     struct student *ptr;

//     ptr=&s1;

//     printf("enter id :\n");
//     scanf("%d",&ptr->id);

//     printf("enter name :\n");
//     scanf("%s",ptr->name);

//     printf("enter marks :\n");
//     scanf("%f",&ptr->marks);

//     printf("---student details---\n");

//     printf("id : %d\n",ptr->id);
//     printf("name : %s\n",ptr->name);
//     printf("marks : %f\n",ptr->marks);

//     return 0;
// }

// int main()
// {
//     int n,i;

//     printf("enter array size :\n");
//     scanf("%d",&n);

//     int a[n];

//     printf("enter a %d elements :",n);

//     for(i=0;i<n;i++)
//     {
//         scanf("%d",&a[i]);
//     }
//     printf("you entered :\n");

//     for(i=0;i<n;i++)
//     {
//         printf("%d ",a[i]);
//     }
//     return 0;
// }

// #include<stdio.h>
// #define MAX_SIZE 5
// int stack[MAX_SIZE];
// int top = -1;

// void push(int item)
// {
//     if(top == MAX_SIZE -1)
//     {
//         printf("overflow!! & exit\n");
//     }
//     else{
//         stack[++top]=item;
//         printf("%d item inserted\n",item);
//     }
// }
// void pop()
// {
//     if(top == -1)
//     {
//         printf("uderflow & exit\n");
//     }
//     else
//     {
//         int item = stack[top--];
//         printf("%d item deleted\n",item);

//     }
// }
// void display()
// {
//     if(top == -1)
//     {
//         printf("stack is empty\n");
//     }
//     else
//     {
//         printf("stack elements :\n");
//         for(int i = 0;i <= top; i++)
//         {
//             printf("%d",stack[i]);
//         }
//         printf("\n");
//     }
// }
// int main()
// {
//     int choice,item;

//     printf("1.push\n 2.pop\n 3.display\n 4.exit\n");

//     while(1)
//     {
//         printf("enter your choice number :\n");
//         scanf("%d ",&choice);

//         switch(choice)
//         {
//             case 1:
//             printf("enter value to push :\n");
//             scanf("%d ",&item);
//             push(item);
//             break;

//             case 2:
//             pop();
//             break;

//             case 3:
//             display();
//             break;

//             case 4:
//             return 0;

//             default:
//             printf("unvalid choice\n");
//         }
//     }
//     return 0;
// }


// -----------------------------------LINEAR SEARCH-----------------------------------------
// int main()
// {
//     int n, item, i;

//     printf("enter array size :\n");
//     scanf("%d", &n);

//     int a[n];

//     printf("enter array number :\n");
//     for (i = 0; i < n; i++)
//     {
//         scanf("%d", &a[i]);
//     }

//     printf("enter searching item :\n");
//     scanf("%d", &item);

//     for (i = 0; i < n; i++)
//     {

//         while (a[i] == item)
//         {

//             printf("item found at position %d", i + 1);
//             return 0;
//         }
//         printf("item not found");
//     }
//     return 0;
// }

//---------------------------------------BINARY SEARCH------------------------------------------------
// int main()
// {
//     int i,n,mid,lr,up,f=0,item;

//     printf("enter array size :\n");
//     scanf("%d",&n);

//     int a[n];

//     printf("enter sorted array numbers :\n");
//     for(i=0;i<n;i++)
//     {
//         scanf("%d",&a[i]);
//     }

//     printf("enter searching item :\n");
//     scanf("%d",&item);
    
//     lr=0;
//     up=n-1;

//     while(lr<=up)
//     {
//         mid=(lr+up)/2;

//         if(a[mid]==item)
//         {
//             f=1;
//             break;
//         }
//         else if(a[mid]<item)
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
//         printf("item found at position %d",mid+1);
//     }
//     else
//     {
//         printf("item not found");
//     }
//     return 0;

// }

//----------------------------------BUBBLE SORT--------------------------------------

// int main()
// {
//     int i,j,n,temp;

//     printf("enter array size :\n");
//     scanf("%d",&n);

//     int a[n];

//     printf("enter array numbers :\n");

//     for(i=0;i<n;i++)
//     {
//         scanf("%d",&a[i]);
//     }

//     for(i=n;i>0;i--)
//     {
//         for(j=0;j<i-1;j++)
//         {
//             if(a[j]>a[j+1])
//             {
//                 temp=a[j];
//                 a[j]=a[j+1];
//                 a[j+1]=temp;
//             }
//         }
//     }
//     printf("sorted array :\n");
//     for(i=0;i<n;i++)
//     {
//         printf("%d ",a[i]);
//     }
//     return 0;
// }

//-------------------------------------INSERTION SORT-----------------------------------------

// int main()
// {
//     int i,j,temp,n;

//     printf("enter array size :\n");
//     scanf("%d",&n);

//     int a[n];

//     printf("enter array numbers :\n");

//     for(i=0;i<n;i++)
//     {
//         scanf("%d",&a[i]);
//     }

//     for(i=1;i<n;i++)
//     {
//         for(j=i;j>=1;j--)
//         {
//             if(a[j-1]>a[j])
//             {
//                 temp=a[j-1];
//                 a[j-1]=a[j];
//                 a[j]=temp;
//             }
//         }
//     }
//     printf("sorted array :\n");
//     for(i=0;i<n;i++)
//     {
//         printf("%d ",a[i]);
//     }
//     return 0;
// }

//------------------------------------------SELECTION SORT--------------------------------------------

// int main()
// {
//     int n,i,j,temp,m,loc;

//     printf("enter array size :\n");
//     scanf("%d",&n);

//     int a[n];

//     printf("enter array numbers :\n");

//     for(i=0;i<n;i++)
//     {
//         scanf("%d",&a[i]);
//     }
    
//     for(i=0;i<n-1;i++)
//     {
//         m=a[i];
//         loc=i+1;

//         for(j=i+1;j<n;j++)
//         {
//             if(m>a[j])
//             {
//                 m=a[j];
//                 loc=j;
//             }
//         }
//         if(a[loc]<a[i])
//         {
//             temp=a[loc];
//             a[loc]=a[i];
//             a[i]=temp;
//         }
//     }
//     printf("sorted array :\n");
//     for(i=0;i<n;i++)
//     {
//         printf("%d ",a[i]);
//     }
//     return 0;
// }


// #include<stdio.h>

// struct sub
// {
//     int m,e,m1,m2,m3;
//     int sum;
//     float per;
// }s;

// int main()
// {
//     printf("enter marathi marks:\n");
//     scanf("%d",&s.m);

//      printf("enter english marks:\n");
//     scanf("%d",&s.e);

//      printf("enter maths1 marks:\n");
//     scanf("%d",&s.m1);

//      printf("enter maths2 marks:\n");
//     scanf("%d",&s.m2);

//      printf("enter maths3 marks:\n");
//     scanf("%d",&s.m3);

//     printf("all subject total marks:\n");
//     s.sum=s.m+s.e+s.m1+s.m2+s.m3;

//     printf("total=%d\n",s.sum);

//     s.per=(s.sum/500)*100;

//     printf("persentage=%.1f",s.per);




//     return 0;
// }

//---------------------------------------------QUICK SORT-----------------------------------------------

// #include<stdio.h>

// void quicksort(int a[],int low,int high)
// {
//     if(low<high)
//     {
//         int pivot=a[high];
//         int i=low-1,temp;
        
//         for(int j=low;j<=high-1;j++)
//         {
//             if(a[j]<pivot)
//             {
//                 temp=a[i];
//                 a[i]=a[j];
//                 a[j]=temp;
//             }
//         }
//         temp=a[i+1];
//         a[i+1]=a[high];
//         a[high]=temp;
//         quicksort(a,low,i);
//         quicksort(a,i+2,high);
//     }
// }
// int main()
// {
//     int n,i,j,temp,low,high,pivot;
    
//     printf("enter array size:\n");
//     scanf("%d",&n);
    
//     int a[n];
    
//     printf("enter array elements :\n");
//     for(i=0;i<n;i++)
//     {
//         scanf("%d",&a[i]);
//     }
//     quicksort(a,0,n-1);
    
//     printf("sorted array:\n");
//     for(i=0;i<n;i++)
//     {
//         printf("%d ",a[i]);
//     }
//     return 0;
// }

//--------------------------------------QUEUE   -------------------------------------------------------


// #include<stdio.h>
// #define MAX_SIZE 5

// int queue[MAX_SIZE];
// int rear=-1,front=-1;

// int main()
// {
//     int choice,item;

//     printf("1.enqueue\n 2.dequeue\n 3.display\n 4.exit\n");

//     while(1)
//     {
//         printf("enter your choice:\n");
//         scanf("%d",&choice);

//         switch(choice)
//         {
//             case 1:
//             if(rear==MAX_SIZE-1)
//             {
//                 printf("overflow or exit\n");
//             }
//             else
//             {
//                 printf("enter queue elements:\n");
//                 scanf("%d",&item);

//                 if(front==-1)
//                 {
//                     front=rear=0;
//                 }
//                 else{
//                     rear++;
//                 }
//                 queue[rear]=item;
//                 printf("%d item inserted\n",item);
//             }
//             break;

//             case 2:
//             if(front==-1)
//             {
//                 printf("underflow or exit\n");
//             }
//             else
//             {
//                 item=queue[front];

//                 if(front==rear)
//                 {
//                     front=rear=-1;
//                 }
//                 else
//                 {
//                     front++;
//                 }
//                 printf("%d item deleted\n",item);
//             }
//             break;

//             case 3:
//             if(front==-1)
//             {
//                 printf("queue is empty\n");
//             }
//             else
//             {
//                 printf("queue elements:\n");
//                 for(int i=front;i<=rear;i++)
//                 {
//                     printf("%d ",queue[i]);
//                 }
//                 printf("\n");
//             }
//             break;

//             case 4:
//             printf("exit\n");
//             return 0;

//             default:
//             printf("envalid choice");
//         }
//     }
// }
//--------------------------------------------------------------------------------------------------------


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
    int n,i,temp;

    printf("enter array size:\n");
    scanf("%d",&n);

    int a[n];

    printf("enter array elements:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    quicksort(a,0,n-1);

    printf("sorted array :\n");

    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }

    return 0;
}

