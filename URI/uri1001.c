#include <stdio.h>

int main(){
    int number, hour;
    double rate;
    scanf("%d",&number);
    scanf("%d",&hour);
    scanf("%lf",&rate);
    printf("NUMBER = %d\nSALARY = U$ %.2lf\n",number, hour*rate);
    return 0;
}
