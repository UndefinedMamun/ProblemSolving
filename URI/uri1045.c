#include <stdio.h>

int main()
{
    double a[3],temp,l,r;
    int i,j;
    scanf("%lf %lf %lf", &a[0],&a[1],&a[2]);
    for(i=0;i<3;i++)
    {
        for(j=i+1; j<3; j++)
        {
            if(a[i]<a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }

    l=a[0]*a[0];
    r=(a[1]*a[1])+(a[2]*a[2]);
    if(a[0] >= (a[1]+a[2]))
        printf("NAO FORMA TRIANGULO\n");
    else if(l==r)
        printf("TRIANGULO RETANGULO\n");
    else if(l>r)
        printf("TRIANGULO OBTUSANGULO\n");
    else if(l<r)
        printf("TRIANGULO ACUTANGULO\n");

    if(a[0]==a[1] && a[1]==a[2])
        printf("TRIANGULO EQUILATERO\n");
    else if(a[0]==a[1] || a[1]==a[2])
        printf("TRIANGULO ISOSCELES\n");


    return 0;
}
