#include<stdio.h>
int main()
{
    int i,t;
    scanf("%d", &t);

    for(i=0; i<t; i++)
    {
        int n;
        scanf("%d", &n);

        int arr[n],j,k;

        for(j=0; j<n; j++){
            scanf("%d", &arr[j]);
        }

        int assend=0, desend=0;

        for(k=0; k<n-1; k++)
        {

            if(arr[k] < arr[k+1]){
               assend++;
            }

            else if(arr[k] > arr[k+1]){
               desend++;
            }
        }

        if(assend == 0 || desend == 0){
            printf("YES\n");
        }
        else{
            printf("NO\n");
        }
    }
    return 0;
}
