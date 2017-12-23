#include <iostream>
#include <string.h>
#include <stdlib.h>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int t;
    while(cin>>t)
    {
        int i,expr[50][3],e;
        char ans;
        vector<string> names;
        string temps;
        for(i=0;i<t;i++)
        {
            int lo,ro,r;
            size_t pos,sz;

            cin>>lo;
            getline(cin, temps);
            temps.erase(0,1);
            pos = temps.find('=');
            ro = stoi(temps.substr(0,pos), &sz);
            temps.erase(0,pos+1);
            r = stoi(temps, &sz);

            expr[i][0]=lo;
            expr[i][1]=ro;
            expr[i][2]=r;
        }
        for(i=0;i<t;i++)
        {
            cin>>temps>>e;
            cin.get();
            cin>>ans;
            int temp;
            bool determinator=false;
            --e;

            if(ans == '+')
            {
                temp = expr[e][0]+expr[e][1];
                determinator = temp == expr[e][2];
            }
            else if(ans == '-')
            {
                temp = expr[e][0]-expr[e][1];
                determinator = temp == expr[e][2];
            }
            else if(ans == '*')
            {
                temp = expr[e][0]*expr[e][1];
                determinator = temp == expr[e][2];
            }
            else
                determinator = (expr[e][2] != expr[e][0]+expr[e][1]) && (expr[e][2] != expr[e][0]-expr[e][1]) && (expr[e][2] != expr[e][0]*expr[e][1]);

            if(!determinator)
                names.push_back(temps);
        }
        if(names.size() == 0)
            cout<<"You Shall All Pass!\n";
        else if(names.size() == t)
            cout<<"None Shall Pass!\n";
        else
        {
            sort(names.begin(), names.end());
            for(i=0; i<names.size(); i++)
            {
                cout<<names[i];
                if(i+1!=names.size())
                    cout<<" ";
            }
            cout<<endl;
        }
        names.clear();
    }
    return 0;
}
