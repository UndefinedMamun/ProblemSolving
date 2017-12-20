#include <stdio.h>
#include <string.h>

int main()
{
    char s1[7],s2[13],e1[7],e2[13],temp[3];
    int d=0,h=0,m=0,s,sd,sh,sm,ss,ed,eh,em,es;
    gets(s1);
    gets(s2);
    gets(e1);
    gets(e2);
    sd=atoi(memcpy(temp,s1+4,2));
    sh=atoi(memcpy(temp,s2,2));
    sm=atoi(memcpy(temp,s2+5,2));
    ss=atoi(memcpy(temp,s2+10,2));
    ed=atoi(memcpy(temp,e1+4,2));
    eh=atoi(memcpy(temp,e2,2));
    em=atoi(memcpy(temp,e2+5,2));
    es=atoi(memcpy(temp,e2+10,2));

    /* Calculation of Sec */
    if(ss<=es)
        s=es-ss;
    else
    {
        s=60-ss+es;
        --m;
    }
    /* Calculation of minute */
    if(sm<em)
        m+=em-sm;
    else if(sm==em)
    {
        if(m<0)
        {
            m=59;
            --h;
        }else
            m=0;
    }else
    {
        m+=60-sm+em;
        --h;
    }
    /* Calculation of Hours */
    if(sh<eh)
        h+=eh-sh;
    else if(sh==eh)
        if(h<0)
        {
            h=23;
            --d;
        }else
            h=0;
    else
    {
        h+=24-sh+eh;
        --d;
    }
    /* Calculation of Days and final Output*/
    d+=ed-sd;

    printf("%d dia(s)\n%d hora(s)\n%d minuto(s)\n%d segundo(s)\n",d,h,m,s);


    return 0;
}



