#include <stdio.h>

int main()
{
    char n1[11],n2[33];
    int i,j,c=1,t,p,n;
    while(gets(n1)!=NULL && gets(n2)!=NULL)
    {
        n=0;
        p=0;
        for(i=0;n1[i]!='\0';i++);
        for(j=0;n2[j]!='\0';j++)
        {
            if(n2[j]==n1[0])
            {
                for(t=1;t<i;t++)
                {
                    if(n2[j+t]!=n1[t])
                        break;
                }
                if(t==i)
                {
                    n++;
                    p=j;
                }
            }
        }
        if(n!=0)
            printf("Caso #%d:\nQtd.Subsequencias: %d\nPos: %d\n\n",c,n,p+1);
        else
            printf("Caso #%d:\nNao existe subsequencia\n\n",c);
        for(j=0;n2[j]!='\0';j++)
            n2[j]='\0';
        for(i=0;n1[i]!='\0';i++)
            n1[i]='\0';
        c++;
    }
    return 0;

}
