#include <stdio.h>
#include <string.h>

int main()
{
    char sample[7];
    int n,m,i;
    scanf("%d %d",&n,&m);
    for(i=0;i<m;i++)
    {
        scanf("%s",sample);
        if(strcmp(sample,"fechou")==0)
            ++n;
        else if(strcmp(sample,"clicou")==0)
            --n;
    }
    printf("%d\n",n);
    return 0;
}
