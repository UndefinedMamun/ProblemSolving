#include <stdio.h>

int main()
{
    float a,b,c,r1,r2,sqrtv;
    scanf("%f %f %f", &a, &b, &c);
    sqrtv = (b*b)-(4*a*c);
    if(a>0 && sqrtv>=0){
        r1 = (-b+sqrt(sqrtv))/(2*a);
        r2 = (-b-sqrt(sqrtv))/(2*a);
        printf("R1 = %.5f\nR2 = %.5f\n",r1, r2);
    } else{
        printf("Impossivel calcular\n");
    }

    return 0;
}
