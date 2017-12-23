#include <stdio.h>

int main()
{
    int sum,i,c;
    char l[8];
    for(i=1;i<=3;++i)
    {
        sum=0;
        l[0]='z';
        while(l[0] != 'c')
        {
            gets(l);
            if(l[2] == '*')
                ++sum;
            if(l[1] == '*')
                sum+=2;
            if(l[0] == '*')
                sum+=4;
        }
        printf("%d\n",sum);
    }
    return 0;
}
