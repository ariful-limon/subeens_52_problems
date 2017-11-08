#include<stdio.h>
int main()
{
    int t,n,i,j,k;

    scanf("%d", &t);

    for(i=1; i<=t; i++)
    {
        scanf("%d", &n);
        for(k=1; k<=n; k++){
            for(j=1; j<=n; j++ )
            {
                printf("*");
            }
            printf("\n");
        }
        //printf("\n");
    }


    return 0;
}
