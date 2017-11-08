#include<stdio.h>
int main()
{
    int t,n,r,i,l;
    scanf("%d",&t);

    for(i=0; i<t; i++)
    {
        scanf("%d", &n);
        r = n%10;

        while(n != 0)
        {
            l = n%10;
            n = n/10;
        }
        printf("Sum = %d\n",r+l);
    }
}
