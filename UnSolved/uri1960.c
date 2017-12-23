#include <stdio.h>

int main()
{
    int t,n,m,r[7]= {1,5,10,50,100,500,1000},i,j,k=7;
    char rc[8]= {'I','V','X','L','C','D','M'};
    while(scanf("%d",&n)==1)
    {
        t=n;
        for(i=0; t!=0; i++)
            t=t/10;

        for(j=0;j<6;j++)
        {
            printf("rj=%d rj+1=%d\n",r[j],r[j+1]);
            if(n>=r[j] && n<=r[j+1])
                break;
        }
        t=n;
        /*while(k>0)
        {
            if(t/r[k])
        }*/

        if(n-r[j]<=)
        {
            // j right
            t=t-r[j];


        } else
        {
            // j+1 left
        }

        printf("\n%d\n",j);
    }

    return 0;
}


