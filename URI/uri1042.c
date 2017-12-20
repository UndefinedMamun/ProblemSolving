#include <stdio.h>

int main()
{
    int n[3],temp,i,j,o[3];
    scanf("%d %d %d",&n[0],&n[1],&n[2]);
    for(i=0; i<3; i++)
        o[i]=n[i];
    for(i=0; i<3; i++)
    {
        for(j=i+1; j<3; j++)
        {
            if(n[i]>n[j])
            {
                temp = n[i];
                n[i] = n[j];
                n[j] = temp;
            }
        }
    }

    for(i=0; i<3; i++)
    {
        printf("%d\n",n[i]);
    }
    printf("\n");
    for(i=0; i<3; i++)
    {
        printf("%d\n",o[i]);
    }

    return 0;
}



