#include <stdio.h>

int main()
{
    int i,m,d,c,r,l[12]={0,31,29,31,30,31,30,31,31,30,31,30};
    while(scanf("%d %d",&m,&d)==2)
    {
        c=0;
        for(i=1;i<m;i++)
            c+=l[i];
        c+=d;
        r=360-c;
        if(r==0)
            printf("E natal!\n");
        else if(r==1)
            printf("E vespera de natal!\n");
        else if(r<0)
            printf("Ja passou!\n");
        else if(r>0)
            printf("Faltam %d dias para o natal!\n",r);
    }
    return 0;
}


