#include <stdio.h>

int main()
{
    int t,pa,pb,y;
    double ga,gb;
    scanf("%d",&t);
    for(t;t>=1;t--)
    {
        y=0;
        scanf("%d %d %lf %lf",&pa,&pb,&ga,&gb);
        while(pa<=pb)
        {
            pa=pa+(int)((ga*pa)/100);
            pb=pb+(int)((gb*pb)/100);
            y++;
            if(y>100)
                break;
        }
        if(y<=100)
            printf("%d anos.\n",y);
        else
            printf("Mais de 1 seculo.\n");

    }

    return 0;
}
