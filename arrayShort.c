#include <stdio.h>
int asc(int n[])
{
    int i,temp;
    for(i=0; i<=1; i++)
    {
        if(n[i]>n[i+1])
        {
            temp = n[i];
            n[i]= n[i+1];
            n[i+1] = temp;
            asc(n);
        }
    }
    return n;
}
int main()
{
    int n[3],i;
    scanf("%d %d %d",&n[0],&n[1],&n[2]);
    asc(n);
    for(i=0; i<=2; i++)
    {
        printf("%d\n",n[i]);
    }
    return 0;
}




