#include <stdio.h>

int main(){
    float a,b,c,trinagleArea,circleC,trapezium,square,rectangle;
    #define pi 3.14159
    scanf("%f %f %f",&a, &b, &c);
    trinagleArea = 0.5*a*c;
    circleC = pi*c*c;
    trapezium = 0.5*(a+b)*c;
    square = b*b;
    rectangle = a*b;
    printf("TRIANGULO: %.3f\nCIRCULO: %.3f\nTRAPEZIO: %.3f\nQUADRADO: %.3f\nRETANGULO: %.3f\n",trinagleArea,circleC,trapezium,square,rectangle);
    return 0;
}
