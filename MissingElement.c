#include<stdio.h>
void missingElement(int a[],int n)
{
    int i,b[n+1];
    for(i=1;i<=n+1;i++)
    {
        b[i]=0;
    }
    for(i=0;i<n;i++)
    {
        int y=a[i];
        b[y]++;
    }
    for(i=1;i<=n+1;i++)
    {
        if(b[i]==0)
        printf("%d",i);
    }
}
int main()
{
    int n;
    scanf("%d",&n);
    int a[n-1];
    for(int i=0;i<n-1;i++)
    scanf("%d",&a[i]);
    missingElement(a,n-1);
    return 0;
}