#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;
int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        string name;
        cin>>name;
        double d;
        double s[7];
        cin>>d;
        cin>>s[0];
        double bigger = s[0];
        double smaller = s[0];

            for(int i=1; i<7; i++)
            {
                cin>>s[i];
                if(bigger<s[i])
                    bigger=s[i];
                if(smaller>s[i])
                    smaller = s[i];
            }
            double sum=0;
            for(int i=0;i<7;i++)
            {
                if(s[i] != bigger && s[i] != smaller)
                {
                    sum+=s[i];
                }
            }
            cout<<name<<" "<<fixed<<setprecision(2)<<sum*d<<endl;

    }
}

