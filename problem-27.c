#include<stdio.h>
int main()
{
    int i,t,n,r,temp;
    scanf("%d", &t);

    for(i=0; i<t; i++)
    {
        scanf("%d", &n);
        temp = n;
        int sum = 0;

        while(temp != 0)
        {
            r = temp % 10;
            sum = sum + (r*r*r);
            temp = temp/10;
        }
printf("%d\n",sum);
        if (n == sum){
            printf("%d is an armstrong number!\n",n);
        }
        else{
            printf("%d is not an armstrong number!\n",n);
        }
    }
    return 0;
}
