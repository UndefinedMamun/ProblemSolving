#include <stdio.h>

int main(){
    int p1code, p2code, p1unit, p2unit;
    float p1price, p2price;
    scanf("%d %d %f",&p1code, &p1unit, &p1price);
    scanf("%d %d %f",&p2code, &p2unit, &p2price);
    printf("VALOR A PAGAR: R$ %.2f\n", (p1unit*p1price)+(p2unit*p2price));
    return 0;
}
