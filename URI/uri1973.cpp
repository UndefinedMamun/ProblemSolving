#include <iostream>
using namespace std;

int main()
{
    long long int n,i,x[100000],sum=0,c=0,s=0;
    cin >> n;
    for(i=0;i<n;i++)
    {
        cin >> x[i];
        sum+=x[i];
    }
    i=0;
    while(i>=0 && i<n)
    {
        if(i>c)
            c=i;
        if(x[i]!=0)
        {
            if(x[i]%2==0)
                --x[i--];
            else
                --x[i++];
            s++;
        }else
            i--;
    }
    //for(i=0;i<n;i++)
        //printf("%lld ",x[i]);
    //printf("\n");
    cout << c+1 << " " << sum-s<<endl;
    return 0;
}



