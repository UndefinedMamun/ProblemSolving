#include <stdio.h>

int main()
{
    int code, quantity;
    float price[6]={0.00,4.00, 4.50, 5.00, 2.00, 1.50};
    scanf("%d %d", &code, &quantity);
    printf("Total: R$ %.2f\n", price[code]*quantity);
    return 0;
}
