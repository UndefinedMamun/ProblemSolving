#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
    int n, s[100],b[100],a[100],s1[100],b1[100],a1[100];
    int ts=0,tb=0,ta=0,ts1=0,tb1=0,ta1=0;
    string ss;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cin>>ss;
        cin>>s[i]>>b[i]>>a[i];
        cin>>s1[i]>>b1[i]>>a1[i];
        ts+=s[i];
        tb+=b[i];
        ta+=a[i];

        ts1+=s1[i];
        tb1+=b1[i];
        ta1+=a1[i];
    }

    cout<<"Pontos de Saque: "<<fixed<<setprecision(2)<<((double)(ts1*100)/ts)<<" %."<<endl;
    cout<<"Pontos de Bloqueio: "<<fixed<<setprecision(2)<<((double)(tb1*100)/tb)<<" %."<<endl;
    cout<<"Pontos de Ataque: "<<fixed<<setprecision(2)<<((double)(ta1*100)/ta)<<" %."<<endl;
    return 0;
}

