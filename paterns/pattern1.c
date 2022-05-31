#include<stdio.h>
int main(){
int i,j,n;
int k=0,space;
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
return 0;
}