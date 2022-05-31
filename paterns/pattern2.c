#include<stdio.h>

int main()
{
    int n,k;
    int i=0,j;
    scanf("%d", &n);
    k =(n*(n+1)/2)-1;
    for(i;i<n;i++)
    {
        for(int space=0;space<n-(i+1);space++)
        {
            printf(" ");
        }
        for(j=0;j<=i;j++)
        {
            printf("%d", k);
            k--;
        }
        printf("\n");

    }
    return 0;

}
