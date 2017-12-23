#include <stdio.h>

int main(){

    int i=0,temp;
    double a,notes[6]={100.00,50.00,20.00,10.00,5.00,2.00};
    double coins[6]={1.00,0.50,0.25,0.10,0.05,0.01};
    scanf("%lf", &a);

    printf("NOTAS:\n");
    for(i=0; i<=5; i++){
        temp = (int)(a/notes[i]);
        printf("%d nota(s) de R$ %.2lf\n", temp, notes[i]);
        a = a - (temp*notes[i]);
    }
    a= (int)(a*100);
    printf("MOEDAS:\n");
    for(i=0; i<=5; i++){
        temp = a/(int)(coins[i]*100);
        printf("%d moeda(s) de R$ %.2lf\n", temp, coins[i]);
        a = (int)a%(int)(coins[i]*100);
    }
    return 0;
}
