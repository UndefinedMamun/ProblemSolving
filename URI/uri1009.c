#include <stdio.h>

int main(){
    char name[100];
    double salary, sale;
    scanf("%s", name);
    scanf("%lf",&salary);
    scanf("%lf",&sale);
    printf("TOTAL = R$ %.2lf\n",salary+((sale*15)/100));
    return 0;
}
