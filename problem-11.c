#include<stdio.h>

long long fact (int n)
{
    if(n <= 1){
        return n;
    }
    else{
        return n*fact(n-1);
    }
}

int main()
{
    int t,i;
    int n;
    long long s;
    scanf("%d", &t);

    for(i=0; i<t; i++){
        scanf("%d", &n);

        s = fact(n);
        printf("%lld\n" ,s);
    }
    return 0;
}
