Write a program that will take one string as input. The program will then remove vowels a, e, i, o, and u (in lower or upper case ) from the string. If there are two or more vowels occur that string then remove first vowel only. 
Example 1 
Input: Cat 
Output: Ct 
Example 2 
Input: Compuuter 
Output:Cmpuuter


#include<stdio.h>
int main()
{
    char a[100];
    scanf("%[^\n]s",a);
    int flag=0;
    for(int i=0;a[i];i++)
    {
        if((a[i]=='a' || a[i]=='e' || a[i]=='i' || a[i]=='o' || a[i]=='u' || a[i]=='A' || a[i]=='E' || a[i]=='I' || a[i]=='O' || a[i]=='U') && (flag==0))
        {
            printf("%c",a[i+1]);
            flag=1;
            i++;
        }
        else
        {
            printf("%c",a[i]);
        }
    }
}