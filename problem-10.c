#include<stdio.h>
int main()
{
    int t, i, enr, myr, ba;
    double crate, rerate, exba;

    scanf("%d",&t);

    for(i=0; i<t; i++){
        scanf("%d %d %d", &enr, &myr, &ba);

        exba = 300-ba;

        crate =(myr*6)/exba;
        rerate = ((enr - myr+1.00)/ba) * 6.00;

        printf("%0.2lf ",crate);
        printf("%0.2lf\n",rerate);
    }
    return 0;
}
