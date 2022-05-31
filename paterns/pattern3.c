#include<stdio.h>
int main()
{
int i=0,j,k=0;
int n;

scanf("%d", &n);
for(i;i<n;i++)
{   
    for(int space=0;space<n-(i+1);space++)
    {
        printf(" ");
    }
        for(j=0;j<(2*i+1);j++)
        {
            printf("*");
        }
    printf("\n");
}
int s=0;
int num;
if (n%2==0)
{
     num=n+1;
}
else
num=n;

for(s;s<n;s++)
{
    for(int space=0;space<s+1;space++)
    {
        printf(" ");
    }
    for(int g=0;g<num;g++)
    {
        printf("*");
        
    }
    printf("\n");
    num = num-2;
}
return 0;
}