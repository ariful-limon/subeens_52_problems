#include<stdio.h>
#include<string.h>

int length(char n[])
{
    int i;
    for(i=0; n[i] != '\0'; i++){

    };

    return i;
}


int main()
{
    int t,i,m;
    char ch[101];

    scanf("%d", &t);

    for(i=1; i<=t; i++)
    {
        scanf("%s", &ch);
        m = ch[length(ch)-1] - '0';

        if(m%2 == 0){
            printf("even\n");
        }
        else{
            printf("odd\n");
        }


    }
    return 0;

}
