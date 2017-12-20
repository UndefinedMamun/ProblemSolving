#include <stdio.h>

int main()
{
    int ig,gg,t,m=0,iv=0,gv=0;
    while(1)
    {
        scanf("%d %d",&ig,&gg);
        m++;
        if(ig>gg)
            iv++;
        else if(ig<gg)
            gv++;
        printf("Novo grenal (1-sim 2-nao)\n");
        scanf("%d",&t);
        if(t!=1)
            break;
    }
    printf("%d grenais\n",m);
    printf("Inter:%d\n",iv);
    printf("Gremio:%d\n",gv);
    printf("Empates:%d\n",m-(iv+gv));
    if(iv==gv)
        printf("Não houve vencedor\n");
    else if(iv>gv)
        printf("Inter venceu mais\n");
    else
        printf("Gremio venceu mais\n");
    return 0;
}
