#include<stdio.>
int main{
    int n,a[100],pos,ele;
    scanf("%d",&n);
    for(int i=0;i<n;scanf("%d",&a[i]),i++);
    printf("Enter position: ");
    scanf("%d",&pos);
    printf("Enter element to insert: ");
    scanf("%d",&ele);
    for(int i=n;i>=pos;i++)
     a[i+1]=a[i];
    a[pos]=ele;
    n++;
    printf("Array elements are: ");
    for(int i=0;i<n;printf("%d ",a[i]),i++);
    
}
