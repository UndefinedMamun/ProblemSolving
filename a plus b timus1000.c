#include <stdio.h>


int main(){
    int i,j,candidate, electors,votes[10001],result[10001];
    scanf("%d %d",&candidate,&electors);
    /*input votes*/
    for(i=1;i<=electors;i++)
    {
        scanf("%d", &votes[i]);
    }
    /*calculation of votes*/
    for(i=1; i<=electors;i++)
    {
        for(j=1; j<=candidate; j++)
        {
            if(votes[i] == j)
            {
                result[j]++;
                break;
            }
        }
    }
    /* final result in parcentage */
    for(j=1; j<=candidate; j++)
    {
        printf("%.2f%%\n", (float)result[j]*100/(float)electors);
    }

}
