#include<stdio.h>

int main()
{
    int t,i,j;
    int n;
    scanf("%d", &t);

    for(i=0; i<t; i++){
        scanf("%d", &n);

        long long int fact = 1;
        for(j=2; j<=n; j++){
            fact = fact * j;
        }

        printf("%lld\n" ,fact);
    }
    return 0;
}
