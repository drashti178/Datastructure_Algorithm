#include<stdio.h>
int main(){
int i,j,n;
int k=0,space;

    int p=0,r;
    
scanf("%d", &n);

for(i=0;i<n;i++)
{
    for(space=0;space<i;space++)
    {
        printf(" ");
    }
    for(j=0;j<n-i;j++)
    {
    printf("%d",k);
    k++;
    }
    printf("\n");
}

    
    k =(n*(n+1)/2)-1;
    for(p;p<n;p++)
    {
        for(int space=0;space<n-(p+1);space++)
        {
            printf(" ");
        }
        for(r=0;r<=p;r++)
        {
            printf("%d", k);
            k--;
        }
        printf("\n");

    }
return 0;
}