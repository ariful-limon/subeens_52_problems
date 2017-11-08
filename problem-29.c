#include<stdio.h>
int main()
{
    int i,t;
    scanf("%d", &t);

    for(i=0; i<t; i++)
    {
        char ch;
        getchar();
        scanf("%c", &ch);

        if(ch >= 'A' && ch<= 'Z'){
            printf("Uppercase Character\n");
        }
        else if(ch >= 'a' && ch<= 'z'){
            printf("Lowercase Character\n");
        }
        else if(ch >= '0' && ch<= '9'){
            printf("Numerical Digit\n");
        }
        else{
            printf("Special Character\n");
        }
    }
    return 0;
}
