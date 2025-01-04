#include <stdio.h>
int main()
{
    int n,rem=0,rev=0;
    printf("enter the num:");
    scanf("%d",&n);
    while(n>0)
    {
        rem =n%10;
        n =n/10;
        rev =rev*10+rem;

    }

    printf("rev of the num is %d",rev);

    return 0;

}