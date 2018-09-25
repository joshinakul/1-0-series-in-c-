#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,a=0;
    printf("upto how many terms u want to print\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
       a=1-a;

    printf("%d\t",a); }
    return 0;
}
