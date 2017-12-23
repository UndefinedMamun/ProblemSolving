
#include <stdio.h>

int main()
{
    int i,ev=0,odd=0,pos=0,neg=0,n;
    for(i=0;i<5;i++)
    {
        scanf("%d",&n);
        if(n%2==0)

            ev++;
        else
            odd++;

        if(n>0)
            pos++;
        else if(n<0)
            neg++;
    }
    printf("%d valor(es) par(es)\n%d valor(es) impar(es)\n%d valor(es) positivo(s)\n%d valor(es) negativo(s)\n",ev,odd,pos,neg);
}



