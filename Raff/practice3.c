#include <stdio.h>

int main()
{
    int t,n,m,r[7]= {1000,500,100,50,10,5,1},i,j;
    char rc[8]= {'M','D','C','L','X','V','I'};
    while(scanf("%d",&n)==1)
    {
        t=n;
        for(i=0; t!=0; i++)
            t=t/10;

        for(j=10;j<=100;j++)
        {
            m=(int)pow(10,j);
            printf("m=%d\n",m);
            t=n/m;
            t=t*m;
            t=n-t;
            printf("%d ",t);

        }
        printf("\n%d\n",i);
    }

    return 0;
}


