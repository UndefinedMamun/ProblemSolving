#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    int t;
    char c;
    string names[7]={"suco de laranja", "morango fresco", "mamao", "goiaba vermelha", "manga", "laranja", "brocolis"};
    int avc[7]={120,85,85,70,56,50,34};
    while(cin>>t && t!=0)
    {
        int total = 0;
        while(t--)
        {
            int n;
            string name;
            cin>>n;
            getline(cin, name);
            name.erase(0,1);
            int i=0;
            for(i; i<7; i++)
            {
                if(name.compare(names[i]) == 0 )
                    break;

            }
            total+=(n*avc[i]);
        }
        //cout<<"total = "<<total<<endl;
        if(total<110)
            cout<<"Mais "<<(110-total)<<" mg\n";
        else if(total>130)
            cout<<"Menos "<<(total-130)<<" mg\n";
        else
            cout<<total<<" mg\n";
    }

    return 0;

}
