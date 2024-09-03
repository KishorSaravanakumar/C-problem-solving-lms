#include<stdio.h>
int main(){
    int n;
    int f=0;
    printf("Enter the number:");
    scanf("%d",&n);
    while(n!=0)
    {
        int x=n%10;
        if(x!=0 && x!=1)
        {
            f=1;
            break;
        }
        n=n/10;
    }
    if(f)
    printf("Number is not binary");
    else
    printf("Number is binary");
    return 0;
    
}