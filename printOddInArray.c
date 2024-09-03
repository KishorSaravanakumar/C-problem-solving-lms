#include<stdio.h>
void main()
{
    int i=0,a[20],c;
    while(1)
    {
        c=scanf("%d",&a[i]);
        if(c!=1)
        break;
        if(a[i]%2!=0)
        printf("%d\n",a[i]);
        i++;
        
    }
}