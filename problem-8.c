#include<stdio.h>

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int t, n1,n2, n3,kase;

    scanf("%d", &t);

    for(kase=1; kase<=t; kase++)
    {
        scanf("%d %d %d", &n1,&n2, &n3);

        if(n1 > n2){
            swap (&n1, &n2);
        }
        if(n1 > n3){
            swap (&n1, &n3);
        }
        if(n2 > n3){
            swap (&n2, &n3);
        }
        printf("Case %d: %d %d %d\n",kase,n1,n2,n3);
    }

    return 0;
}
