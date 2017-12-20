#include <stdio.h>
int pos(char s[8],char c[5][8])
{
    int i,j,k,f=0;
    for(i = 0; s[i] != '\0'; ++i);
    for(j=0; j<5; j++)
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
    int t,i,sp,rp;
    char s[8],r[8],c[5][8]= {"pedra","papel","tesoura","lagarto","spock"};
    scanf("%d",&t);
    for(i=1; i<=t; i++)
    {
        scanf("%s",&s);
        scanf("%s",&r);
        sp=pos(s,c);
        rp=pos(r,c);

        if(sp==rp)
            printf("empate\n",i);
        else if((sp==2 || sp==1) && (rp==1 || rp==2))
        {
            if(sp>rp)
                printf("rajesh\n",i);
            else
                printf("sheldon\n",i);
        }else if((sp==1 || sp==0) && (rp==0 || rp==1))
        {
            if(sp>rp)
                printf("rajesh\n",i);
            else
                printf("sheldon\n",i);
        }else if((sp==0 || sp==3) && (rp==3 || rp==0))
        {
            if(sp<rp)
                printf("rajesh\n",i);
            else
                printf("sheldon\n",i);
        }else if((sp==3 || sp==4) && (rp==4 || rp==3))
        {
            if(sp<rp)
                printf("rajesh\n",i);
            else
                printf("sheldon\n",i);
        }else if((sp==4 || sp==2) && (rp==2 || rp==4))
        {
            if(sp>rp)
                printf("rajesh\n",i);
            else
                printf("sheldon\n",i);
        }else if((sp==2 || sp==3) && (rp==3 || rp==2))
        {
            if(sp<rp)
                printf("rajesh\n",i);
            else
                printf("sheldon\n",i);
        }else if((sp==3 || sp==1) && (rp==1 || rp==3))
        {
            if(sp>rp)
                printf("rajesh\n",i);
            else
                printf("sheldon\n",i);
        }else if((sp==3 || sp==1) && (rp==1 || rp==3))
        {
            if(sp>rp)
                printf("rajesh\n",i);
            else
                printf("sheldon\n",i);
        }else if((sp==1 || sp==4) && (rp==4 || rp==1))
        {
            if(sp<rp)
                printf("rajesh\n",i);
            else
                printf("sheldon\n",i);
        }else if((sp==4 || sp==0) && (rp==0 || rp==4))
        {
            if(sp>rp)
                printf("rajesh\n",i);
            else
                printf("sheldon\n",i);
        }else if((sp==0 || sp==2) && (rp==2 || rp==0))
        {
            if(sp<rp)
                printf("rajesh\n",i);
            else
                printf("sheldon\n",i);
        }else
            printf("empate\n",i);


    }
    return 0;
}

