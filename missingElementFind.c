Given an unsorted array arr[] with both positive and negative elements, the task is to find the smallest positive number missing from the array.

Examples:
Input:  arr[] = {2, 3, 7, 6, 8, -1, -10, 15}
Output: 1

#include<stdio.h>
 
int main()
{
    int a[100],f,i;
    f=scanf("%d",&a[0]);
    for(i=1;f==1;i++)
    f=scanf("%d",&a[i]);
    int m=a[0];
    for(int j=1;j<i;j++)
    {
        if(a[j]>m)
        m=a[j];
    }
    int b[m+1];
    for(int j=0;j<=m+1;j++)
    b[j]=0;
    for(int j=0;j<i;j++)
    {
        if(a[j]>0)
        b[a[j]]++;
    }
    for(int j=0;j<=m+1;j++)
    {
        if(b[j]==0)
        {
            printf("%d",j);break;
        }
    }
}