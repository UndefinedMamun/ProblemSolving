#include <stdio.h>

int decToBin(int m);
int hexToDec(int m);

int main()
{
    int n,m,b1,b2,i=0;
    scanf("%d",&n);
    for(i;i<n;i++){
        scanf("%d",&m);
        b1 = decToBin(m);
        b2 = hexToDec(m);
        printf("%d %d\n",b1, b2);
    }
    return 0;
}

int decToBin(int m){
    int rem,index=0,binary[100],l,c=0;
    while(m != 0 ){
        rem = m%2;
        binary[index++] = rem;
        m = m/2;
    }
    for(l=index-1;l>=0;l--)
    {
        if(binary[l] != 0){
            c++;
        }
    }
    return c;
}
int hexToDec(int m){
    int rem,dec=0,l=1;
    while(m != 0 ){
        rem = m%16;
        dec = dec+ (rem*l);
        m = m/16;
        l=l*10;
    }
    return dec;
}

