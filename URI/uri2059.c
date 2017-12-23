#include <stdio.h>

int main()
{
    int p,j1,j2,r,a,isEv=0;
    scanf("%d %d %d %d %d",&p,&j1,&j2,&r,&a);
    if(r==1)
    {
        if(a==1)
        {
            printf("Jogador 2 ganha!\n");
            return 0;
        } else
        {
            printf("Jogador 1 ganha!\n");
            return 0;
        }
    }
    if((j1+j2)%2==0)
        isEv=1;
    if(p==isEv)
        printf("Jogador 1 ganha!\n");
    else
        printf("Jogador 2 ganha!\n");

    return 0;
}
