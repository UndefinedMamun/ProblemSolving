#include <stdio.h>
int pos(char s[8],char c[3][8])
{
    int i,j,k,f=0;
    for(i = 0; s[i] != '\0'; ++i);
    for(j=0; j<3; j++)
    {
        for(k=0; k<i; k++)
        {
            if(c[j][k] != s[k])
            {
                f=0;
                break;
            }
            else
                f=1;
        }
        if(f)
            return j;
    }
}

int main()
{
    int t,i,p1pos,p2pos;
    char p1[8],p2[8],c[3][8]= {"ataque","pedra","papel"};
    scanf("%d",&t);
    for(i=1; i<=t; i++)
    {
        scanf("%s %s",&p1,&p2);
        p1pos = pos(p1,c);
        p2pos = pos(p2,c);

        if(p1pos==0 && p2pos==0)
        {
            printf("Aniquilacao mutua\n");
        }
        else if(p1pos==1 && p2pos==1)
        {
            printf("Sem ganhador\n");
        }
        else if(p1pos==2 && p2pos==2)
        {
            printf("Ambos venceram\n");
        }
        else if( (p1pos==0 || p1pos==1) && (p2pos==0 || p2pos==1))
        {
            if(p1pos == 0)
                printf("Jogador 1 venceu\n");
            else
                printf("Jogador 2 venceu\n");
        }
        else if((p1pos==1 || p1pos==2) && (p2pos==1 || p2pos==2))
        {
            if(p1pos == 1)
                printf("Jogador 1 venceu\n");
            else
                printf("Jogador 2 venceu\n");
        }
        else if((p1pos==0 || p1pos==2) && (p2pos==0 || p2pos==2))
        {
            if(p1pos == 0)
                printf("Jogador 1 venceu\n");
            else
                printf("Jogador 2 venceu\n");
        }
    }
    return 0;
}
