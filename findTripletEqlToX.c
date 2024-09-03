Given an array arr of size n and an integer X. Find if there's a triplet in the array which sums up to the given integer X.
Example 1:
Input:
n = 6, X = 13
arr[] = [1 4 45 6 10 8]
Output:
1
Explanation:
The triplet {1, 4, 8} in 
the array sums up to 13.

Example 2:
Input:
n = 5, X = 10
arr[] = [1 2 4 3 6]
Output:
1
Explanation:
The triplet {1, 3, 6} in 
the array sums up to 10.


#include<stdio.h>
void findThreeNumbers(int a[],int n,int x)
{
    int f=0;
    for(int i=0;i<n-2;i++)
    {
        for(int j=i+1;j<n-1;j++)
        {
            for(int k=j+1;k<n;k++)
            {
                if(a[i]+a[j]+a[k]==x)
                {
                    f=1;
                    break;
                }        
                
            }
        }
    }
    if(f)
    printf("%d",f);
    else
    printf("%d",f);
    
}
int main()
{
    int n,x;
    scanf("%d%d",&n,&x);
    int a[n];
    for(int i=0;i<n;i++)
    scanf("%d",&a[i]);
    findThreeNumbers(a,n,x);
    
}