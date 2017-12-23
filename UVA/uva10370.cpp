#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int t,N,i,fg[1000];
    cin>>t;
    while(t--)
    {
        cin>>N;
        int total=0;
        for(i=0;i<N;i++)
        {
            cin>>fg[i];
            total+=fg[i];
        }
        double avg = double(total)/N;
        int elizable=0;
        for(i=0;i<N;i++)
        {
            if(fg[i]>avg)
                elizable++;
        }
        cout<<fixed<<setprecision(3)<<(double(elizable)/N)*100<<"%"<<endl;
    }
    return 0;
}
