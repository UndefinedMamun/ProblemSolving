#include <iostream>
#include <cmath>

using namespace std;
int main()
{
    int x1,x2,y1,y2,v,r1,r2,r;
    double d;
    while(cin>>x1>>y1>>x2>>y2>>v>>r1>>r2)
    {
        d=sqrt(((x2-x1)*(x2-x1))+((y2-y1)*(y2-y1)));
        d+=(v*1.5);
        r=r1+r2;
        if(d<=r)
            cout<<"Y\n";
        else
            cout<<"N\n";
    }
    return 0;
}
