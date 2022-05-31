#include<stdio.h>

int main()
{
    int n,i,j,k;
    scanf("%d", &n);
    for(i=1;i<(2*n);i++)
    {
        k=n;
        if(i<=n)
        {
            for(j=1;j<2*n;j++)
            {
                printf("%d", k);
                if(i>j)
                k=k-1;
                if(i+j>=2*n)
                k=k+1;
            }
        }
        if(i>n)
        {
            for(j=1;j<2*n;j++)
            {
                printf("%d", k);
                if(i+j<2*n)
                k=k-1;
                if(j>=i)
                k=k+1;
            }
        }
        printf("\n");
    }

    return 0;
}