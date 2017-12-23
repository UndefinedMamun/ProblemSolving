#include <stdio.h>

int main()
{
    double n1,n2,n3,n4,es,avg,favg;
    scanf("%lf %lf %lf %lf",&n1, &n2, &n3, &n4);
    avg = ((n1*2)+(n2*3)+(n3*4)+(n4*1))/(2+3+4+1);
    printf("Media: %.1lf\n",avg);
    if(avg>=7.0)
    {
        printf("Aluno aprovado.\n");
    }
    else if(avg<5.0)
    {
        printf("Aluno reprovado.\n");
    }
    else if(avg>=5.0 && avg<=6.9)
    {
        printf("Aluno em exame.\n");
        scanf("%lf",&es);
        printf("Nota do exame: %.1lf\n",es);
        favg = (avg+es)/2;
        if(favg>=5.0)
        {
            printf("Aluno aprovado.\n");
        }
        else
        {
            printf("Aluno reprovado.\n");
        }
        printf("Media final: %.1lf\n",favg);
    }

    return 0;
}
