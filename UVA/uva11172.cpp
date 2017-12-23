#include <iostream>

using namespace std;

int main()
{
    int t;
    int first, second;
    cin>>t;
    while(t--)
    {
        cin>>first>>second;
        if(first>second)
            cout<<">"<<endl;
        else if(first<second)
            cout<<"<"<<endl;
        else
            cout<<"="<<endl;
    }
    return 0;
}
