#include <stdio.h>

int main()
{
    int n;
    char m[12][12]={"January","February","March","April","May","June","July","August","September","October","November","December"};
    scanf("%d",&n);
    printf("%s\n",m[n-1]);
    return 0;
}



