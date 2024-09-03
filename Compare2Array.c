Given two arrays A and B of equal size N, the task is to find if given arrays are equal or not. Two arrays are said to be equal if both of them contain same set of elements, arrangements (or permutation) of elements may be different though.
Note : If there are repetitions, then counts of repeated elements must also be same for two array to be equal.

Example 1:

Input:
N = 5
A[] = {1 2 5 4 0}
B[] = {2 4 5 0 1}
Output: 1

Example 2:

Input:
N = 3
A[] = {1 2 5}
B[] = {2 4 15}
Output: 0


PROGRAM

#include<stdio.h>
void compare(int a[],int b[],int n)
{
    int f=1;
    for(int i=0;i<n;i++)
    {
        if(a[i]!=b[i])
        {
            f--;break;
        }
    }
    if(f)
    printf("%d",f);
    else
    printf("%d",f);
}
void sort(int a[],int b[],int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
                int t=a[i];
                a[i]=a[j];
                a[j]=t;
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(b[i]>b[j])
            {
                int t=b[i];
                b[i]=b[j];
                b[j]=t;
            }
        }
    }
     
}

int main()
{
    int n;
    scanf("%d",&n);
    int a[n],b[n];
    for(int i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(int i=0;i<n;i++)
    scanf("%d",&b[i]);
    sort(a,b,n);
    compare(a,b,n);
}