#include <iostream>
using namespace std;
int main()
{
    int n,i,reg,sreg;
    double score,sscore=0;
    cin >> n;
    for(i=1;i<=n;i++)
    {
        cin >> reg >> score;
        if(score>=8)
        {
            if(sscore<score)
            {
                sscore = score;
                sreg=reg;
            }
        }
    }
    if(sscore!=0)
            cout << sreg << endl;
        else
            cout << "Minimum note not reached" << endl;
    return 0;
}
