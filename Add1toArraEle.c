Write a code to add one to the number.

Each element in the array contain a single digit. You may assume the integer does not contain any leading zero, except the number 0 itself.

Example 1 –

Input:  [1, 3, 4]

Output: [1, 3, 5]

In this example, the array represents the number 134. When we add 1 to it, the new number is 135.

Example 2 –

Input : [1, 2, 9]

Output: [1, 3, 0]

The number is 129. When we add 1 to 129. The new number is 130.


program:
#include<stdio.h>
int main()
{
    int a[100],i=0,f,sum=0;
    f=scanf("%d",&a[0]);
    for(i=1;f==1;i++)
    f=scanf("%d",&a[i]);
    int n=i-1;
    for(i=0;i<n;i++)
    {
        sum=(sum*10)+a[i];
    }
    sum=sum+1;
    for(i=n-1;i>=0;i--)
    {
        int x=sum%10;
        a[i]=x;
        sum=sum/10;
    }
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
}