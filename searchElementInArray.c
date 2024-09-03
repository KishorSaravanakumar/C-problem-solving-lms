#include<stdio.h>
int main()
{
    int n;
    int a[100];
    printf("Enter array size: ");
    scanf("%d",&n);
    int k,f=0;
    printf("Enter array elements: ");
    for(int i=0;i<n;i++)
    scanf("%d",&a[i]);
    printf("Enter element to search: ");
    scanf("%d",&k);
    for(int i=0;i<n;i++)
    {
        if(a[i]==k)
        {
            f++;
            printf("%d found at position %d",k,i+1);
            break;
        }
    }
    if(f==0)
    printf("%d not found",k);
    return 0;
}