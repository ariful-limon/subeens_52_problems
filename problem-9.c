#include<stdio.h>
#include<math.h>

int main()
{
    int t, n,i, sq_root;

    scanf("%d", &t);

    for(i=1; i<=t; i++)
    {
       scanf("%d", &n);
       sq_root = sqrt(n);

       if(sq_root*sq_root == n){
        printf("YES\n");
       }

       else{
        printf("NO\n");
       }

    }

    return 0;
}

