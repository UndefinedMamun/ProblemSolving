#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
    int n1, n2, n3;
    cin>>n1>>n2>>n3;
    if(n1==n2 || n1==n3 || n2==n3)
    {
        cout<<"S"<<endl;
    }
    else if((n1+n2)==n3 || (n2+n3)==n1 || (n1+n3)==n2)
    {
        cout<<"S"<<endl;
    }
    else
    {
        cout<<"N"<<endl;
    }
    return 0;
}

