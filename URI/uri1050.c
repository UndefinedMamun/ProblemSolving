#include <stdio.h>

int main()
{
    int n[8]={61,71,11,21,32,19,27,31},i,c,t=0;
    scanf("%d",&c);
    char d[8][50]={"Brasilia","Salvador","Sao Paulo","Rio de Janeiro","Juiz de Fora","Campinas","Vitoria","Belo Horizonte"};
    for(i=0;i<8;i++)
    {
        if(n[i]==c)
        {
            printf("%s\n",d[i]);
            t=1;
            break;
        }
    }
    if(t==0)
        printf("DDD nao cadastrado\n");
    return 0;
}
