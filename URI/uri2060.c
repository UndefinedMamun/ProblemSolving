#include <stdio.h>

int main()
{
    int numbers[1000],t,i,n2=0,n3=0,n4=0,n5=0;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%d",&numbers[i]);
        if(numbers[i]%2==0)
            n2++;
        if(numbers[i]%3==0)
            n3++;
        if(numbers[i]%4==0)
            n4++;
        if(numbers[i]%5==0)
            n5++;
    }
    printf("%d Multiplo(s) de 2\n%d Multiplo(s) de 3\n%d Multiplo(s) de 4\n%d Multiplo(s) de 5\n",n2,n3,n4,n5);
    return 0;
}
