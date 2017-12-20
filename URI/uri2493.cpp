#include <iostream>
#include <string.h>
#include <stdlib.h>
#include <string>

using namespace std;

int main()
{
    int t;
    while(cin>>t)
    {
        int i=0;
        int expr[50][3];
        string temps;
        for(i;i<t;i++)
        {
            int lo,ro,r;
            size_t pos,sz;

            cin>>lo;
            getline(cin, temps);
            temps.erase(0,1);
            pos = temps.find('=');
            //ro = stoi(temps.substr(0,pos), &sz);
            cout<<lo<<" "<<temps.substr(0,pos);
            temps.erase(0,pos+1);
            cout<<" "<<temps<<endl;
            //r = stoi(temps, &sz);
            //expr[i][0]=lo;
            //expr[i][1]=ro;
            //expr[i][2]=r;
            //cout<<lo<<ro<<r;

        }
    }

    return 0;
}
