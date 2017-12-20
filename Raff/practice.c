#include <stdio.h>
#include <string.h>

int sToI(char s[2])
{
    int i,n=0,e=0,h;
    for(h=0;s[h]!='\0';h++);
    for(i=h-1;i>=0;i--)
    {
        n+=((int)s[i] - 48)*pow(10,e++);
    }
    return n;
}

int main()
{
    int h,m;
    char s[6],hs[2]="9",ms[2];
    h=sToI(hs);
    m=sToI(ms);
    if(h>=7)
    {
        printf("Atraso maximo: %d\n",((h-7)*60)+m);
    } else
    {
        printf("Atraso maximo: 0\n");
    }
    return 0;
}

