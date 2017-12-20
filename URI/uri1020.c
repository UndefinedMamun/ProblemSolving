#include <stdio.h>

int main(){
    int d,m,y;
    scanf("%d",&d);
    y = d/365;
    m = (d-(y*365))/30;
    d = d-((y*365)+(m*30));
    printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n",y,m,d);
    return 0;
}

