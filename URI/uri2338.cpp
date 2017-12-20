#include <iostream>
#include <iomanip>
#include <cmath>
#include <string.h>

using namespace std;

int main()
{
    string line;
    char letters[26]= {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
    string res[26]=
    {
        "=.===",
        "===.=.=.=",
        "===.=.===.=",
        "===.=.=",
        "=",
        "=.=.===.=",
        "===.===.=",
        "=.=.=.=",
        "=.=",
        "=.===.===.===",
        "===.=.===",
        "=.===.=.=",
        "===.===",
        "===.=",
        "===.===.===",
        "=.===.===.=",
        "===.===.=.===",
        "=.===.=",
        "=.=.=",
        "===",
        "=.=.===",
        "=.=.=.===",
        "=.===.===",
        "===.=.=.===",
        "===.=.===.===",
        "===.===.=.="
    };

    int t;
    cin>>t;
    while(t--)
    {
        cin>>line;
        string token;
        size_t pos = 0;
        string del = "...";
        while( (pos=line.find(del)) != string::npos )
        {
            token = line.substr(0,pos);
            //cout<<token;
            //if(token.compare("") == 0)
            if(token == "")
            {
                cout<<" ";
                line.erase(0,pos+del.length()+1);
            }
            else
            {
                //cout<<token;
                int i = 0;
                for(i; i<26; i++)
                {
                    if(token == res[i])
                        break;
                }
                //cout<<"     "<<letters[i]<<endl;
                cout<<letters[i];
                line.erase(0,pos+del.length());
            }

        }
        int i = 0;
        for(i; i<26; i++)
        {
            if(line == res[i])
                break;
        }
        cout<<letters[i]<<endl;
    }

    return 0;
}
