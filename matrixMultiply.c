#include<stdio.h>
#include<math.h>
void main()
{
    int a[3][3],b[3][3],mul[3][3];
    for(int i=0;i<3;i++)
    for(int j=0;j<3;scanf("%d",&a[i][j]),j++);
    for(int i=0;i<3;i++)
    for(int j=0;j<3;scanf("%d",&b[i][j]),j++);
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            mul[i][j]=0;
            for(int k=0;k<3;k++)
            mul[i][j]+=a[i][k]*b[k][j];
        }
    }
    for(int i=0;i<3;printf("\n"),i++)
    for(int j=0;j<3;printf("%d ",mul[i][j]),j++);
}