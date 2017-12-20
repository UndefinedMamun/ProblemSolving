#include <stdio.h>

int main()
{
    int sh,sm,eh,em,h,m;
    scanf("%d %d %d %d",&sh,&sm,&eh,&em);
    if(sh<eh)
        h=eh-sh;
    else if(sh==eh)
        h=24;
    else
        h=24-(sh-eh);

    if(sm<=em)
        m=em-sm;
    else
    {
        m=60-(sm-em);
        --h;
    }
    if(h==24 && m>0)
        h=0;

    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",h, abs(m));



    return 0;
}
