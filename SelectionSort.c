#include <stdio.h>
#include <stdlib.h>
void print_arr(int[], int);
void select_sort(int[], int);
int main()
{
    int a[10], i, size;
    printf("\nEnter the size of array       :");
    scanf("%d",&size);
    printf("\nEnter the elements of array   : ");
    for(i = 0;i < size;i++)
    {
        printf("\nEnter %d element : ",i+1);
        scanf("%d",&a[i]);
    }
    printf("\nElements before sorting\t:");
    print_arr(a,size);
    select_sort(a,size);
    printf("\nElements after sorting\t:");
    print_arr(a,size);
    return 0;
}
void print_arr(int a[],int n)
{
    int i;
    for(i = 0;i < n;i++)
    {
        printf("%d\t",a[i]);
    }
}

void select_sort(int a[], int n)
{
    int i,temp,j,min;
    for(i=0;i<n-1;i++)
    {
        min= i;
        for(j = i+1; j <= n-1;j++)
        {
            if(a[j]<a[min])
            {
                min = j;
            }
        }
        if(min!=i)
        {
            temp = a[i];
            a[i] = a[min];
            a[min]=temp;
        }
    }
}
