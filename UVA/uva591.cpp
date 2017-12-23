#include <iostream>

using namespace std;

int main()
{
    int n,h[50],t,m,index=1;
    while(cin>>n && n!=0)
    {
        t=0,m=0;
        for(int i =0; i<n; i++)
        {
            cin>>h[i];
            t+=h[i];
        }
        int minH = t/n;
        for(int i =0; i<n; i++)
        {
            if(h[i]>minH)
                m+=(h[i]-minH);
        }
        cout<<"Set #"<<index<<endl;
        cout<<"The minimum number of moves is "<<m<<"."<<endl<<endl;
        index++;
    }
    return 0;
}
